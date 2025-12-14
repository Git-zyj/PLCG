/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219156
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
    var_15 = ((/* implicit */int) (~(var_0)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) max((var_16), ((-(((((/* implicit */_Bool) arr_7 [i_4 + 2])) ? (arr_7 [i_4 - 2]) : (arr_7 [i_4 + 3])))))));
                                arr_11 [i_4] [i_2] [i_2] [i_1] [i_0] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) arr_7 [i_1])))));
                                arr_12 [i_4] [i_1] [i_1] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_4 - 2] [(unsigned short)1] [8U] [i_4 + 1])) ? (arr_10 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4]) : ((~(arr_5 [i_0] [i_1] [i_2])))))) ? (((((unsigned int) arr_4 [i_4] [i_3] [i_2] [i_1])) | (((unsigned int) arr_2 [8U])))) : ((~(((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_3] [i_4])) ? (arr_5 [i_2] [i_3] [i_2]) : (arr_7 [i_4]))))));
                                var_17 += ((/* implicit */long long int) (~(((arr_8 [i_4 + 3] [i_4 + 2] [i_4 + 3] [i_4] [i_4 + 1]) >> (((arr_8 [i_4 - 1] [i_4] [i_4 - 2] [i_4 + 3] [i_4 + 3]) - (3263276071U)))))));
                                var_18 = ((/* implicit */int) max((var_18), (((int) (+(((((/* implicit */_Bool) arr_7 [i_4])) ? (arr_3 [i_0] [i_2] [i_3]) : (arr_3 [i_3] [i_2] [i_1]))))))));
                            }
                        } 
                    } 
                    arr_13 [7U] [7U] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) -1484356257)) || (((/* implicit */_Bool) -3690817206779780775LL)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (-((((~(var_0))) | (((((/* implicit */long long int) var_9)) ^ (var_2)))))));
}
