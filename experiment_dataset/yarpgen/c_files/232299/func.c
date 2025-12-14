/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232299
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 = ((/* implicit */_Bool) (short)32760);
    var_20 -= ((/* implicit */_Bool) var_17);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */short) max((var_21), ((short)0)));
                                var_22 = ((/* implicit */short) (_Bool)1);
                            }
                        } 
                    } 
                    arr_15 [i_2] = ((/* implicit */unsigned int) (short)354);
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) 7835515713322834954LL);
        var_24 *= ((/* implicit */_Bool) 9223372036854775779LL);
    }
    var_25 -= ((/* implicit */short) var_11);
}
