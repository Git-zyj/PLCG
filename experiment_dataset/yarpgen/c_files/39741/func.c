/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39741
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */short) ((signed char) -1732802915));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_19 = ((((/* implicit */_Bool) var_7)) ? (arr_4 [i_3] [i_2] [i_0]) : (((/* implicit */long long int) min((min((14), (((/* implicit */int) var_4)))), (((/* implicit */int) (short)-10049))))));
                                var_20 = ((/* implicit */unsigned char) var_14);
                                var_21 = ((/* implicit */short) ((unsigned short) -1732802915));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7184643666727938667LL)) ? (11791490007313234542ULL) : (((/* implicit */unsigned long long int) -7184643666727938668LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) max((3584542188U), (710425119U)));
}
