/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3063
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
    var_11 = ((/* implicit */unsigned short) (-(max(((-(0ULL))), (0ULL)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_7 [(signed char)5] [i_1] [(unsigned short)0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_2] [i_0]))) & (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61586))) : (19ULL)))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            arr_13 [i_3] [i_3] [i_2] [i_1] [i_1] [(short)6] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((~(((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) arr_12 [i_4 - 2] [i_4 + 1] [i_4 + 3] [i_4 + 2] [i_4 + 3] [i_4 + 3] [i_4 + 1])))))));
                            var_12 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)33918))))) != ((((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [(signed char)12])))) - (((/* implicit */int) ((unsigned char) arr_6 [i_3])))))));
                        }
                        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) (unsigned short)31619)))))));
                        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (~(((((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_3])) << (((((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_3])) - (100))))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                    {
                        var_15 ^= ((/* implicit */unsigned char) (+(arr_0 [(unsigned char)1])));
                        arr_16 [i_1] [i_1] [i_5] = ((/* implicit */signed char) arr_0 [i_0]);
                        arr_17 [i_5] [(signed char)21] [i_2] [21U] [i_1] [i_0] &= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (signed char)-68)) && (((/* implicit */_Bool) (unsigned short)21)))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                    {
                        arr_20 [15ULL] [i_2] [i_6] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_4 [i_0] [i_2]))))));
                        arr_21 [i_6] [i_1] [i_1] [i_0] = ((/* implicit */short) ((unsigned long long int) (unsigned short)28054));
                    }
                    arr_22 [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_19 [i_2])) | (((/* implicit */int) arr_11 [i_2])))) * (((/* implicit */int) var_10))));
                }
            } 
        } 
    } 
    var_16 = max((((/* implicit */unsigned long long int) 3256083772U)), (18446744073709551601ULL));
}
