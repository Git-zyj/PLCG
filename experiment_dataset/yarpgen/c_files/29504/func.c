/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29504
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0]))));
                    arr_8 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_0] [(unsigned short)12]);
                    var_14 = ((/* implicit */unsigned char) (~((-(arr_7 [i_2 - 1] [i_2] [i_2 - 1])))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */int) ((unsigned int) ((arr_13 [i_1] [i_2 - 1] [i_4 - 1] [5U]) * (arr_13 [2ULL] [i_2 - 1] [9ULL] [i_2 - 1]))));
                                arr_15 [i_4] [i_1] [i_2 - 1] [(unsigned short)5] [i_4 + 2] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_3] [4LL])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */long long int) arr_6 [12ULL] [i_1] [3ULL])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_2 - 1])) ? (((/* implicit */int) arr_4 [(_Bool)1] [(signed char)11])) : (((/* implicit */int) arr_4 [(signed char)5] [i_0])))))))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_2] [i_1] [i_3] [i_3])), (((((/* implicit */_Bool) arr_7 [i_0] [(short)5] [(signed char)9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) : (arr_13 [i_0] [i_1] [i_0] [4ULL])))))) ? (((((/* implicit */_Bool) arr_14 [i_2] [i_4] [i_2 - 1] [i_2 - 1] [i_2])) ? (arr_14 [3U] [i_4] [i_2 - 1] [i_2 - 1] [i_2]) : (arr_14 [i_2] [i_4] [i_2 - 1] [i_2 - 1] [11]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-127))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_6 [11U] [i_2] [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [(unsigned char)12])) : (((/* implicit */int) arr_11 [9ULL] [i_1] [i_1]))))))))));
                                arr_16 [i_4] [i_4] [(signed char)3] [i_4] [(signed char)6] = (+(((((/* implicit */_Bool) (short)-28820)) ? (((/* implicit */int) arr_12 [i_4 + 2] [i_3] [i_1] [6U] [i_1] [1ULL])) : (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)-8800)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) : (var_3)));
}
