/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229275
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
    var_16 = ((/* implicit */unsigned int) ((_Bool) var_2));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 33554431LL)) ? (((/* implicit */unsigned long long int) 3LL)) : (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 2] [i_1]))) : (((arr_3 [i_0] [i_0] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_1] [i_0]))) : (arr_7 [i_2] [i_1] [i_2] [i_1 + 2]))))));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((unsigned int) -33554409LL)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_5 [i_2 - 3]))));
                        var_20 -= ((unsigned int) arr_3 [i_1 + 2] [i_1] [i_2]);
                    }
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 2])) ? (arr_5 [i_1 + 2]) : (arr_5 [i_1 - 3])))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1 - 2] [i_2 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))) == (arr_11 [i_0] [i_1] [i_2] [i_4]))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [i_1])) : (arr_7 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_9 [i_0] [i_4] [i_2 + 1] [i_4] [i_2 + 2])) : (((/* implicit */int) arr_1 [i_0] [i_2])))))))));
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((signed char) (unsigned short)58736)))));
                        var_23 -= ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) arr_1 [i_1 + 2] [i_2 - 1])))));
                        var_24 -= ((/* implicit */unsigned int) ((unsigned short) (unsigned short)38881));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 1; i_5 < 10; i_5 += 4) 
    {
        for (unsigned short i_6 = 3; i_6 < 10; i_6 += 3) 
        {
            for (int i_7 = 1; i_7 < 8; i_7 += 4) 
            {
                {
                    var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((long long int) arr_15 [i_7]))) || ((!(((/* implicit */_Bool) arr_10 [i_5] [i_5 + 1] [i_6] [i_6] [i_7 + 2] [i_7])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((_Bool) 18446744073709551607ULL))))) : (((((((/* implicit */_Bool) arr_17 [i_5] [i_6 - 3] [i_7 + 3])) && (((/* implicit */_Bool) arr_1 [i_5 + 1] [i_6])))) ? (((((/* implicit */_Bool) arr_17 [i_5 - 1] [i_5 - 1] [i_5 - 1])) ? (arr_7 [i_5] [i_5 - 1] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5 - 1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_5])) ? (arr_14 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_7] [i_7] [i_7]))))))))));
                    arr_21 [i_6] [i_6] [i_6] = ((/* implicit */int) ((unsigned short) ((short) arr_9 [i_5] [i_5] [i_5 - 1] [i_5 + 1] [i_6])));
                    var_26 = ((short) ((((((/* implicit */_Bool) arr_4 [i_5] [i_5] [i_7])) ? (((/* implicit */int) arr_18 [i_5] [i_6] [i_7])) : (((/* implicit */int) arr_9 [i_7 + 1] [i_6] [i_6] [i_6] [i_5])))) << (((((((/* implicit */_Bool) arr_14 [i_5 - 1])) ? (arr_7 [i_5] [i_5 - 1] [i_6] [i_7]) : (((/* implicit */unsigned long long int) arr_2 [i_7])))) - (11160597580864486670ULL)))));
                    var_27 |= ((/* implicit */unsigned int) ((int) ((short) arr_18 [i_6] [i_6 - 2] [i_6])));
                }
            } 
        } 
    } 
}
