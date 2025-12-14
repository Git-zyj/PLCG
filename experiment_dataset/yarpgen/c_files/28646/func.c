/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28646
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
    var_18 = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-6090562348112872588LL) : (((/* implicit */long long int) var_15))))))));
    var_19 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (min((var_5), (((/* implicit */unsigned long long int) var_7)))))), (2311903418731090483ULL)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    var_20 += ((/* implicit */long long int) ((unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_7))))));
                    arr_7 [i_2 - 1] [i_1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_7)))))), (((/* implicit */int) arr_0 [i_1 + 3]))));
                    var_21 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_5 [i_0]))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (short)32736)))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_2 - 1]))))) ? (arr_6 [i_0] [i_1 - 1] [i_1 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_0])))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_12 [i_2] [i_2 - 2] [(signed char)3] [i_4] [i_2 - 2] [i_2] = ((/* implicit */int) arr_3 [i_0] [i_0]);
                                arr_13 [i_2 - 1] [i_1 + 1] [i_4] [i_0] [i_4] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned char) var_7))), (min((((/* implicit */unsigned long long int) arr_5 [i_1 + 3])), (((((/* implicit */_Bool) 16134840654978461151ULL)) ? (2311903418731090468ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))));
                                var_22 = ((((/* implicit */_Bool) (short)-32764)) ? (min((17996806323437568ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_1 - 1]))) : (arr_8 [i_1] [10] [i_1] [i_1 + 1])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2 - 2])) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) var_7))))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] = (((~(var_1))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 799194787067879085LL)) ? (((/* implicit */int) arr_3 [4LL] [4LL])) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) arr_10 [i_4 + 1] [i_4 - 2] [i_4 - 2])) : (((/* implicit */int) arr_1 [i_1 + 1]))))));
                                arr_15 [i_2 - 2] [i_2] [i_2 + 1] [i_2 - 2] [10ULL] [i_2] |= ((/* implicit */unsigned int) ((arr_11 [i_0] [5ULL] [i_4 - 1] [i_0]) | (((/* implicit */unsigned long long int) min((min((arr_6 [i_0] [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned int) var_3)))), (arr_8 [i_4] [i_3] [i_2 - 2] [i_1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)55680))))) & (0ULL)))));
    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 16134840654978461132ULL))));
}
