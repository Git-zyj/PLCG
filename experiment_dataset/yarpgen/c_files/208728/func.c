/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208728
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
    var_14 = ((/* implicit */long long int) max(((signed char)18), ((signed char)-35)));
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) -4521378699794559439LL)) ? (4521378699794559436LL) : (((/* implicit */long long int) 1059577228)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    arr_6 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) ((signed char) (~(((/* implicit */int) (signed char)-87)))));
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((long long int) arr_4 [i_1 + 1] [i_1 - 2] [i_1])))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((2184835087U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) : (((unsigned long long int) -9223372036854775803LL)))))));
                        arr_13 [i_0] [i_1] [i_3] [i_4] |= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (2110132193U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1 + 1] [i_0 - 2] [i_0 - 1])))));
                    }
                    arr_14 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) -9223372036854775799LL)) ? (-7467874943020681059LL) : (-9223372036854775807LL))), (((/* implicit */long long int) ((unsigned short) ((3074424940U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                    arr_15 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)47917)) ? (max((((((/* implicit */_Bool) (unsigned short)31744)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_1]))) : (2110132216U))), (max((((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_1] [i_1])), (var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_1 - 1] [i_1 - 1] [i_1])))));
                    var_18 = ((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_20 [i_6] = ((/* implicit */signed char) max((4196235326638637723LL), (((/* implicit */long long int) (signed char)-101))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */long long int) min((max((arr_1 [i_0] [i_3]), (arr_1 [i_0 - 2] [i_0 - 2]))), (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))));
                            }
                        } 
                    } 
                }
                arr_22 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)55279)) >> (((1907213128) - (1907213109)))));
                var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) -1431649490159815586LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) && (((/* implicit */_Bool) (~(arr_19 [i_0] [i_0] [i_0])))))))) : (min((7966817715489359696LL), (((/* implicit */long long int) 1907213134))))));
            }
        } 
    } 
}
