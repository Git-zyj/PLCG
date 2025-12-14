/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193676
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
    var_12 = ((/* implicit */signed char) var_11);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_4 [(short)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_0 + 2]))));
        var_13 = ((/* implicit */signed char) arr_1 [i_0]);
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((((/* implicit */int) arr_1 [(_Bool)1])) - (((/* implicit */int) arr_1 [(unsigned short)11])))) : (((/* implicit */int) ((unsigned char) var_9)))));
        var_15 = ((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0]));
        var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_0 - 1])) + (2147483647))) << (((((((/* implicit */int) arr_0 [i_0 - 1])) + (24256))) - (10)))));
    }
    for (unsigned short i_1 = 1; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_17 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) (~(((/* implicit */int) var_1))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [(signed char)11]))))) ? (arr_5 [i_1 + 2]) : (((long long int) (unsigned char)162))))));
        arr_7 [i_1] [i_1] = arr_2 [i_1];
    }
    for (unsigned char i_2 = 2; i_2 < 17; i_2 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) arr_9 [i_2 - 1])) % (((/* implicit */int) arr_9 [i_2 - 2])))));
        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [9ULL]))));
        arr_10 [i_2] = ((/* implicit */_Bool) (~(((long long int) (signed char)105))));
    }
    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 2) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_8 [i_3 - 1])) ? (arr_8 [i_3 + 1]) : (arr_8 [i_3 + 1]))) : (((((/* implicit */_Bool) arr_8 [i_3 - 2])) ? (arr_8 [i_3 + 1]) : (arr_8 [i_3 - 1])))));
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_4 - 1] [(unsigned char)15] [i_3])) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [11])))))))) ? ((+(var_11))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_13 [i_4 - 1]), (((/* implicit */short) arr_11 [i_3 - 2]))))))));
                    var_21 = ((/* implicit */unsigned char) var_2);
                    var_22 = ((/* implicit */unsigned long long int) min(((~(var_6))), (min((1539197983U), (((/* implicit */unsigned int) (short)11531))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        arr_24 [i_3] [(unsigned short)2] [i_3] [i_3] [i_3] &= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_11 [i_4]))))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(unsigned short)0])) ? (((/* implicit */int) arr_11 [(unsigned short)12])) : ((~(((/* implicit */int) arr_11 [0U]))))));
                    }
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned int i_7 = 4; i_7 < 8; i_7 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) arr_21 [(short)12] [12U] [0LL] [i_7] [i_7] [i_7]);
        arr_28 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_7 + 1] [i_7 + 1])) + (((/* implicit */int) arr_23 [i_7 - 2] [i_7] [i_7] [12U]))))) ? (((((/* implicit */_Bool) arr_23 [i_7 - 4] [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_25 [i_7 - 3] [i_7 + 2])) : (((/* implicit */int) arr_25 [i_7 - 3] [i_7 - 2])))) : (((/* implicit */int) max((arr_0 [i_7 - 2]), (arr_0 [i_7 - 4]))))));
        var_25 = ((/* implicit */short) arr_2 [i_7]);
    }
}
