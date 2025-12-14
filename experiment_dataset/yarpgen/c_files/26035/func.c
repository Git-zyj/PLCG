/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26035
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
    for (signed char i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) arr_2 [i_2]))));
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_2 [i_2 - 2])) + (2147483647))) << (((((/* implicit */int) var_6)) - (145))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            {
                                arr_15 [i_0 + 2] [i_1] [i_0] [i_4] [i_2] = ((/* implicit */int) arr_0 [i_0 - 1]);
                                var_17 -= ((/* implicit */_Bool) min((((/* implicit */long long int) arr_9 [i_1] [i_1] [i_5])), (min((((long long int) var_11)), (((/* implicit */long long int) max((((/* implicit */int) var_14)), (arr_13 [i_5]))))))));
                                arr_16 [i_2] [i_4] [i_2] [17LL] [i_2] = (-(((((((/* implicit */int) var_13)) * (((/* implicit */int) (signed char)109)))) * (((/* implicit */int) arr_5 [(unsigned char)16] [i_4] [i_2] [i_1])))));
                                arr_17 [i_0] [(unsigned char)8] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */signed char) min((arr_10 [(signed char)20] [i_1 + 2] [i_2 - 3] [i_2 - 3] [i_2 - 3] [(_Bool)1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((int) var_2)) : (arr_13 [i_2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)18)), (var_5)));
}
