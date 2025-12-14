/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52063
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
    for (int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((unsigned char) arr_3 [i_2] [2]))) ? ((+(var_6))) : (((((/* implicit */_Bool) 14489125375649906032ULL)) ? (14489125375649906047ULL) : (3957618698059645568ULL)))))));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_0 [i_0 + 2]), (arr_0 [i_0 - 1])))) ? (((max((var_2), (((/* implicit */int) (unsigned char)80)))) >> (((max((((/* implicit */long long int) (unsigned short)32172)), (9223372036854775807LL))) - (9223372036854775803LL))))) : (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 1])))));
                    arr_7 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((((unsigned int) arr_5 [i_0 - 1])) & (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 3957618698059645584ULL)))) ? (((/* implicit */int) min(((unsigned short)33340), (((/* implicit */unsigned short) arr_0 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
                    arr_8 [7] [7] = ((unsigned char) max((min((((/* implicit */short) var_0)), (arr_4 [3U] [(unsigned char)15] [i_2] [i_2]))), (min((arr_4 [(signed char)17] [(short)21] [i_0] [i_0]), (arr_0 [i_1])))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_3 = 4; i_3 < 9; i_3 += 2) 
    {
        var_20 = ((/* implicit */long long int) ((arr_1 [i_3 - 3] [i_3 - 1]) << (((((/* implicit */int) arr_10 [i_3 - 3] [i_3 - 1])) - (13776)))));
        /* LoopSeq 4 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_14 [i_4] = ((((/* implicit */_Bool) arr_9 [i_4] [i_3 - 2])) ? (((/* implicit */int) arr_9 [i_3 - 4] [i_4])) : (((/* implicit */int) arr_9 [i_3] [i_4])));
            var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_4] [i_3]) + (((/* implicit */int) arr_13 [i_4] [i_4] [i_3]))))) ? (((/* implicit */int) arr_9 [i_3 - 4] [4LL])) : (((/* implicit */int) (!(((/* implicit */_Bool) -7420672138882338878LL)))))));
        }
        for (unsigned char i_5 = 2; i_5 < 6; i_5 += 1) 
        {
            var_22 = (!(((/* implicit */_Bool) ((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))));
            arr_17 [i_5] = ((arr_2 [i_3 + 1]) / (((/* implicit */int) arr_3 [i_5 - 1] [i_5 + 4])));
        }
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            arr_20 [i_3] = ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((((/* implicit */int) var_1)) + (((/* implicit */int) (signed char)-112)))) : (((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 1])));
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                arr_23 [i_3] [i_3] [i_6] [i_7] = ((/* implicit */unsigned char) ((((((((/* implicit */int) (unsigned char)176)) ^ (((/* implicit */int) (short)-19140)))) + (2147483647))) << (((((unsigned long long int) var_8)) - (6341414695517213338ULL)))));
                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [(unsigned short)1] [i_3 - 4]))));
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3 - 3] [i_3 + 1] [2U])) ? (((/* implicit */int) arr_10 [i_3 - 2] [i_7])) : (((/* implicit */int) arr_13 [i_3] [i_3 - 4] [i_3]))));
            }
        }
        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    for (long long int i_11 = 1; i_11 < 9; i_11 += 1) 
                    {
                        {
                            arr_34 [(signed char)2] [2] [2] [(unsigned char)3] [i_11 - 1] = ((/* implicit */unsigned short) ((int) ((arr_31 [i_3 - 3] [i_3] [i_3] [i_3]) & (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_8]))))));
                            arr_35 [i_3] [i_8] [i_3] [i_3] [i_10] [i_10] [i_11] = ((/* implicit */_Bool) (~(arr_2 [i_3 - 1])));
                            arr_36 [(short)7] [i_8] [i_8] [(short)8] [(signed char)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5464)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2476))) : (1423537975023230824ULL)))) ? (((((/* implicit */_Bool) var_6)) ? (var_7) : (-5828850614829976301LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_12 [i_10] [i_10]) : (((/* implicit */int) arr_10 [i_9] [(short)9])))))));
                        }
                    } 
                } 
            } 
            arr_37 [i_3] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_3] [i_3] [8ULL] [i_3 - 2])) ? (arr_25 [i_3 + 1] [i_3]) : (arr_25 [1] [1])));
        }
    }
}
