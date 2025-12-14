/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45581
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((var_0) >= (var_12))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_6 [(short)14] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11)))))));
                    arr_7 [i_1] [i_2] [(unsigned short)10] [4ULL] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (var_12) : (var_3)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_12 [9ULL] [9ULL] [14ULL] [1ULL] [i_0] [i_3] [5ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_9))));
                                arr_13 [i_0] [i_0] [i_0] [i_2] [i_3] [(unsigned short)4] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))));
                                var_17 -= (+(var_10));
                                var_18 = ((var_9) >> (((((/* implicit */int) var_4)) - (58398))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) << (((((/* implicit */int) var_6)) - (31881)))));
        var_20 = var_3;
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
    {
        arr_18 [i_6] = ((/* implicit */short) var_1);
        var_21 = ((/* implicit */short) var_14);
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
    {
        arr_23 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))));
        arr_24 [i_7] = ((((/* implicit */_Bool) var_0)) ? (var_10) : (var_13));
        var_22 *= ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_14)) ? (var_13) : (var_10))) : (var_13));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (~(var_0))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) /* same iter space */
    {
        arr_29 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_5)))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_12)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 1) 
        {
            for (unsigned short i_10 = 0; i_10 < 23; i_10 += 3) 
            {
                for (short i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    {
                        arr_38 [i_11] [i_11] [i_8] [(short)17] = ((/* implicit */short) ((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_9))) < ((~(var_3))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))))));
                        arr_39 [i_8] [9ULL] [i_9 - 1] [i_9] [(short)22] [i_11] = ((/* implicit */unsigned long long int) ((((var_13) <= (var_0))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) <= (var_12))))));
                        arr_40 [(short)15] [i_8] = ((/* implicit */unsigned long long int) (((+(var_12))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_12 = 2; i_12 < 20; i_12 += 4) 
    {
        arr_43 [i_12] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_14)) >> (((((/* implicit */int) var_11)) + (1480)))))) ? (var_12) : (var_0)))));
        var_24 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 2) 
        {
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_0) : (var_9)))) ? (((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
            var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_14 = 0; i_14 < 22; i_14 += 2) 
            {
                arr_48 [i_12 + 2] [i_12 + 2] [(unsigned char)17] [12ULL] &= ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_5))));
                var_27 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (var_0)));
                arr_49 [10ULL] [i_13] [(unsigned short)11] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14))));
                var_28 = (+(var_9));
            }
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) ? (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_10))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_12))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14)))))))));
        }
        arr_50 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) ^ ((-(((/* implicit */int) var_4))))));
        arr_51 [(unsigned char)2] = ((/* implicit */short) var_7);
    }
    var_30 = ((/* implicit */unsigned long long int) var_11);
    var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
    var_32 = ((/* implicit */short) var_3);
}
