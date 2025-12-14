/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219524
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
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_10 ^= ((/* implicit */long long int) ((arr_0 [i_0 + 3]) % (min((((/* implicit */unsigned long long int) ((short) arr_0 [i_0]))), (((unsigned long long int) arr_0 [i_0 + 4]))))));
        arr_2 [i_0 - 2] = ((/* implicit */unsigned char) var_7);
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 10; i_1 += 2) /* same iter space */
    {
        var_11 |= ((/* implicit */unsigned short) arr_6 [i_1 + 3]);
        arr_7 [i_1] = ((/* implicit */_Bool) ((unsigned char) arr_0 [i_1]));
        arr_8 [i_1 + 2] = ((/* implicit */signed char) (-(((/* implicit */int) arr_6 [i_1 + 1]))));
    }
    for (short i_2 = 2; i_2 < 22; i_2 += 2) 
    {
        var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_10 [i_2]))))))) ? (((long long int) ((((/* implicit */int) arr_9 [i_2])) >> (((/* implicit */int) arr_9 [i_2]))))) : (((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) var_0))))))));
        var_13 |= ((/* implicit */unsigned long long int) ((unsigned int) var_4));
        /* LoopSeq 3 */
        for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                arr_18 [i_4] [i_3] [i_2] [i_2] = ((/* implicit */short) arr_15 [i_3]);
                var_14 &= ((/* implicit */short) ((((/* implicit */int) var_7)) & (((/* implicit */int) max((((/* implicit */short) arr_12 [i_2 + 1])), (arr_11 [i_2] [i_2]))))));
                arr_19 [i_2] [i_2] [i_2] [i_2 - 2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((arr_9 [i_4]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_10 [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3]))) : (arr_17 [i_2 - 1] [i_3] [i_4]))), (((/* implicit */long long int) var_2))));
            }
            for (short i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                arr_22 [i_2] [i_2] = ((/* implicit */long long int) arr_14 [i_3]);
                arr_23 [i_2] [i_3] [i_2] = var_4;
            }
            arr_24 [i_2 - 2] [(_Bool)1] = ((/* implicit */unsigned char) max((((arr_9 [i_2 - 2]) ? (((/* implicit */int) arr_9 [i_2 - 1])) : (((/* implicit */int) arr_9 [i_2 + 1])))), (((int) arr_9 [i_2 + 1]))));
        }
        for (short i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            arr_29 [i_2 + 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) max((arr_11 [i_2 - 1] [i_6]), (arr_11 [i_2 + 1] [i_6]))))));
            arr_30 [i_2] [i_6] [i_6] = ((/* implicit */unsigned char) arr_11 [i_2] [i_2 - 1]);
        }
        for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 3) 
        {
            arr_34 [i_2] = ((/* implicit */short) (+((-(((/* implicit */int) arr_27 [i_2 - 2] [i_7 + 1] [i_7 + 3]))))));
            arr_35 [8] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_7 - 1]))) : (arr_33 [i_2] [i_7])))))))));
            arr_36 [i_7 + 3] [i_2] = ((/* implicit */_Bool) (~(((arr_20 [i_2] [(short)10] [i_7 + 2] [i_2 - 1]) & (arr_20 [i_2] [i_7] [i_7 + 1] [i_2 + 1])))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_8 = 2; i_8 < 22; i_8 += 1) 
            {
                var_15 ^= ((/* implicit */short) ((((/* implicit */int) var_7)) / (arr_32 [i_8 + 1])));
                var_16 = ((/* implicit */_Bool) ((unsigned int) arr_10 [i_8 + 1]));
            }
            for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                var_17 |= arr_40 [i_7];
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (+(((arr_33 [i_2] [(_Bool)1]) & (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
                    arr_47 [i_2 + 1] [i_7 - 1] [i_7 - 1] [i_2 + 1] = ((/* implicit */unsigned short) arr_41 [11LL] [(unsigned char)12]);
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_38 [i_7] [(unsigned short)17] [i_7 + 1] [i_7 + 1])))) ? (((((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_11] [i_7] [i_2 - 1])) || (((/* implicit */_Bool) arr_38 [i_2] [i_7 - 1] [i_9] [i_11]))))) >> (((arr_17 [i_11] [i_7] [i_2 - 2]) + (3350828555812410397LL))))) : (((/* implicit */int) ((((((/* implicit */int) var_0)) * (((/* implicit */int) var_8)))) >= (((((/* implicit */int) var_5)) + (((/* implicit */int) arr_27 [i_7] [i_9] [i_7])))))))));
                    arr_50 [i_11] [i_9] [i_7] [i_11] = ((/* implicit */_Bool) ((arr_16 [i_11] [i_7] [i_7] [i_2 - 1]) / ((+(((unsigned long long int) arr_11 [i_2 + 1] [i_2 - 1]))))));
                    var_20 = ((((/* implicit */_Bool) arr_48 [i_2 - 1] [i_7 + 1])) ? (((((/* implicit */int) arr_48 [i_2 + 1] [i_7 + 3])) / (((/* implicit */int) arr_48 [i_2 + 1] [i_7 + 2])))) : (((((/* implicit */int) arr_48 [i_2 - 1] [i_7 + 3])) >> (((((/* implicit */int) arr_48 [i_2 - 2] [i_7 + 2])) - (53512))))));
                }
                arr_51 [i_2] [i_2] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) (!(arr_12 [i_2 + 1]))))));
            }
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_12 = 1; i_12 < 22; i_12 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_8)), (((unsigned long long int) (+(((/* implicit */int) arr_31 [i_2] [i_2])))))));
            var_22 = (i_12 % 2 == zero) ? (((/* implicit */unsigned char) ((((((/* implicit */int) arr_52 [i_2 - 2] [i_2 + 1] [i_12])) + (2147483647))) << ((((-(((/* implicit */int) arr_52 [i_2 - 2] [i_2 + 1] [i_12])))) - (30)))))) : (((/* implicit */unsigned char) ((((((((/* implicit */int) arr_52 [i_2 - 2] [i_2 + 1] [i_12])) - (2147483647))) + (2147483647))) << ((((((-(((/* implicit */int) arr_52 [i_2 - 2] [i_2 + 1] [i_12])))) - (30))) + (120))))));
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_49 [i_12] [i_2] [i_2] [i_2] [i_2])) % (((/* implicit */int) var_0)))))))));
        }
    }
    var_24 = ((/* implicit */short) var_9);
}
