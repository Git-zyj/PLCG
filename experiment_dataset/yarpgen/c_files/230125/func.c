/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230125
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0 + 3])) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((unsigned long long int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (-(var_6)))))))) : ((+(var_6)))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_1))));
            var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 1]))))) ? ((~((~(var_0))))) : (((((/* implicit */_Bool) (-(2251799809490944LL)))) ? (max((2251799809490933LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((unsigned int) arr_3 [i_0] [i_1 - 1])))))));
            var_11 *= ((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_1]) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))) > (((var_0) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((2251799809490931LL) | (var_8)))))))));
        }
        arr_6 [i_0] = ((/* implicit */long long int) (-(((int) (+(-2251799809490948LL))))));
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 12; i_2 += 4) 
    {
        for (long long int i_3 = 4; i_3 < 14; i_3 += 4) 
        {
            for (unsigned int i_4 = 3; i_4 < 12; i_4 += 2) 
            {
                {
                    var_12 = ((/* implicit */signed char) var_4);
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) arr_14 [i_5] [i_4 + 1] [i_3 - 3] [i_3] [i_3 - 1] [i_3])), (arr_10 [i_3 - 2] [i_3 - 4]))) + (((unsigned int) arr_10 [i_3 - 4] [i_2])))))));
                        arr_15 [i_5] [i_5] [i_4] [i_3] [i_2] = ((/* implicit */long long int) max((arr_3 [i_3 - 1] [i_2 + 2]), (arr_3 [i_3 - 1] [i_2 + 2])));
                        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((unsigned int) (~(((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5] [i_2] [i_2])))))))))));
                        arr_16 [i_5] [i_4 + 2] [i_3 - 4] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_3 [i_2] [i_2])) / (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) arr_10 [i_2] [i_2 + 1])) : ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (var_7)))))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        arr_20 [10LL] [i_3] [i_6] [10LL] = ((/* implicit */unsigned short) arr_17 [i_2] [i_3] [i_4 - 3] [i_4 - 3]);
                        arr_21 [i_6] [i_3] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (0ULL) : (((/* implicit */unsigned long long int) arr_8 [0ULL] [0ULL])))) + (((/* implicit */unsigned long long int) (+(var_6))))));
                        arr_22 [i_6] [i_3] [i_6] [i_6] = ((((/* implicit */_Bool) arr_14 [i_2 - 1] [i_3] [i_4] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [(short)1] [i_2] [i_2 + 1]))) : (arr_4 [(signed char)21] [i_3] [i_2]));
                    }
                }
            } 
        } 
    } 
}
