/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217547
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) arr_4 [i_1] [i_1]);
                            arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_0])) ? (arr_8 [i_0] [i_1] [i_2] [i_3]) : (((/* implicit */int) arr_1 [i_1] [i_1]))))) ? (min((arr_2 [2LL] [2LL]), (((/* implicit */unsigned long long int) (unsigned char)255)))) : (((unsigned long long int) (unsigned short)44910)))) <= (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_5 [i_1] [i_2] [i_1])) & (((/* implicit */int) arr_0 [i_0] [i_1])))), (((/* implicit */int) ((short) 0U))))))));
                            arr_11 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)20625))))) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) var_10))))) && (((/* implicit */_Bool) var_4))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((int) ((((((/* implicit */int) var_10)) << (((arr_2 [i_0] [i_0]) - (6920375705486077771ULL))))) - (((/* implicit */int) ((((/* implicit */int) var_6)) == (var_0))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_4 = 2; i_4 < 18; i_4 += 2) 
    {
        for (unsigned char i_5 = 1; i_5 < 21; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                {
                    arr_19 [i_4] [i_5] [i_6] = min(((-(((/* implicit */int) ((((/* implicit */int) arr_13 [i_4])) != (((/* implicit */int) (unsigned char)110))))))), (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (-(9223372036854775807LL))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 21; i_7 += 4) 
                    {
                        for (signed char i_8 = 3; i_8 < 21; i_8 += 2) 
                        {
                            {
                                arr_26 [i_8] [i_7] [i_4] [i_6] [i_5] [i_4] [i_4] = (-(var_0));
                                var_14 |= ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) arr_18 [i_4] [i_4 + 4])), (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_4] [i_4 + 3])) ^ (arr_20 [i_4] [i_4 + 2] [i_5 + 1] [i_7 + 1]))))));
                                arr_27 [i_8] [i_7] [i_6] [i_4] [i_4] [i_4] = ((/* implicit */int) var_1);
                                arr_28 [i_4 + 2] [i_4] |= ((/* implicit */int) (((!(((/* implicit */_Bool) -850316400)))) ? (max((((/* implicit */unsigned long long int) min(((unsigned short)44910), (((/* implicit */unsigned short) (signed char)-75))))), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_6]))))))))));
                                arr_29 [i_4] [i_5] [i_6] [i_6] [i_8] = ((unsigned char) 4294967295U);
                            }
                        } 
                    } 
                    arr_30 [i_4] [i_5 + 1] [i_6] [i_6] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (arr_2 [i_5] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_4 + 4] [i_5 + 1])) && (((/* implicit */_Bool) arr_21 [i_4 - 2] [i_5]))))))))));
                    arr_31 [i_6] [i_5] [i_4] = ((((/* implicit */_Bool) arr_0 [i_4 + 4] [i_5 - 1])) ? (((/* implicit */int) arr_0 [(unsigned short)8] [i_5 - 1])) : (((/* implicit */int) max((arr_0 [22LL] [i_5 - 1]), (((/* implicit */unsigned char) (signed char)7))))));
                }
            } 
        } 
    } 
    var_15 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((+(7381597745042482433ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 436201173)), ((-9223372036854775807LL - 1LL)))))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_2)) - (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)65216))))))));
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_11))));
    var_17 = ((/* implicit */_Bool) ((long long int) ((int) max((2147483638), (((/* implicit */int) var_4))))));
}
