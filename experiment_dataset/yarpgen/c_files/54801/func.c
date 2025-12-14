/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54801
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1 - 2] [i_0] = ((/* implicit */unsigned int) var_0);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */int) (signed char)81)) >= (((/* implicit */int) ((_Bool) ((((/* implicit */int) (signed char)-50)) * (((/* implicit */int) (signed char)-76)))))))))));
                                arr_14 [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_7 [i_2 + 1])) | (((/* implicit */int) arr_1 [i_2 - 2] [i_0])))), (((/* implicit */int) var_10))));
                                var_12 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) var_9)) & (((/* implicit */int) arr_11 [i_1 + 3] [i_1 + 3] [i_1 - 3] [i_1 - 3])))));
                                arr_15 [i_0] [i_0] [i_0] [i_3] [i_3] [i_3] [i_2] = ((((((/* implicit */_Bool) (signed char)94)) || (((/* implicit */_Bool) (signed char)-95)))) ? (((/* implicit */int) ((min((arr_4 [i_2]), (arr_11 [i_0] [i_0] [i_3] [11LL]))) || (((/* implicit */_Bool) min((7236816438766333679LL), (((/* implicit */long long int) (signed char)77)))))))) : (((int) ((((/* implicit */_Bool) arr_2 [i_4])) ? (arr_5 [i_0] [i_0] [i_4]) : (((/* implicit */int) arr_1 [i_2 - 1] [i_0]))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_2])) - (((/* implicit */int) arr_11 [i_0] [0ULL] [i_1] [i_2]))))), (min((arr_6 [i_0] [i_1 - 3] [i_2]), (((/* implicit */long long int) arr_1 [i_0] [i_1]))))))) ? (((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)94)))), (max((((/* implicit */int) arr_1 [i_0] [(signed char)9])), (arr_5 [i_2] [(_Bool)1] [i_2 - 1])))))) : (min((((/* implicit */long long int) arr_11 [i_2] [i_2 - 1] [i_1 + 1] [i_0])), (min((((/* implicit */long long int) arr_12 [i_0])), (arr_6 [i_0] [i_0] [i_2])))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 19; i_6 += 1) 
                        {
                            {
                                arr_21 [i_6] [i_1] = ((/* implicit */int) min((((((((/* implicit */_Bool) arr_1 [i_5] [i_6])) ? (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])) : (arr_6 [i_0] [i_0] [i_5]))) & (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0])) ^ (((/* implicit */int) arr_11 [i_6 - 2] [17LL] [i_1] [i_0]))))))), (((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) arr_7 [i_2]))))))));
                                var_14 += ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_3 [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_0] [i_0] [8] [(_Bool)1])))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0])) - (((/* implicit */int) arr_1 [i_1] [i_6]))))))) ? ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_1 - 2])) + (((/* implicit */int) arr_8 [i_0]))))) - (-223537179196726184LL))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((((/* implicit */long long int) var_5)), (min((arr_0 [i_1 - 2]), (arr_0 [i_1 + 3]))))))));
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) max(((+(((/* implicit */int) (signed char)-94)))), (((/* implicit */int) var_2))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101)))))))));
    var_17 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) max((var_0), (((/* implicit */short) (signed char)-61)))))) * (var_7))) * (((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */short) var_8)), (var_5)))), (((((/* implicit */int) var_0)) * (((/* implicit */int) var_2)))))))));
    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)5014), (((/* implicit */unsigned short) var_4)))))) : ((-(var_3))))) - (var_3)));
}
