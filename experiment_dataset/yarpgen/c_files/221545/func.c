/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221545
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 9; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */long long int) ((unsigned long long int) 10920223357739098809ULL));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 8; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_3] = ((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))));
                                var_17 = ((/* implicit */signed char) arr_6 [i_0] [i_2] [i_4]);
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_0;
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] = min((arr_0 [i_0]), (((/* implicit */unsigned long long int) ((arr_0 [i_0]) < (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((var_5) < (((/* implicit */long long int) arr_3 [(unsigned short)2]))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_6);
    var_19 = ((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) ((6589223401693747690LL) < (9223372036854775807LL))))));
}
