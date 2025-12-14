/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200133
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
    var_15 = ((/* implicit */long long int) max((var_5), (((/* implicit */unsigned int) ((((-1746936157) + (2147483647))) >> (((((/* implicit */int) (signed char)-28)) + (41))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((16721969421969391191ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17209))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_17 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [(_Bool)1] [10LL] [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0] [i_0 - 1])) : (((/* implicit */int) max((arr_0 [(signed char)13] [i_1]), (((/* implicit */unsigned char) arr_2 [i_3] [i_3]))))))) == (((/* implicit */int) arr_0 [i_1 - 1] [i_0 + 1]))));
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_2 [19LL] [i_1]))))))) > ((~(max((15941459960143721348ULL), (2505284113565830280ULL))))))))));
                            var_19 = max((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (unsigned short)53590)))), (((/* implicit */int) (unsigned char)138))))), ((-((~(var_14))))));
                            arr_10 [1ULL] [i_3] [i_3] [i_1] [(signed char)11] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(var_8)))) != (arr_9 [i_1] [17ULL] [i_1])));
                            arr_11 [i_1] [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) min((arr_5 [17ULL] [i_1] [i_1] [i_0 - 1]), (arr_9 [i_0] [(short)15] [i_1])))), (min((var_14), (((/* implicit */unsigned long long int) var_12))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (-((-(((/* implicit */int) var_6)))))))));
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_7)))))))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) ? (((((/* implicit */_Bool) (-(var_14)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)0)))))) : (((/* implicit */int) var_9))));
}
