/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31279
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
    var_11 = ((/* implicit */unsigned int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) == (((/* implicit */int) var_10)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_7))))) ? (((/* implicit */int) max((var_1), (var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -2069344328651188488LL))))))) : (((/* implicit */int) var_8))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_0])) % (((/* implicit */int) arr_2 [i_0]))));
        var_12 ^= ((/* implicit */unsigned short) ((signed char) arr_0 [i_0] [i_0]));
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_1 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1] [12ULL])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [(_Bool)1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [(unsigned char)10]))))) : (2069344328651188488LL)));
        var_15 = ((/* implicit */unsigned char) ((long long int) arr_5 [i_1]));
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_1] [i_1])) <= (((/* implicit */int) arr_4 [i_1] [(signed char)8]))));
        arr_7 [i_1] = ((/* implicit */long long int) arr_4 [(unsigned char)0] [(unsigned char)0]);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2] [i_2])) * (((/* implicit */int) arr_9 [i_2] [i_2]))));
        arr_12 [i_2] = ((((((/* implicit */_Bool) 245068561047222710LL)) ? (((/* implicit */int) arr_4 [(unsigned short)15] [(unsigned short)15])) : (((/* implicit */int) (unsigned char)21)))) < (((/* implicit */int) ((((/* implicit */int) arr_10 [i_2] [i_2])) >= (((/* implicit */int) arr_4 [i_2] [i_2]))))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                {
                    arr_17 [i_4] [i_4] = ((/* implicit */unsigned short) ((unsigned int) arr_11 [i_2] [(unsigned char)14]));
                    var_17 += ((/* implicit */unsigned int) arr_11 [3LL] [i_2]);
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned short) arr_4 [i_2] [i_2]);
    }
}
