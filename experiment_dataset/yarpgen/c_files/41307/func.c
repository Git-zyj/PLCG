/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41307
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
    var_13 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((unsigned long long int) var_1)))));
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_4 [7U] [i_1] [i_2])), (0ULL))))));
                                var_16 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_5))))));
                                arr_12 [i_1 + 1] [i_1 + 1] [i_2] [i_2] [i_4] [i_1 - 1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551595ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned short)14] [i_1 + 1] [(unsigned short)14]))) : (11619402120205680246ULL))) : (min((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_3 - 1])) ? (7047600758494453517ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((((/* implicit */_Bool) -1768546219)) ? (11399143315215098098ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112)))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_0] [(signed char)6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 + 1])) ? (((((/* implicit */_Bool) arr_4 [(signed char)7] [i_1] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)60)))) : (((/* implicit */int) ((arr_2 [i_0] [i_1]) && (((/* implicit */_Bool) var_1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) max((18446744073709551615ULL), (arr_0 [i_0 - 1] [(short)3])))) ? (((((/* implicit */_Bool) var_12)) ? (arr_8 [i_0] [17U] [17U] [17U]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)60))))) : (arr_8 [i_0] [i_1] [(signed char)17] [i_1])))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (signed char)-61)), (((((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (var_6))))) & (max((var_10), (((/* implicit */unsigned int) (signed char)96))))))));
}
