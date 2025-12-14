/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19428
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) ((unsigned long long int) ((arr_1 [6LL]) & (((/* implicit */int) (short)-20755)))));
        var_13 = ((/* implicit */unsigned short) ((min((min((var_7), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) ((signed char) var_1))))) + (((/* implicit */long long int) max((min((arr_1 [i_0]), (((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_1))))))))));
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (short)31459))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 2) 
    {
        for (unsigned char i_2 = 3; i_2 < 7; i_2 += 1) 
        {
            {
                arr_8 [i_2] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */int) var_9)) & ((+(var_2))))), (((((/* implicit */int) arr_5 [i_2] [8ULL] [i_1])) / (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2])) && (((/* implicit */_Bool) arr_3 [i_1])))))))));
                arr_9 [i_1] [i_1 + 2] = ((/* implicit */_Bool) ((((((unsigned int) arr_6 [i_1])) <= (((/* implicit */unsigned int) ((arr_1 [i_1]) / (((/* implicit */int) arr_3 [i_2]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((/* implicit */int) arr_2 [i_2 - 2] [i_2])) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_2]))))) : (((((/* implicit */_Bool) min((((/* implicit */short) arr_3 [i_1])), (arr_2 [(unsigned short)3] [i_2])))) ? (((var_3) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [(short)4] [i_2])) : (-480470020))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
                {
                    arr_14 [i_1] [(signed char)1] [i_3] [6ULL] = ((/* implicit */unsigned char) arr_1 [i_1 - 1]);
                    var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_2 - 1])) / (((/* implicit */int) ((((/* implicit */unsigned long long int) 929364413U)) <= (arr_13 [i_1] [5ULL] [i_1] [i_1]))))));
                }
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
                {
                    arr_17 [i_1] [i_2 - 1] = ((/* implicit */short) ((unsigned char) arr_5 [i_2 + 4] [i_2 - 3] [i_1 + 1]));
                    arr_18 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-20746)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) : (((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                    var_16 = ((/* implicit */_Bool) arr_3 [i_4]);
                    arr_19 [i_4] [i_2] [i_2 + 1] [(short)6] = ((/* implicit */signed char) ((((((((/* implicit */int) arr_0 [i_2 - 3])) + (2147483647))) >> (((((/* implicit */int) arr_10 [i_1 + 4] [i_2] [i_4] [(_Bool)0])) + (48))))) < (((/* implicit */int) arr_7 [i_1 - 1] [i_2 - 1] [i_4]))));
                    var_17 = var_5;
                }
                var_18 -= ((/* implicit */unsigned char) arr_0 [i_1]);
            }
        } 
    } 
}
