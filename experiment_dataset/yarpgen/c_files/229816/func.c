/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229816
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (_Bool)0))));
                                arr_13 [(_Bool)1] [i_1] [i_1] [i_2] [i_4] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_5 [i_0]), (arr_5 [i_2])))) ? (((((/* implicit */int) arr_1 [i_0] [i_1])) - (((/* implicit */int) arr_5 [i_0])))) : (((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) arr_5 [i_4]))))));
                                arr_14 [i_1] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)37))) : (((((/* implicit */_Bool) (unsigned short)188)) ? (3583284930U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                    var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0]))) ? (((((((/* implicit */_Bool) 2885144659U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) : (var_12))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)24)))))) : (((/* implicit */unsigned long long int) (((!((_Bool)1))) ? (arr_12 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_0 [i_1] [i_2]))))))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 10; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_20 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5 - 1] [i_5 + 2] [i_5] [i_5 + 2] [1LL] [i_5] [5U])) ? (((/* implicit */int) arr_11 [i_2] [i_5 - 1] [i_5 + 1] [i_5 - 2] [(signed char)10] [i_6] [(unsigned short)11])) : (((/* implicit */int) arr_11 [i_5] [i_5 + 1] [(signed char)6] [i_5 + 3] [i_6] [i_6] [(unsigned char)8])))))));
                                var_21 = ((/* implicit */long long int) arr_3 [i_5 - 2]);
                                var_22 = ((/* implicit */signed char) arr_12 [i_0] [i_1] [i_2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (-(var_11))))));
    var_24 = ((/* implicit */int) ((unsigned short) (~(-836107836))));
}
