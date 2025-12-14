/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191869
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
    var_13 |= ((/* implicit */unsigned long long int) var_3);
    var_14 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [(short)5] [(unsigned short)9] [(short)5] [i_0] [i_1] = ((/* implicit */_Bool) max(((((+(((/* implicit */int) (short)-18395)))) * (((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_0] [i_1] [3ULL] [i_1] [(_Bool)1] [(_Bool)1] [(_Bool)1])), ((unsigned short)60147)))))), (((/* implicit */int) (_Bool)0))));
                                arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_0 [i_2 - 1] [i_2 - 1])), (arr_6 [i_0] [i_1])));
                                var_15 = ((/* implicit */long long int) 1747948205185535184ULL);
                                var_16 = ((/* implicit */long long int) ((min((((/* implicit */long long int) var_1)), (arr_7 [i_2 - 1] [i_2] [i_2 - 1]))) > (((((/* implicit */_Bool) arr_1 [i_0])) ? (((var_10) ? (arr_7 [i_0] [(unsigned char)11] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [1U] [i_3] [i_2 + 1] [i_4] [i_4] [i_4] [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2])))))));
                                var_17 = ((/* implicit */_Bool) max((((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_0] [i_0])))) <= (arr_3 [i_1])))), (max((((/* implicit */int) min((arr_1 [i_0]), ((short)120)))), ((~(arr_3 [i_1])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 1; i_5 < 14; i_5 += 3) 
                {
                    for (unsigned char i_6 = 2; i_6 < 14; i_6 += 1) 
                    {
                        {
                            arr_19 [i_0] [i_1] = ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (arr_18 [i_5 + 2] [i_6 - 2] [i_1]))));
                            var_18 -= ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_5])), (((((/* implicit */_Bool) arr_14 [i_6] [(short)12] [(short)12] [(unsigned short)6])) ? (((/* implicit */int) arr_15 [i_5 + 2] [i_5 + 2] [i_1] [i_0])) : (((/* implicit */int) var_3))))));
                            arr_20 [i_0] [(signed char)5] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) ((_Bool) arr_18 [(_Bool)1] [(signed char)4] [i_1]));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_5 [6ULL] [6ULL]))));
                            arr_21 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (short)-15181))));
                        }
                    } 
                } 
            }
        } 
    } 
}
