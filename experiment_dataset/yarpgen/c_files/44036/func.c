/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44036
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
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((var_15) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_8))) : (((((/* implicit */long long int) ((/* implicit */int) var_2))) | (var_8))))) - (8453584651848082793LL)))));
    var_20 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 3; i_2 < 21; i_2 += 2) 
                {
                    arr_8 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((min((((/* implicit */long long int) (!(((/* implicit */_Bool) -8879584413843129741LL))))), (max((((/* implicit */long long int) arr_3 [i_1] [(unsigned char)1])), (var_8))))) > (min((((/* implicit */long long int) ((unsigned char) 366353796))), (arr_7 [i_2 + 2] [i_2 - 3] [i_2 - 1])))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)26), ((signed char)-62)))) ? (((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1])))))) : ((-(arr_7 [i_2 - 2] [i_2 - 1] [i_2 + 1])))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */signed char) min((arr_0 [i_2] [i_2 - 1]), (arr_0 [i_2 - 2] [i_3 + 1])));
                        arr_11 [(unsigned char)6] [i_1] [22] [(unsigned char)6] = ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) ^ (arr_7 [i_2 - 3] [i_3 + 1] [(unsigned short)21]));
                    }
                    arr_12 [i_2 + 2] [i_1] [i_1] [11LL] = ((/* implicit */signed char) max((((long long int) min((((/* implicit */unsigned long long int) (signed char)105)), (2741113683361182300ULL)))), (min((var_9), (((/* implicit */long long int) var_12))))));
                    arr_13 [i_0] [(signed char)1] [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [(signed char)12] [i_1]))))));
                }
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [(unsigned short)8] [(unsigned short)8])) >> (((((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (arr_5 [(signed char)22]) : (((((/* implicit */_Bool) var_16)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [6LL]))))))) - (9726077861676184214ULL))))))));
                var_24 = ((/* implicit */signed char) arr_9 [5ULL] [i_0] [5ULL]);
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) var_3);
}
