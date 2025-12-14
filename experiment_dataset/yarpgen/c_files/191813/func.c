/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191813
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
    var_13 = ((/* implicit */long long int) min((var_13), (((long long int) var_2))));
    var_14 -= ((/* implicit */signed char) max((max(((((_Bool)0) ? (((/* implicit */int) (unsigned short)7535)) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_2)))), (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))) : (min((((/* implicit */long long int) arr_3 [i_0])), (arr_1 [i_0])))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) min(((+(((/* implicit */int) min((var_8), (((/* implicit */unsigned short) (short)3968))))))), (((/* implicit */int) arr_3 [(short)1])))))));
                            var_17 = ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) (_Bool)1)))));
                            var_18 = ((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_0] [19] [i_2] [i_2] [i_3] [(unsigned short)17])), (min((((/* implicit */unsigned short) arr_0 [i_2])), (var_3)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */int) max((var_11), (var_2)))) : (((/* implicit */int) min(((signed char)31), (((/* implicit */signed char) (_Bool)1)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_11);
}
