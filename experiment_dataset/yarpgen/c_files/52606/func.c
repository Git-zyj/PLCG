/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52606
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) var_11);
        var_19 = ((/* implicit */_Bool) var_5);
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (+(((((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_16)) <= (((/* implicit */int) var_0)))))) : (max((var_14), (((/* implicit */long long int) var_17)))))))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_2 [i_1]))));
            var_22 = ((/* implicit */unsigned int) var_0);
        }
        for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
        {
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max((((/* implicit */long long int) max((((/* implicit */int) max((arr_5 [i_2] [i_2 + 3] [i_0]), (arr_7 [4LL] [i_2] [i_2 + 1])))), (min((((/* implicit */int) var_7)), (var_15)))))), ((((!(arr_6 [i_0] [i_2] [i_2]))) ? (((/* implicit */long long int) ((var_0) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0]))))) : (max((((/* implicit */long long int) var_3)), (var_4))))))))));
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_6 [i_2 + 4] [i_2] [i_2])), (var_16)))) ? (((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) arr_5 [i_0] [i_2 + 1] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_2 + 3] [(signed char)11]))))) : (max((arr_4 [i_0] [i_2] [i_2 + 3]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_2 + 1] [i_0])) > (var_15))))))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_3] [i_3])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [3LL] [i_3] [i_3])))));
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (-(((/* implicit */int) arr_7 [i_0] [i_0] [(unsigned short)3])))))));
                    }
                } 
            } 
            arr_15 [i_0] [i_0] [5U] = ((/* implicit */_Bool) (+(var_4)));
        }
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_18 [i_6] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_16 [i_6] [i_6])) : (((/* implicit */int) arr_16 [i_6] [(_Bool)1])))) * (((/* implicit */int) ((((/* implicit */int) arr_17 [i_6] [i_6])) < (((/* implicit */int) arr_17 [i_6] [i_6])))))));
        var_27 = max((var_16), (((/* implicit */unsigned char) arr_17 [9ULL] [i_6])));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_7])) ? (((/* implicit */int) arr_19 [i_7] [i_7])) : (var_11)))) ? (arr_20 [15U] [i_7]) : (((/* implicit */int) ((var_5) < (arr_20 [(unsigned short)19] [i_7]))))));
        var_29 &= ((/* implicit */signed char) var_11);
    }
    var_30 ^= ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 2 */
    for (signed char i_8 = 0; i_8 < 19; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 2) 
        {
            for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                {
                    arr_30 [i_8] [i_9] [i_8] = ((/* implicit */long long int) max((arr_16 [i_8] [3U]), (((/* implicit */short) arr_27 [i_10] [i_9]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 2) 
                    {
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_26 [i_11] [i_10])) ? (arr_26 [i_9] [i_10]) : (((/* implicit */int) arr_32 [i_9] [i_10] [i_9] [i_9] [i_9])))), (max((arr_24 [i_11] [i_11]), (arr_24 [i_11] [i_10]))))))));
                        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) arr_26 [i_10] [i_9]))));
                        var_33 = ((/* implicit */short) max((((((/* implicit */_Bool) max((((/* implicit */int) arr_17 [i_8] [i_10])), (arr_24 [i_8] [i_9])))) ? (((/* implicit */int) arr_25 [11ULL] [i_9])) : (max((var_11), (((/* implicit */int) arr_25 [i_8] [i_10])))))), (((/* implicit */int) arr_17 [i_8] [18ULL]))));
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [(_Bool)1]))))) ? (var_15) : (((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_7)) : (var_11)))) ? (((/* implicit */int) arr_27 [i_8] [i_8])) : (((/* implicit */int) var_7))))));
                    }
                }
            } 
        } 
        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))))), (((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [(_Bool)1] [i_8] [i_8])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_8] [i_8] [i_8] [(short)7]))))) : (((/* implicit */int) arr_17 [i_8] [(signed char)19]))));
    }
    for (signed char i_12 = 2; i_12 < 8; i_12 += 4) 
    {
        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_12 + 1] [i_12 + 2] [i_12 - 2]))))) ^ (max((var_12), (arr_29 [i_12 - 1] [i_12 - 2] [i_12 - 1] [i_12 - 1]))))))));
        var_37 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_12] [i_12 + 1] [i_12 + 1] [i_12])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) var_11)) : (var_1))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_17)))))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_26 [5ULL] [i_12])) : (var_14))) : (max((var_12), (((/* implicit */long long int) max((((/* implicit */int) var_2)), (arr_26 [i_12 - 1] [i_12])))))));
        var_38 = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [(signed char)4])) & (var_11)))), (var_1)))));
    }
    var_39 = ((/* implicit */unsigned long long int) var_5);
}
