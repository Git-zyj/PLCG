/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52985
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_4 [20] [i_0] |= ((/* implicit */short) max((max((var_12), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))))))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) - (arr_3 [i_0] [i_0])))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 8612114535731235361ULL))));
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)105)), (min((arr_3 [i_1] [i_0]), (((/* implicit */int) arr_7 [i_0] [i_0]))))))) ? (((/* implicit */int) ((unsigned char) arr_6 [i_1] [i_0]))) : (((/* implicit */int) var_3))));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_2 = 4; i_2 < 8; i_2 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_3 = 3; i_3 < 9; i_3 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                for (int i_5 = 3; i_5 < 11; i_5 += 1) 
                {
                    for (unsigned char i_6 = 2; i_6 < 9; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (~(arr_14 [2]))))));
                            var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_20 [(unsigned char)2] [(short)6] [i_4] [(short)6] [i_2])) : (var_6)))) ? (arr_10 [i_5 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_12))))));
                            arr_21 [i_5] [i_3] [2LL] [i_2] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9897610363946579742ULL)) ? (((/* implicit */int) (unsigned char)41)) : (1712634332)));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_2] [i_3]))) && (((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2 + 3] [i_2] [i_3]))));
        }
        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_2 + 2]))));
            var_20 = ((/* implicit */unsigned long long int) ((arr_12 [i_2 + 3] [i_7] [i_7]) < (((/* implicit */int) arr_5 [i_2 + 3] [i_2 - 4] [i_2]))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            var_21 *= arr_10 [i_2];
            arr_27 [i_2] = ((/* implicit */unsigned long long int) var_0);
        }
        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 1) 
        {
            var_22 = ((/* implicit */long long int) ((short) arr_14 [(short)4]));
            var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)211)) << (((((/* implicit */int) (unsigned char)214)) - (195)))));
        }
        var_24 += ((/* implicit */unsigned long long int) arr_16 [i_2 - 2]);
        var_25 = ((/* implicit */unsigned long long int) arr_28 [i_2]);
    }
}
