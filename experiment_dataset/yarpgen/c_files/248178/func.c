/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248178
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_14 [(signed char)14] [(signed char)14] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 5113244126870442255ULL)) ? (2049035528) : (-2049035499))), (((/* implicit */int) min((arr_7 [i_0] [i_1] [i_0]), (var_9))))));
                                arr_15 [i_4] [i_2] [(signed char)8] [i_2] [i_0] = ((/* implicit */unsigned long long int) max(((signed char)-65), (((/* implicit */signed char) (_Bool)1))));
                                var_13 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-25)), (-2049035496)))), (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_12))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [1ULL] [i_1] [1ULL] [i_3])) ? (((/* implicit */int) arr_3 [i_0] [i_3] [i_3])) : (min((2049035520), (((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned long long int) var_4);
                    var_15 = ((/* implicit */int) var_11);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (7608366777371046829ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((var_12) >= (var_3)))))))));
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        for (int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_24 [i_5] [i_6] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_6] [i_6] [i_6] [i_6])) || (((/* implicit */_Bool) var_7))));
                    arr_25 [i_7] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_7])) ? (arr_4 [i_5]) : (arr_4 [i_5])))) ? (max((arr_4 [i_7]), (arr_4 [i_5]))) : (arr_4 [i_5])));
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_31 [i_5] [i_5] [i_5] [i_5] [11] [i_5] [i_5] = ((/* implicit */unsigned long long int) (+(arr_20 [i_5] [i_6])));
                                var_17 = ((/* implicit */unsigned short) arr_28 [i_5] [i_5] [i_5] [i_5] [(signed char)8] [i_5] [i_5]);
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_19 [i_7] [i_7] [i_7])))) * (((/* implicit */int) min((((/* implicit */signed char) var_1)), (arr_19 [i_5] [i_7] [i_7])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((4679394337192253811ULL), (((/* implicit */unsigned long long int) ((-2049035492) & (((/* implicit */int) var_8)))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)32271))));
}
