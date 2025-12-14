/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239547
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
    var_11 = ((/* implicit */_Bool) var_8);
    var_12 = ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                var_14 -= ((/* implicit */_Bool) arr_1 [i_1]);
                var_15 |= ((/* implicit */short) arr_2 [(short)6] [i_1]);
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            var_16 = ((/* implicit */int) ((((/* implicit */long long int) arr_8 [i_2] [i_2])) != (arr_4 [i_2])));
            var_17 = ((/* implicit */_Bool) arr_8 [(unsigned short)18] [(unsigned short)18]);
        }
        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 3) 
        {
            arr_13 [i_2] [i_4 + 1] [i_4] = ((/* implicit */unsigned long long int) arr_8 [i_2] [i_2]);
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 19; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    {
                        var_18 = ((/* implicit */signed char) arr_4 [i_6]);
                        var_19 = (i_2 % 2 == 0) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) / (((unsigned long long int) arr_7 [i_2])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) * (((unsigned long long int) arr_7 [i_2]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_21 [i_8]) == (((/* implicit */unsigned long long int) arr_4 [i_4]))))) % (((int) arr_10 [i_2] [(unsigned char)10]))));
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_4 + 1])) ? (((arr_6 [i_2]) & (arr_19 [i_2] [i_2] [i_7] [i_2]))) : (((/* implicit */int) ((unsigned short) arr_10 [i_2] [i_7])))));
                        var_22 = ((/* implicit */unsigned int) arr_16 [(signed char)7] [i_4] [i_4] [3ULL]);
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((unsigned int) ((arr_7 [(_Bool)1]) ? (arr_19 [i_4] [i_7] [i_7] [14LL]) : (((/* implicit */int) arr_12 [i_2] [i_2]))))))));
                    }
                } 
            } 
        }
        arr_24 [i_2] = ((/* implicit */unsigned long long int) arr_4 [i_2]);
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (arr_16 [i_2] [5LL] [8LL] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])))))))));
    }
    for (unsigned int i_9 = 1; i_9 < 11; i_9 += 1) /* same iter space */
    {
        arr_28 [1ULL] = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_15 [i_9] [i_9] [i_9] [i_9])) > (((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_9 + 1]))) / (arr_16 [16] [16] [i_9] [i_9])))));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_9 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_9 + 1] [i_9]))) : (((((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_9] [i_9]))) | (arr_15 [(unsigned short)6] [(short)13] [(short)13] [i_9 + 1]))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_9] [i_9 + 2] [(short)4] [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_12 [i_9 + 2] [i_9 + 2])) : (((/* implicit */int) arr_10 [(_Bool)1] [i_9])))))))));
        var_26 = ((/* implicit */int) arr_22 [i_9 + 2] [i_9 + 2] [i_9 + 2]);
        var_27 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((signed char) arr_20 [i_9] [i_9]))) ? (arr_16 [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9 + 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_9] [(short)14])) ? (((/* implicit */int) arr_7 [(unsigned short)0])) : (arr_6 [i_9])))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_9 - 1] [(signed char)8] [(unsigned short)10] [(unsigned short)10] [i_9 - 1] [i_9 + 2])) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [i_9] [6U])) == (arr_19 [i_9 + 2] [i_9 - 1] [i_9 + 1] [(_Bool)1])))) : (((((/* implicit */_Bool) arr_4 [i_9])) ? (((/* implicit */int) arr_26 [i_9])) : (arr_19 [i_9] [i_9 - 1] [i_9 - 1] [0]))))))));
        arr_29 [i_9 + 2] = ((/* implicit */unsigned short) arr_10 [(short)16] [i_9 + 1]);
    }
    for (unsigned int i_10 = 1; i_10 < 11; i_10 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_10 - 1] [i_10])) ? (((/* implicit */int) arr_30 [i_10])) : (arr_23 [i_10 + 2] [i_10 - 1] [i_10] [i_10] [i_10 + 1] [i_10 + 2])))) ? (((/* implicit */int) arr_9 [i_10])) : (((/* implicit */int) arr_10 [i_10] [i_10 - 1])))) * (((/* implicit */int) arr_30 [i_10]))));
        var_29 = ((/* implicit */int) arr_31 [i_10 - 1] [i_10]);
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_10]))) ? (((/* implicit */int) ((unsigned char) arr_18 [(unsigned char)16] [i_10]))) : (((/* implicit */int) arr_14 [i_10] [i_10] [i_10] [i_10 - 1]))));
        arr_33 [i_10] = ((/* implicit */signed char) ((short) ((((((/* implicit */int) arr_10 [i_10] [i_10])) * (((/* implicit */int) arr_26 [i_10])))) * (((((/* implicit */_Bool) arr_9 [i_10])) ? (((/* implicit */int) arr_11 [i_10 - 1] [i_10 - 1])) : (arr_6 [i_10 + 2]))))));
    }
}
