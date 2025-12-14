/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236524
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) var_15)) != ((+(((/* implicit */int) max((((/* implicit */signed char) var_9)), (var_12))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned int) arr_6 [i_1] [i_1] [i_1]);
                var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((arr_7 [8LL]) <= (arr_7 [i_0])))), ((+(arr_7 [i_0])))));
                arr_8 [i_1] [i_1] [7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_7 [i_0]))) ? (((unsigned int) (+(arr_5 [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_3 [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((arr_6 [i_1] [i_1] [i_1]) / (arr_0 [(_Bool)0]))) : (arr_1 [i_0]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_17 [i_4] [i_4] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) ((var_11) || (((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2]))))) < (((/* implicit */int) arr_13 [i_4] [i_4] [i_4]))))), (max((((/* implicit */long long int) ((((/* implicit */int) arr_10 [(_Bool)1])) <= (((/* implicit */int) arr_11 [i_2]))))), (((arr_12 [12] [12]) ^ (((/* implicit */long long int) arr_14 [(signed char)16] [(unsigned short)20]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_23 [17U] [17U] [i_4] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_22 [i_2] [i_2])) << (((/* implicit */int) ((((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_20 [21ULL] [21ULL] [21ULL] [(signed char)0] [15LL])) - (17623))))) >= (((/* implicit */int) arr_11 [i_2 - 1])))))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) max((arr_13 [(signed char)9] [10LL] [(signed char)9]), (((/* implicit */unsigned short) arr_20 [i_2] [i_2] [i_2] [i_2] [i_2]))))), (((arr_14 [i_4] [(short)2]) | (((/* implicit */int) arr_16 [i_3] [i_3]))))))) ? ((~(((var_15) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_12 [i_2] [i_2]))))) : (var_7))))));
                                arr_24 [i_4] = (((-(((((/* implicit */_Bool) arr_16 [i_4] [(unsigned char)1])) ? (((/* implicit */int) arr_19 [(_Bool)1] [11] [(_Bool)1] [11] [20] [(_Bool)1])) : (((/* implicit */int) arr_11 [i_5])))))) | (((/* implicit */int) min((arr_13 [i_2 - 1] [i_2 - 1] [i_2 - 1]), (arr_13 [i_2 - 1] [11] [i_2 - 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) var_7);
}
