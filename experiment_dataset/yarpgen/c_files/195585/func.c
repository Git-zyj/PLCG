/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195585
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */short) min((((/* implicit */unsigned int) (unsigned short)50853)), (((((/* implicit */unsigned int) -820762852)) & (3962876895U)))));
                arr_4 [i_0] [i_0] = ((/* implicit */short) ((262248264215858242LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-77)))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned short i_3 = 4; i_3 < 20; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((((/* implicit */_Bool) (+(arr_11 [i_0] [i_1] [i_2] [i_2])))) ? (min((((/* implicit */long long int) arr_9 [i_2] [(short)16] [(short)16])), (-2571349432214851316LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_4 + 4] [i_2]))))) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3 - 2]))))))));
                                var_15 *= ((/* implicit */unsigned int) ((unsigned short) (-(((arr_12 [i_0] [i_0] [i_0] [13LL] [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                                arr_13 [i_4] = arr_3 [i_2] [i_2] [i_1];
                                var_16 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) ((arr_0 [i_2]) / (((/* implicit */long long int) arr_9 [i_4] [i_4] [i_4]))))), (((arr_3 [i_0] [i_1] [i_4]) - (((/* implicit */unsigned long long int) var_2)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                                var_17 -= ((/* implicit */short) ((((/* implicit */long long int) ((int) min((var_12), (((/* implicit */unsigned long long int) arr_6 [i_3] [i_3])))))) - (min((min((-2571349432214851314LL), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) min((682835214), (((/* implicit */int) (unsigned short)50867)))))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) arr_2 [(short)17] [i_1] [i_0])), (arr_7 [i_0] [i_0] [i_1] [i_1]))) & (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14692))) * (arr_2 [i_0] [i_0] [i_0]))))));
                arr_14 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_1])) <= (((((/* implicit */_Bool) (unsigned short)15872)) ? (((/* implicit */long long int) ((/* implicit */int) (short)22458))) : (-2571349432214851337LL))))))) + (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_0]))) / (max((((/* implicit */long long int) 788689998)), (-262248264215858225LL)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        for (short i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                {
                    var_19 *= ((/* implicit */unsigned long long int) arr_22 [i_7] [i_6]);
                    arr_23 [i_7] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (unsigned short)46649);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) max((max((((/* implicit */short) var_4)), ((short)-10070))), (var_5)))) + (((/* implicit */int) max((((/* implicit */unsigned char) ((var_12) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))), (var_7))))));
}
