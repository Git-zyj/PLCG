/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26828
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
    var_14 &= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((-(var_3))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_15 += ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_7 [i_4] [i_4] [(signed char)17] [i_4])) : (arr_3 [i_3] [i_1])))))) : (((((/* implicit */_Bool) ((arr_8 [i_0] [i_1]) ? (arr_4 [i_0] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4])))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_8 [i_0] [i_4])))))))));
                                arr_17 [i_4] [i_4] &= ((unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_13 [i_1])) : (arr_15 [i_0] [i_0] [(short)4] [(short)4] [(short)4]))));
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65519))))))));
                                var_17 -= ((/* implicit */unsigned long long int) ((unsigned char) ((long long int) ((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_3])) ? (arr_12 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4] [i_4])))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [(short)11] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)61974))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) arr_11 [i_2] [i_2] [i_1] [i_0]))))))) : (arr_16 [i_0] [i_0] [i_0] [i_1] [i_2])));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            for (int i_7 = 3; i_7 < 16; i_7 += 4) 
            {
                {
                    var_18 |= ((/* implicit */unsigned long long int) arr_3 [i_7] [i_5]);
                    arr_26 [(unsigned short)18] [i_7 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_6])) ? (((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_14 [i_5] [i_5] [i_6] [i_7] [i_7] [i_7 + 1])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 18446744073709551615ULL)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_7 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5] [i_6] [i_6]))) : (arr_1 [17] [i_6])))) ? (((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_6] [i_7 - 1] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_7] [i_6] [i_6]))) : (arr_1 [i_5] [i_5]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_6] [i_5])) ? (((/* implicit */int) arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_7 [i_5] [i_5] [i_7] [i_5])))))))));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((int) arr_24 [i_5] [i_6] [i_7] [i_5])))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
    {
        arr_29 [i_8] |= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_8])) ? (arr_19 [4U]) : (((/* implicit */int) arr_22 [i_8] [i_8] [i_8]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_8] [i_8] [i_8] [i_8]))) : (arr_4 [i_8] [i_8] [i_8]))));
        var_20 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) ((short) arr_7 [i_8] [i_8] [i_8] [i_8]))));
        var_21 = ((/* implicit */unsigned int) ((_Bool) ((short) arr_25 [i_8])));
    }
}
