/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54058
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
    var_14 -= ((/* implicit */_Bool) var_7);
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */long long int) min(((unsigned short)9771), (((/* implicit */unsigned short) (_Bool)1))));
                    var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) max(((short)32767), ((short)-32765)))), ((unsigned short)9772)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0 - 1] [(unsigned short)12] [i_1] [i_2 - 1] [(unsigned short)0] [i_4] |= ((/* implicit */_Bool) (unsigned short)55764);
                                var_17 = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((/* implicit */unsigned short) max((((/* implicit */short) (unsigned char)88)), ((short)32767)))), (min(((unsigned short)46803), (((/* implicit */unsigned short) (_Bool)1))))))), (min((-8633590218991462532LL), (((/* implicit */long long int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = var_4;
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned char)131)), (1105083719105189249LL)));
    var_20 = ((/* implicit */long long int) var_0);
}
