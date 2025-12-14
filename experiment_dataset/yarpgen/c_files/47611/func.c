/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47611
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
    var_11 = ((/* implicit */long long int) var_2);
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_13 -= ((((/* implicit */long long int) ((/* implicit */int) var_7))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) min((arr_6 [17ULL]), (var_2)))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 2] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_0 [12ULL]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((((/* implicit */int) var_6)) <= (arr_5 [i_1 + 1] [(unsigned short)14] [(unsigned short)14]))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))) <= (var_10)));
                        var_15 -= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_1 + 1])) & (((/* implicit */int) arr_3 [(_Bool)1] [i_0 - 1] [i_1 + 1])))) % ((~(((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_1 + 1]))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_0] [i_1] [i_1 + 1] [i_1 + 1])) ? (var_2) : (((/* implicit */int) arr_12 [i_1 + 1] [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))) ? (((/* implicit */long long int) max((arr_6 [i_1 + 1]), (arr_6 [i_1 + 1])))) : (arr_0 [(unsigned char)5])));
                            var_17 = ((/* implicit */signed char) min((var_17), (var_7)));
                        }
                        var_18 = ((/* implicit */int) ((2529442331U) > (((/* implicit */unsigned int) 2147483647))));
                        var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(short)14])) ? (((((/* implicit */_Bool) arr_11 [i_0] [12ULL] [i_3])) ? (((/* implicit */int) var_3)) : (arr_6 [i_1]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (max((((/* implicit */unsigned long long int) var_0)), (((var_3) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                    }
                    arr_13 [i_2] [i_0] [i_0] [i_0 - 2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((((/* implicit */int) var_6)) + (((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) -2147483647)))))))), (((((((/* implicit */int) arr_10 [i_0 - 2] [(signed char)10] [i_0 - 1] [i_0 - 1] [i_0 + 2])) < (((/* implicit */int) var_9)))) ? (max((arr_0 [i_0 - 1]), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (-2147483647) : (((/* implicit */int) (unsigned short)58511)))))))));
                }
            } 
        } 
    } 
}
