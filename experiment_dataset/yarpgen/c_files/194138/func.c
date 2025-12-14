/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194138
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
    var_19 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [9U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)10]))));
        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
    }
    for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        var_21 = ((/* implicit */long long int) arr_1 [i_1] [i_1]);
        /* LoopNest 2 */
        for (signed char i_2 = 4; i_2 < 19; i_2 += 3) 
        {
            for (long long int i_3 = 1; i_3 < 17; i_3 += 3) 
            {
                {
                    var_22 = ((/* implicit */signed char) (-(((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)62796))) & (arr_0 [i_3] [i_3]))))));
                    arr_10 [i_3] [i_2] [i_1 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1 - 1] [i_1])) : (18374686479671623680ULL))))));
                    arr_11 [i_2] [(unsigned char)3] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 - 1] [i_2 - 4])) < (((/* implicit */int) arr_1 [i_1 + 3] [i_2 + 2]))))) / (((/* implicit */int) ((((/* implicit */int) ((_Bool) var_5))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
                }
            } 
        } 
        var_23 -= ((/* implicit */unsigned int) var_6);
        arr_12 [2U] [2U] = var_2;
    }
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 12; i_4 += 2) 
    {
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) -1))) ? (((-2076152005) ^ (((/* implicit */int) var_14)))) : (((/* implicit */int) var_18))));
        arr_16 [i_4] [10] |= ((/* implicit */signed char) ((unsigned int) (short)15872));
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 20; i_5 += 1) 
    {
        for (short i_6 = 1; i_6 < 21; i_6 += 3) 
        {
            {
                var_25 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_21 [(signed char)0] [i_5 - 2])), (((((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5] [i_5]))) % (arr_20 [i_5]))) >> (((/* implicit */int) arr_21 [i_5 + 1] [i_6 + 1]))))));
                arr_22 [i_5] [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_20 [i_6 + 1])) ? (arr_20 [i_6 - 1]) : (arr_20 [i_6 + 1]))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_6 + 1]))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
    {
        var_26 &= ((/* implicit */short) max((((((/* implicit */_Bool) arr_17 [i_7] [i_7])) ? (((/* implicit */int) arr_17 [(_Bool)1] [i_7])) : (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) arr_17 [i_7] [i_7])) ? (((/* implicit */int) arr_17 [i_7] [i_7])) : (((/* implicit */int) arr_17 [i_7] [i_7]))))));
        var_27 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_6 [i_7] [i_7])), (((((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_7])) ? (90093201399599314ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_7] [i_7] [i_7]))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_18 [i_7] [i_7])), (var_2)))))))));
    }
    for (signed char i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
    {
        var_28 = ((/* implicit */short) (signed char)-120);
        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned short)3] [(unsigned short)3])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)130))) ^ (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_18), (((/* implicit */unsigned char) var_8))))))))))))));
    }
}
