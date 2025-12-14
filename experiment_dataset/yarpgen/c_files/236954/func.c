/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236954
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
    var_15 = ((/* implicit */unsigned long long int) (short)-14132);
    var_16 = ((/* implicit */int) (+(((max((var_13), (((/* implicit */unsigned int) (short)14140)))) - (max((var_11), (((/* implicit */unsigned int) var_0))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_7 [11] [11] [i_1] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (unsigned short)1406)) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) arr_3 [i_1] [i_0])))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16314514312890188872ULL)) ? (arr_4 [i_2 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26299)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [(unsigned short)11] [i_1] [i_1] [i_3] [(short)6])))))))) : (((/* implicit */int) var_6))));
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) 7909000658193916950ULL))))), (var_14)))), (var_9))))));
                                var_19 = max((((9260284083878760217ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) ((arr_3 [i_2 + 4] [i_2 + 3]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1406)))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_1] [(short)2] = ((/* implicit */signed char) (((-(((/* implicit */int) (short)-14132)))) - (((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [0U] [i_1] [(unsigned short)8])) && (((/* implicit */_Bool) 0ULL))))))))));
            }
        } 
    } 
}
