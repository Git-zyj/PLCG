/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20000
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
    var_15 = ((/* implicit */long long int) var_14);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = max((((/* implicit */unsigned short) var_13)), (((unsigned short) (unsigned char)247)));
        var_16 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))) + ((~(((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) (signed char)-27))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 2; i_3 < 17; i_3 += 3) 
            {
                arr_13 [i_1] [i_2] [i_3] = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)239)) != (((/* implicit */int) arr_4 [i_1])))) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                arr_14 [i_1] = ((/* implicit */_Bool) arr_12 [i_3 + 1]);
            }
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                /* LoopSeq 2 */
                for (int i_5 = 2; i_5 < 18; i_5 += 3) 
                {
                    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                    var_18 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (short)-818)) * (((/* implicit */int) var_11)))));
                }
                for (short i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    arr_22 [i_1] [i_2] [i_2] [i_2] [i_4] [i_6] = ((unsigned char) arr_5 [i_2 + 1]);
                    arr_23 [i_6] [i_2] [i_2] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                }
                arr_24 [i_1] [8] = ((/* implicit */_Bool) arr_7 [i_1] [i_1]);
            }
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_7)))) : (((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_21 [i_1] [i_2])))));
        }
        var_20 = ((/* implicit */_Bool) 0ULL);
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_32 [i_8] [i_7] = arr_18 [i_1] [i_7] [i_8] [i_8];
                    var_21 = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) arr_27 [i_1]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))), (((/* implicit */int) max(((short)24788), (((/* implicit */short) max((((/* implicit */unsigned char) arr_12 [(signed char)6])), ((unsigned char)247)))))))));
                    var_22 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24803)) ? (arr_11 [i_1] [i_1] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) arr_29 [i_1])) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-24803))))))), (max((max((((/* implicit */unsigned long long int) arr_28 [i_1] [i_1] [i_1])), (var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-24775))) != (-5LL))))))));
                }
            } 
        } 
        var_23 = arr_15 [i_1] [i_1] [i_1] [i_1];
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        arr_36 [i_9] = ((((/* implicit */_Bool) 7113879985394050541LL)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (short)16145)));
        /* LoopNest 2 */
        for (unsigned char i_10 = 3; i_10 < 15; i_10 += 1) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 2) 
            {
                {
                    var_24 = ((/* implicit */long long int) (~(((/* implicit */int) (short)24775))));
                    var_25 = ((/* implicit */unsigned int) 0LL);
                }
            } 
        } 
    }
}
