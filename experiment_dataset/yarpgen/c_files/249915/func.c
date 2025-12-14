/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249915
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
    var_13 -= var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_14 &= ((/* implicit */unsigned short) ((((arr_3 [i_1] [i_1] [i_0 - 1]) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */int) (short)-18504)) : (((/* implicit */int) (short)18504))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_4 [(unsigned short)15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned short)14] [i_0] [13]))) : (arr_1 [(_Bool)1]))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned int i_3 = 4; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [(unsigned char)6] [i_0] [i_3 + 1] [i_3] [i_2]))))) ? (arr_11 [(_Bool)1]) : (((((/* implicit */int) ((unsigned char) arr_1 [i_0]))) % (((/* implicit */int) ((unsigned short) arr_11 [i_0])))))));
                                var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_3 - 1] [(signed char)14] [i_0 - 1]) ? (((/* implicit */int) arr_3 [i_3 - 1] [0ULL] [i_0 + 1])) : (((/* implicit */int) arr_3 [i_3 - 4] [i_1] [i_0 + 2]))))) ? (((/* implicit */int) arr_3 [i_3 + 2] [(signed char)15] [i_0 + 1])) : (((arr_3 [i_3 + 1] [i_1] [i_0 + 2]) ? (((/* implicit */int) arr_3 [i_3 + 1] [i_1] [i_0 + 2])) : (((/* implicit */int) arr_3 [i_3 - 3] [i_1] [i_0 - 1]))))));
                                var_17 &= ((/* implicit */signed char) max(((-(arr_1 [i_3 + 2]))), (((((/* implicit */_Bool) ((arr_2 [1LL]) * (((/* implicit */unsigned int) arr_11 [i_2]))))) ? (((((/* implicit */_Bool) arr_4 [9U])) ? (((/* implicit */unsigned int) arr_11 [i_1])) : (arr_1 [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 2])))))));
                                var_18 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned char)2])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [(short)3] [(_Bool)1] [(short)3] [i_1])) : (((/* implicit */int) arr_6 [(_Bool)1] [12LL] [i_2]))))) ? (((/* implicit */int) ((short) arr_8 [i_0] [2] [i_3] [i_3]))) : (((/* implicit */int) arr_10 [(signed char)18] [i_1] [i_2] [(_Bool)1] [i_3 - 2] [i_4])))), (((/* implicit */int) ((((((/* implicit */int) arr_6 [i_4] [i_2] [i_4])) * (((/* implicit */int) arr_3 [1LL] [16] [i_4])))) == (((/* implicit */int) arr_9 [i_0] [0LL] [i_2] [i_2] [7LL])))))));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) arr_8 [i_0 + 2] [i_3 - 2] [i_3] [i_3 - 4])) >= (((/* implicit */int) arr_8 [i_0 + 2] [i_3 + 1] [i_3] [i_3 - 4]))))), (((arr_8 [i_0 - 1] [i_3 - 4] [i_3 - 4] [i_3 - 1]) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_3 - 1] [i_3 + 2] [i_3 - 2])) : (((/* implicit */int) arr_8 [i_0 + 2] [i_3 - 4] [i_3] [i_3 - 4])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
