/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49025
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
    var_16 = ((/* implicit */signed char) min((var_1), (((/* implicit */int) var_9))));
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))) ? (((long long int) var_12)) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (max((((/* implicit */unsigned long long int) (unsigned short)57220)), (min((var_2), (((/* implicit */unsigned long long int) var_8)))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) ((min((arr_4 [i_2 - 1] [3U] [i_3 + 1]), (var_6))) ? (((/* implicit */int) min((((((/* implicit */int) arr_8 [i_0])) < (((/* implicit */int) (signed char)-15)))), (((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 40479924U))))))) : (((/* implicit */int) arr_12 [1] [i_3 - 1]))));
                        var_18 = ((/* implicit */_Bool) max((min((min((var_0), (((/* implicit */int) arr_0 [i_1])))), (((((/* implicit */int) arr_3 [i_0])) >> (((((/* implicit */int) arr_0 [i_0 - 1])) - (10285))))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_2 - 1])) : (arr_9 [i_0] [i_0 + 2] [i_2 - 1])))));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */signed char) min((min((arr_16 [(_Bool)1] [(_Bool)1] [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 1]), ((~(arr_6 [i_0]))))), (((/* implicit */int) var_6))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_7 [i_0] [i_3 + 1] [i_2]))));
                            var_21 = ((/* implicit */int) min((arr_13 [i_0] [i_0] [i_2] [i_0]), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_12 [i_1] [(unsigned char)9])) >= (arr_6 [i_0]))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)122)), (arr_3 [i_0])))) : (((/* implicit */int) ((_Bool) arr_3 [i_4]))))))));
                            var_22 = ((/* implicit */unsigned long long int) arr_0 [i_2]);
                        }
                        var_23 ^= ((/* implicit */signed char) ((int) ((long long int) var_15)));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_0 - 3] [i_0 - 3] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_2])) ? (var_1) : (((/* implicit */int) var_15))))) : (var_2)));
                        var_25 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) 40479922U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 + 2] [i_1] [i_1]))) : (var_7))));
                        arr_23 [i_0 - 1] [i_1] [i_2 - 1] [i_5] = ((/* implicit */unsigned short) ((arr_22 [i_0 - 1] [i_0 + 2]) >= (((/* implicit */unsigned int) arr_2 [i_0 + 2] [i_0 - 2]))));
                    }
                    var_26 &= ((/* implicit */_Bool) 4254487374U);
                }
            } 
        } 
    } 
}
