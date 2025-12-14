/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241166
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0]))));
        arr_3 [(unsigned short)3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(short)15] [(signed char)11])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [5LL] [(short)15])))))) ? (((/* implicit */int) ((short) (_Bool)1))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [(unsigned short)9] [i_0])) : (((/* implicit */int) (unsigned char)45))))))) ? (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)120)))) : (((/* implicit */int) var_5))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        for (unsigned short i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            {
                arr_8 [(_Bool)1] [i_2] = ((/* implicit */signed char) ((unsigned short) arr_1 [(signed char)6] [(signed char)6]));
                arr_9 [i_1] [i_2] [i_1] = ((/* implicit */short) ((signed char) arr_4 [i_1]));
                arr_10 [4LL] [i_1] [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((((/* implicit */_Bool) arr_6 [i_2 + 2] [0LL] [(short)7])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_2])) ? (((/* implicit */int) (unsigned short)19293)) : (((/* implicit */int) var_6))))))));
                /* LoopSeq 2 */
                for (signed char i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
                {
                    arr_14 [i_1] [i_1] [(signed char)4] [i_3] &= ((/* implicit */unsigned char) ((short) var_6));
                    arr_15 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)211), (((/* implicit */unsigned char) arr_12 [(unsigned short)0] [(signed char)11] [(_Bool)1]))))) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) min((arr_7 [i_1] [(_Bool)1]), (((/* implicit */unsigned short) (signed char)-34))))))))) ? ((~(((/* implicit */int) arr_7 [i_1] [i_2])))) : (((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_5 [i_1]))))))));
                    arr_16 [(short)9] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((signed char) (unsigned char)45)))))) ? (((/* implicit */int) arr_1 [(signed char)2] [i_2])) : (((/* implicit */int) (short)10))));
                    arr_17 [i_3] = ((/* implicit */unsigned short) ((long long int) (~(((/* implicit */int) var_18)))));
                }
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
                {
                    arr_21 [i_4] [i_1] [i_1] = ((/* implicit */unsigned short) ((signed char) arr_18 [i_2 + 1]));
                    arr_22 [i_1] [(signed char)2] [(unsigned char)10] [i_1 + 2] = ((/* implicit */short) var_18);
                }
            }
        } 
    } 
}
