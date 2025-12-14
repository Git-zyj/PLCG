/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216331
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
    var_16 = min((min((min((9223372036854775807LL), (((/* implicit */long long int) (unsigned char)102)))), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) (-(((/* implicit */int) var_13))))));
    var_17 -= ((/* implicit */unsigned char) (_Bool)1);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            arr_5 [i_1] = ((/* implicit */long long int) (!((_Bool)1)));
            var_18 = ((/* implicit */signed char) (unsigned short)52242);
            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 35184372088831ULL))));
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)92))));
        }
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) -1116797154))));
        arr_7 [i_0] = ((/* implicit */_Bool) (short)0);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 12; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 2; i_4 < 12; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            {
                                arr_20 [i_3] [i_2] [i_3] [(unsigned char)12] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3790677062230674528LL))));
                                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(4014863442407382033LL))))));
                                var_22 -= ((/* implicit */unsigned short) (-(min((35184372088831ULL), (((/* implicit */unsigned long long int) -9223372036854775807LL))))));
                                arr_21 [i_0] [i_3] [i_3 + 1] [i_4] [i_5] = ((/* implicit */signed char) (unsigned char)6);
                            }
                        } 
                    } 
                    arr_22 [i_3] [i_2] [i_3] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned short) (!((_Bool)1)))), ((unsigned short)20850)));
                }
            } 
        } 
        arr_23 [i_0] = ((/* implicit */unsigned char) min(((~(0LL))), ((~(9223372036854775806LL)))));
    }
}
