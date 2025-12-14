/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40623
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
    for (signed char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_13 [13] [5] [(signed char)17] [2LL] [8] [(signed char)6] [(short)9] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [(short)2] [i_0 + 2] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)(-127 - 1)))))), (((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_6 [(_Bool)1] [(short)14] [17ULL] [7LL]))) + (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_2 [5ULL] [13LL] [(signed char)15])), (2175967507U))))))));
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((_Bool) arr_9 [i_4] [0] [(_Bool)1] [(short)12] [(unsigned char)0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(short)5] [13])) ? (arr_11 [(_Bool)1] [(unsigned char)2] [(_Bool)1] [(unsigned char)5] [(unsigned short)2]) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))) ? (min((((/* implicit */long long int) arr_0 [(_Bool)1] [(short)13])), (arr_3 [(_Bool)0] [(unsigned char)1]))) : (var_14))) : (((var_12) / (((/* implicit */long long int) (-(((/* implicit */int) var_5))))))))))));
                                arr_14 [(signed char)11] [(short)6] = ((/* implicit */short) (~(((/* implicit */int) max((var_10), (((/* implicit */unsigned short) arr_0 [i_0 + 2] [i_0 + 1])))))));
                                arr_15 [(unsigned char)13] [1LL] [(signed char)7] [17U] [(unsigned char)5] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (short)28028)) / (((/* implicit */int) (short)5687))))), (((((/* implicit */_Bool) arr_11 [i_0 - 2] [(unsigned char)5] [(unsigned char)4] [i_1 - 1] [(unsigned short)6])) ? (arr_11 [i_0 + 1] [9] [(_Bool)1] [i_1 - 1] [(short)13]) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
                                arr_16 [(unsigned short)14] [16] [14LL] [(unsigned char)6] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) (unsigned char)5)))));
                            }
                        } 
                    } 
                    arr_17 [(_Bool)1] [14] [(unsigned char)6] = ((/* implicit */_Bool) (unsigned short)2040);
                    arr_18 [(short)6] [(short)13] [(_Bool)1] = var_9;
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                arr_23 [13LL] [(_Bool)1] [(unsigned short)3] [(unsigned char)0] [i_5] = ((/* implicit */signed char) var_5);
                                var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 1] [(_Bool)1] [i_0 - 1] [i_1 - 2])) | (((/* implicit */int) arr_9 [i_0 + 2] [i_0 - 2] [(_Bool)1] [i_0 + 2] [i_1 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)(-127 - 1))))) : (max((((/* implicit */long long int) arr_9 [i_0 + 2] [i_0 + 2] [(signed char)11] [i_0 - 1] [i_1 - 3])), (arr_11 [(_Bool)1] [i_0 - 2] [i_0 + 1] [i_0 + 1] [(unsigned char)1])))));
                                arr_24 [(short)15] [i_5] [(unsigned short)1] [(signed char)5] [(short)6] = ((((/* implicit */_Bool) (unsigned char)251)) ? ((+(((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (signed char)77)) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) ((_Bool) var_2))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (((((+(((/* implicit */int) var_11)))) == (((/* implicit */int) var_9)))) ? (max(((+(511LL))), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) == (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)32766))))))))));
}
