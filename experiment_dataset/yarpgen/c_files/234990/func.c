/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234990
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [16U] [1LL])) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) / (min((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))), (((arr_0 [i_0]) & (arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (var_0) : (((/* implicit */long long int) arr_7 [5U])))))));
        arr_8 [i_1] = ((/* implicit */unsigned char) (~(((arr_0 [i_1]) & (arr_0 [i_1])))));
        arr_9 [5LL] [5LL] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_2)))) ^ (var_13)));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        var_17 -= ((/* implicit */long long int) (((-(((/* implicit */int) var_11)))) / (arr_10 [18])));
        arr_12 [4] [0U] = ((/* implicit */long long int) arr_11 [i_2] [i_2]);
    }
    var_18 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_2)), ((+(var_5)))));
    /* LoopSeq 3 */
    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_1 [i_3 + 2] [i_3 + 2])))) && (arr_14 [i_3 - 1]))))));
            arr_19 [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_3 - 1] [i_3 - 1])) && (((/* implicit */_Bool) var_5)))) && (((/* implicit */_Bool) arr_13 [i_3] [i_3]))));
        }
        for (int i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                arr_26 [i_3] [i_3] [i_6] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_3 + 1])) ? (arr_6 [i_3 + 2]) : (arr_6 [i_3 + 1]))));
                /* LoopSeq 3 */
                for (unsigned short i_7 = 4; i_7 < 19; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_3 + 3]))));
                        var_21 = ((/* implicit */int) arr_17 [i_3]);
                        arr_33 [i_3] [i_3] [i_5] [i_6] [i_3] [(_Bool)1] [i_8] = ((/* implicit */long long int) arr_11 [i_3] [i_3]);
                        arr_34 [i_3] [i_3] [i_3] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_11 [i_5] [i_7 - 1]))));
                    }
                    var_22 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_7))))));
                }
                for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    var_23 = ((/* implicit */unsigned int) (~(arr_21 [i_3] [i_6])));
                    arr_37 [i_3] = ((/* implicit */long long int) ((int) min(((-(arr_13 [i_5] [i_3]))), ((+(arr_13 [i_3 - 1] [i_3]))))));
                }
                for (int i_10 = 1; i_10 < 17; i_10 += 4) 
                {
                    var_24 *= ((/* implicit */short) ((unsigned int) arr_38 [i_10 + 2] [i_5] [i_6] [i_10] [i_5] [i_5]));
                    arr_40 [i_3] [i_5] [i_3] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_32 [i_3] [10LL])))) > (max((var_15), (((/* implicit */long long int) arr_29 [10] [10] [10])))))))));
                    var_25 = ((/* implicit */unsigned char) arr_4 [i_3] [i_3]);
                    arr_41 [i_3] [(unsigned char)12] [i_5] [(_Bool)1] [i_10] [i_3] = ((/* implicit */short) arr_24 [i_10 + 2] [i_3 + 2]);
                    arr_42 [i_3] [i_3] [i_3] [i_3] [i_6] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_36 [i_5] [i_5] [i_3] [i_10]))));
                }
            }
            var_26 = ((/* implicit */unsigned int) ((min((var_0), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_5])) && (((/* implicit */_Bool) arr_24 [i_3 + 1] [(unsigned short)3]))))))) / (((((/* implicit */_Bool) ((unsigned int) arr_22 [i_3] [4LL]))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_0 [i_3]))) : (((/* implicit */long long int) min((var_9), (((/* implicit */int) arr_24 [i_3 - 1] [i_5])))))))));
        }
        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            var_27 = ((/* implicit */int) var_0);
            arr_45 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) arr_27 [i_3] [i_3] [i_3] [i_3 - 1] [i_3] [i_11]);
            /* LoopNest 3 */
            for (unsigned char i_12 = 0; i_12 < 20; i_12 += 4) 
            {
                for (long long int i_13 = 3; i_13 < 19; i_13 += 4) 
                {
                    for (unsigned short i_14 = 0; i_14 < 20; i_14 += 3) 
                    {
                        {
                            var_28 = ((int) ((((/* implicit */long long int) max((arr_10 [i_13 - 3]), (((/* implicit */int) arr_5 [i_3]))))) / (((long long int) var_6))));
                            arr_53 [i_11] [i_3] [i_12] = ((/* implicit */int) (~((~((~(arr_30 [i_13] [i_13] [i_3] [i_3] [i_14])))))));
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) max(((+(12520790530564413259ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((12520790530564413260ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))) - (max((var_0), (((/* implicit */long long int) var_2))))))))))));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_11] [(short)4])) ? ((+(((/* implicit */int) arr_5 [21])))) : (var_3)));
        }
        var_31 -= ((/* implicit */unsigned char) min((((/* implicit */int) arr_24 [(short)12] [i_3 - 1])), (1352072652)));
        arr_54 [i_3] = ((/* implicit */long long int) ((((/* implicit */int) var_6)) > ((~(((/* implicit */int) arr_48 [i_3 + 2] [i_3 + 2] [i_3 - 1] [i_3 + 3]))))));
    }
    for (unsigned char i_15 = 3; i_15 < 11; i_15 += 3) 
    {
        arr_57 [i_15] |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((int) var_8))))) / (((((/* implicit */_Bool) (-(arr_39 [i_15])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_12))))) : (arr_13 [0ULL] [10])))));
        arr_58 [11] = ((/* implicit */short) (~(min((arr_32 [i_15] [i_15 - 1]), (arr_32 [15] [i_15 + 3])))));
        var_32 = ((/* implicit */int) arr_17 [2LL]);
        arr_59 [i_15] = ((arr_50 [i_15 - 1] [i_15] [0LL]) / (arr_50 [i_15 - 3] [i_15] [4]));
    }
    for (short i_16 = 2; i_16 < 9; i_16 += 3) 
    {
        var_33 = ((/* implicit */long long int) 5925953543145138338ULL);
        var_34 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_16 + 1])) && (((/* implicit */_Bool) arr_15 [i_16 + 2])))))));
    }
}
