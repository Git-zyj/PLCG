/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200049
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
    var_11 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) min((1908595594U), (((/* implicit */unsigned int) var_3))))) ? (var_0) : (((/* implicit */unsigned int) var_7))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_0] [(short)3] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0]));
                var_12 = ((/* implicit */unsigned int) -1984380471);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 1) 
                {
                    arr_10 [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 - 1])) ? (1984380475) : (339169879)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)18))) >= (var_10))))) : (var_9)));
                    arr_11 [i_2] [i_2] [(signed char)17] [i_2] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (5ULL) : (var_10))));
                    arr_12 [i_0 - 1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0])) ? (1984380483) : (arr_3 [i_1] [i_2 + 2])));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */short) var_1);
                                arr_19 [i_0] [i_2] [i_0] [(short)12] = ((/* implicit */unsigned long long int) var_4);
                                var_14 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)106)) : (var_7))));
                                arr_20 [i_0 - 1] [9ULL] [i_2] = ((/* implicit */int) ((((unsigned long long int) (short)3072)) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)123)))))));
                            }
                        } 
                    } 
                }
                for (signed char i_5 = 2; i_5 < 22; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 22; i_6 += 3) 
                    {
                        for (int i_7 = 1; i_7 < 22; i_7 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((var_9) | (((/* implicit */unsigned long long int) ((1116751264) ^ (((/* implicit */int) (signed char)-82))))))) <= (((/* implicit */unsigned long long int) 1250910857))));
                                var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_25 [(signed char)12] [i_5 + 1] [3ULL] [i_6] [i_7] [i_7])))));
                                var_17 = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) max((1073725440), (var_4)))) ^ (max((3636258862U), (((/* implicit */unsigned int) var_1))))))));
                                arr_28 [i_0] [i_1] [i_5] [i_5] [i_7] |= ((/* implicit */int) ((((1415287369) <= (arr_17 [i_7] [i_7 - 1] [i_7 - 1] [i_7] [i_7 + 1]))) ? (((/* implicit */unsigned int) 32767)) : (((var_0) + (((/* implicit */unsigned int) var_3))))));
                            }
                        } 
                    } 
                    var_18 &= ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((var_4) - (2064382328))), (((int) arr_16 [6] [i_0] [6] [1] [6] [6] [i_5]))))), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))), (2319504725719383861ULL)))));
                }
                for (unsigned int i_8 = 1; i_8 < 22; i_8 += 3) 
                {
                    arr_32 [i_8] |= ((/* implicit */short) var_1);
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (((-(arr_9 [i_0 + 1] [i_8 + 1]))) | (min((((/* implicit */unsigned int) var_7)), (arr_9 [i_0 - 1] [i_8 - 1]))))))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) 536870400)), (var_0))), (((/* implicit */unsigned int) min((arr_13 [i_1] [13ULL]), (var_1))))))) ? ((+(2147352576ULL))) : (max((((/* implicit */unsigned long long int) (+(1984380462)))), (max((var_2), (((/* implicit */unsigned long long int) 4273937338U))))))));
                }
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (arr_21 [i_0 + 1] [(signed char)12] [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -1380207533)) / (arr_7 [i_0 - 1] [i_1] [i_1]))))));
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */int) (signed char)18))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_2 [3ULL])), (2031486575)))) : (11223286254016636124ULL)));
            }
        } 
    } 
    var_23 = ((/* implicit */int) var_0);
}
