/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20835
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])));
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_16) : (((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_0 - 1]))));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_1 [(unsigned char)8] [14LL])))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_1 - 1]))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_8 [i_0 - 1] [i_2] [i_2] = ((/* implicit */short) arr_6 [i_2] [i_2] [i_0]);
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_2 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0 - 1]))) : ((+(var_2)))));
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_11 [i_0] [i_3 - 1] [i_3] [i_0]) : (((var_5) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1])))))));
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [(unsigned char)5] [i_3 - 1])) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) var_0))))));
                    var_23 = ((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_3 - 1] [i_3] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_11 [i_3 - 1] [i_3 - 1] [i_3] [i_5]));
                }
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) arr_11 [i_6] [i_6] [i_6] [(unsigned char)8]))));
                    var_25 -= ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_4]))));
                    arr_19 [i_3] [i_3 - 1] [i_4] [i_6] = ((/* implicit */unsigned int) arr_18 [i_0] [5U] [i_3 - 1] [i_4] [i_6]);
                }
                var_26 = ((int) (unsigned char)123);
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        arr_24 [i_3] [i_4] [i_3] = ((/* implicit */short) (-(arr_11 [i_0 - 1] [i_0 - 1] [i_3] [i_8])));
                        arr_25 [i_3] [i_7] [i_7] [14ULL] [i_3 - 1] [i_3] [i_3] = ((/* implicit */_Bool) ((arr_22 [i_0 - 1] [i_3] [i_3] [i_7] [i_8] [i_4]) ^ (arr_0 [i_0 - 1])));
                    }
                    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        arr_29 [i_3] [i_9] [8LL] [i_4] [i_3] [i_3 - 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [(signed char)13] [i_3] [i_9])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((unsigned long long int) (unsigned char)119))));
                        arr_30 [i_9] [i_7] [i_4] [i_3 - 1] [i_9] |= ((/* implicit */long long int) ((((((/* implicit */int) var_0)) == (((/* implicit */int) arr_12 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_22 [i_9] [i_7] [i_4] [i_4] [i_3] [i_0])));
                    }
                    var_27 |= ((/* implicit */long long int) arr_28 [i_7]);
                    var_28 = ((/* implicit */short) arr_15 [i_3] [i_3 - 1] [i_3 - 1] [i_0 - 1] [i_0] [i_3]);
                }
                var_29 = ((/* implicit */unsigned char) arr_16 [i_3] [i_3 - 1] [i_4] [i_4]);
            }
            for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
            {
                arr_34 [i_3] [(unsigned short)10] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_14 [i_3 - 1] [i_0] [i_0 - 1] [i_0 - 1]))));
                var_30 *= ((/* implicit */_Bool) (~(arr_23 [i_0] [i_0] [(unsigned short)8] [i_0 - 1] [i_0 - 1] [i_3 - 1])));
                var_31 = ((/* implicit */unsigned short) arr_6 [i_3] [i_3] [(unsigned char)14]);
                var_32 = ((/* implicit */_Bool) var_13);
                var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_32 [i_0 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])))))));
            }
            var_34 = ((/* implicit */long long int) ((short) arr_17 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3 - 1] [i_3 - 1]));
        }
        arr_35 [i_0 - 1] [(_Bool)1] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1])) + (2147483647))) << (((((((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1])) + (31944))) - (10)))));
    }
    /* vectorizable */
    for (signed char i_11 = 0; i_11 < 13; i_11 += 2) 
    {
        arr_39 [i_11] = ((/* implicit */_Bool) arr_38 [i_11] [4LL]);
        /* LoopSeq 1 */
        for (unsigned int i_12 = 0; i_12 < 13; i_12 += 4) 
        {
            arr_42 [i_11] = ((/* implicit */unsigned char) (!(arr_27 [i_11] [i_12] [i_11])));
            var_35 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_11])) ? (((/* implicit */int) arr_41 [i_11] [i_12])) : (((/* implicit */int) arr_2 [i_12]))));
            var_36 = ((/* implicit */long long int) arr_21 [i_11] [(_Bool)1] [i_12] [i_11]);
            var_37 -= (!(((/* implicit */_Bool) var_17)));
        }
        /* LoopNest 2 */
        for (long long int i_13 = 1; i_13 < 11; i_13 += 2) 
        {
            for (int i_14 = 0; i_14 < 13; i_14 += 4) 
            {
                {
                    arr_49 [i_11] [i_11] [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_37 [i_13 + 2]))));
                    var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_11])) ? (((/* implicit */int) arr_2 [i_11])) : (((/* implicit */int) var_17))));
                }
            } 
        } 
    }
    var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) var_11))));
    var_40 = ((/* implicit */short) var_15);
    var_41 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
}
