/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3998
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (var_10))))) : (((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 4; i_2 < 9; i_2 += 1) 
                {
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((((/* implicit */int) arr_4 [i_2 + 1] [i_2] [i_2 - 2])) - (((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1] [i_2 - 2])))) - (((/* implicit */int) max(((_Bool)0), ((_Bool)1)))))))));
                    arr_8 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_1 + 2] [i_2 - 1])) > (((/* implicit */int) arr_3 [i_1 + 1] [i_2 - 4]))))), (max(((unsigned short)4), (((/* implicit */unsigned short) arr_3 [i_1 - 1] [i_2 + 1]))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        arr_12 [i_2] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_2 + 1] [i_3] [i_3] [i_4]);
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [4]))) : ((~(arr_14 [9] [i_3 + 1] [i_1 + 2] [i_2 - 2] [i_4]))))))));
                            var_22 = ((/* implicit */_Bool) var_3);
                        }
                        var_23 = ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) (signed char)127))))) : (((/* implicit */int) min((arr_4 [i_0] [i_1] [i_3 + 1]), (arr_4 [i_0] [i_1] [i_1])))));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min((((/* implicit */unsigned short) arr_10 [(_Bool)1] [i_1] [(unsigned short)0])), (var_12))))));
                        arr_15 [i_1] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)42021)), (9223372036854775797LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3 + 1] [i_1] [i_1 + 2]))) : (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) var_8))))) ? (((arr_4 [i_0] [i_1] [i_3]) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))));
                    }
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) min((arr_9 [i_0] [i_0] [i_1] [5U]), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_1] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (min((1978686739617289707ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-97)))));
                }
                var_26 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                var_27 = ((/* implicit */long long int) ((((var_11) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((var_12), (((/* implicit */unsigned short) arr_3 [i_0] [i_1]))))))) - (((/* implicit */int) max((((signed char) var_3)), (((/* implicit */signed char) arr_4 [i_1 + 1] [i_0] [i_0])))))));
                var_28 = ((/* implicit */signed char) var_8);
            }
        } 
    } 
    var_29 = ((/* implicit */signed char) var_17);
    var_30 = ((/* implicit */_Bool) min((var_30), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)5191))) >= (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_5))))) ? (((var_3) / (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)-13495)) : (((/* implicit */int) (unsigned short)1023)))))))))));
}
