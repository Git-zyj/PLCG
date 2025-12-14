/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189893
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
    var_10 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))))) ? (min((((/* implicit */unsigned int) arr_3 [i_0])), (arr_0 [i_0] [i_0]))) : (((var_9) << (((arr_0 [i_0] [i_0]) - (2626370668U)))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_12 += ((/* implicit */signed char) min((((/* implicit */long long int) ((arr_8 [i_0] [i_1] [i_2 + 1] [i_3] [i_3]) <= (arr_8 [i_0] [i_0] [i_2 + 1] [i_3] [i_3])))), (((((/* implicit */_Bool) var_5)) ? (arr_8 [i_0] [i_1] [i_2 + 1] [i_3] [i_3]) : (arr_8 [i_0] [i_0] [i_2 + 1] [9ULL] [i_3])))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            arr_13 [i_4] [i_1] [i_1] [i_3] [i_4 - 1] = ((/* implicit */unsigned int) arr_9 [i_0] [i_1] [(short)3] [i_3]);
                            var_13 = ((/* implicit */unsigned short) ((((arr_6 [i_4 - 1] [i_2 + 2] [i_2]) ^ (arr_6 [i_4 - 1] [i_2 - 1] [(short)12]))) >= (min((arr_6 [i_4 - 1] [i_2 - 1] [i_2 - 3]), (arr_6 [i_4 - 1] [i_2 + 2] [i_2])))));
                            arr_14 [i_0] [i_1] [i_2 - 1] [i_0] [i_1] [i_3] [i_4 - 1] &= arr_8 [i_0] [i_0] [i_2] [i_2] [i_4 - 1];
                            var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(arr_11 [i_3])))) / (var_1)))), (min((arr_7 [i_4 - 1] [i_2 - 1] [8] [i_3]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_7)), (var_9))))))));
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_2] [i_4 - 1]))) + (((unsigned int) arr_5 [i_2] [i_2] [i_4 - 1]))));
                        }
                        for (int i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (short)-10377)) % (((int) arr_5 [i_0] [i_1] [i_2 + 2]))));
                            arr_18 [i_5] [i_5] [i_5] [i_5] [i_5] &= ((/* implicit */unsigned char) 1745353605);
                            arr_19 [i_0] [i_1] [i_2 - 2] [i_2 - 2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (var_6)))) ? (((var_7) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_2 + 2] [i_3]))) : (((/* implicit */unsigned long long int) arr_3 [i_3]))));
                        }
                        var_16 += ((/* implicit */unsigned int) ((var_3) < (((/* implicit */long long int) ((/* implicit */int) (!(var_7)))))));
                    }
                } 
            } 
        } 
        arr_20 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_5)), (var_2)))) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) var_2))));
    }
}
