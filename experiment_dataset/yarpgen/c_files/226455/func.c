/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226455
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_5))));
    var_17 = ((/* implicit */unsigned int) (+(var_9)));
    var_18 += ((/* implicit */_Bool) var_9);
    var_19 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 4; i_3 < 8; i_3 += 2) 
                    {
                        var_20 = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((((arr_6 [i_3 + 2] [i_0] [i_0] [0U]) + (arr_0 [i_0] [i_1]))) >> (((arr_4 [i_0] [i_0]) - (2090805440)))))) : (((/* implicit */_Bool) ((((arr_6 [i_3 + 2] [i_0] [i_0] [0U]) + (arr_0 [i_0] [i_1]))) >> (((((arr_4 [i_0] [i_0]) + (2090805440))) - (1895095280))))));
                        var_21 = arr_4 [i_1] [i_1];
                    }
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 9; i_4 += 2) 
                    {
                        for (int i_5 = 1; i_5 < 8; i_5 += 3) 
                        {
                            {
                                arr_19 [i_0] = ((/* implicit */int) var_10);
                                var_22 = ((/* implicit */long long int) arr_16 [i_0] [i_1] [i_2] [i_4] [i_5 + 2] [i_5 + 1]);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) var_13)) / (arr_15 [i_0] [i_0]))))))));
                    arr_20 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2])) * (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [8] [9] [(_Bool)0])))) + (((((/* implicit */int) (signed char)109)) - (2147483647)))));
                }
            } 
        } 
    } 
}
