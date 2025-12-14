/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217515
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (1562202459))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1]))))))) << (((((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (var_9))) ? (((/* implicit */unsigned int) var_5)) : (var_4))) - (3168960924U))));
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))) : (arr_3 [i_0] [i_1])));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_3 [i_0] [i_1]) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 9755412445638186601ULL)))))))) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_17)) : (1507417092))))))))));
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((unsigned long long int) var_2)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))) ? (((int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_9)) : (var_2)))) : (((int) var_11))));
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        var_20 = ((/* implicit */int) min((var_20), (var_5)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_2])) ? (arr_13 [(signed char)16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3])))));
            arr_16 [18ULL] = ((/* implicit */short) (~(((int) var_1))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    {
                        var_22 = ((/* implicit */signed char) max((var_22), (var_14)));
                        arr_21 [(short)10] [(signed char)1] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))));
                    }
                } 
            } 
            var_23 = (~(((((/* implicit */_Bool) -524288)) ? (arr_9 [i_2] [i_2]) : (((/* implicit */unsigned long long int) 1805498964)))));
            var_24 -= ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
        }
    }
    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
    {
        arr_25 [i_6] [i_6] = ((((/* implicit */_Bool) arr_23 [i_6])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_6)))) ? (var_13) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))))) : (((arr_24 [i_6]) / ((+(arr_23 [i_6]))))));
        var_25 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_23 [12ULL])))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_0) : (var_0)))), (((((/* implicit */_Bool) var_15)) ? (arr_24 [i_6]) : (((/* implicit */unsigned long long int) var_6)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_6]))))))));
    }
    var_26 ^= ((/* implicit */unsigned short) var_16);
}
