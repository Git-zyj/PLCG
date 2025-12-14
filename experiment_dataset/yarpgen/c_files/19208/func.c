/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19208
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
    for (signed char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */long long int) (-(((((/* implicit */int) arr_9 [i_0])) - (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_1]))))));
                        var_14 = ((/* implicit */long long int) min((var_14), (max((((((/* implicit */long long int) ((/* implicit */int) arr_5 [(signed char)22] [i_1] [i_2 + 1] [i_3 + 1]))) ^ (-553685441469875182LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(unsigned short)10] [i_2 + 1] [i_3 + 1] [i_3])) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) arr_5 [(signed char)2] [i_1] [i_1] [0])))))))));
                        var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_2)), (var_6)));
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 2) 
                    {
                        var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) << (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)235)), (arr_6 [i_4] [(unsigned short)22])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4] [i_4 + 1]))) : (arr_0 [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_1] [i_4] [i_1]) != (((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [(signed char)6] [i_4] [i_4 + 1])))))))))));
                        var_17 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_4 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)217))) : (553685441469875181LL))) : (min((((/* implicit */long long int) arr_3 [16] [i_1] [i_0])), (553685441469875181LL)))))) : (max(((~(2274462002468487377ULL))), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [(unsigned short)6]))))));
                        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */short) var_6)), (arr_4 [i_0] [i_2]))))));
                        var_19 = ((/* implicit */signed char) var_10);
                    }
                    var_20 = min((((/* implicit */long long int) arr_3 [i_0 + 1] [i_0] [i_0])), (max((arr_0 [i_0]), (((/* implicit */long long int) var_0)))));
                }
            } 
        } 
    } 
    var_21 ^= ((/* implicit */unsigned int) (!(var_2)));
}
