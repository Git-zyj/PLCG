/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52589
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
    var_13 &= ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)237)) / (((/* implicit */int) (short)6951)))) & (((/* implicit */int) var_9))));
    var_14 -= ((/* implicit */short) (-(((((/* implicit */int) var_0)) * (((/* implicit */int) var_9))))));
    var_15 = ((/* implicit */signed char) (unsigned short)44093);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned char) max((max((var_6), (((/* implicit */long long int) var_5)))), (arr_2 [i_0 + 3] [i_1] [i_1])));
            var_16 = ((/* implicit */unsigned long long int) arr_4 [i_0 + 4]);
        }
        for (unsigned short i_2 = 2; i_2 < 20; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))));
            /* LoopSeq 3 */
            for (unsigned char i_3 = 2; i_3 < 22; i_3 += 2) 
            {
                arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 - 2]))) >= (var_7)));
                arr_11 [i_0] [i_2] [i_0] [i_3] = ((/* implicit */short) (+(((/* implicit */int) var_9))));
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(arr_8 [i_0])));
            }
            /* vectorizable */
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 1) 
                {
                    var_18 &= ((/* implicit */_Bool) (unsigned char)3);
                    arr_20 [i_0] [i_0] = ((/* implicit */signed char) var_4);
                    var_19 = ((/* implicit */unsigned int) (unsigned char)3);
                    var_20 ^= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (arr_19 [i_4] [i_4] [(signed char)22] [i_4]))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 + 4] [i_0 + 4] [i_4] [i_0 - 1])))));
                }
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_0] [i_2 - 1] [i_2] [i_4])) >> (((/* implicit */int) arr_17 [i_0 + 4] [i_0 + 1] [i_0 + 1] [i_0]))));
                var_22 -= ((_Bool) arr_3 [i_0]);
                var_23 = ((/* implicit */unsigned int) (unsigned char)15);
            }
            for (short i_6 = 3; i_6 < 21; i_6 += 3) 
            {
                arr_24 [i_0] [i_2 + 1] [i_2 - 1] [i_0] = min(((short)32750), (((/* implicit */short) (_Bool)1)));
                var_24 = ((/* implicit */int) ((((long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_18 [i_0] [i_2] [i_2] [i_6]))))) ^ (((/* implicit */long long int) (+((+(arr_16 [i_0 + 4] [i_2 - 1] [i_6] [i_2 - 1] [(unsigned char)6] [i_0]))))))));
                var_25 = ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) arr_8 [i_0])) : (arr_14 [i_0 + 1] [i_2 + 2] [i_6 - 1]))), (((/* implicit */long long int) arr_15 [i_0] [i_0 + 4] [i_0] [i_6]))))));
                var_26 = ((/* implicit */_Bool) var_3);
            }
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    {
                        var_27 = ((/* implicit */short) arr_18 [i_0] [i_2 - 2] [i_0] [i_2 - 2]);
                        arr_30 [i_0] [i_0] [i_7] [11ULL] = ((/* implicit */signed char) (-(((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */long long int) (-2147483647 - 1))) == (7854124930596211926LL)))), ((unsigned char)194))))));
                        arr_31 [i_0] [(unsigned char)10] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) var_8))) | (((((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11553261527791112488ULL))) >> (((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_9 = 2; i_9 < 21; i_9 += 3) 
                        {
                            var_28 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_21 [i_7] [i_0] [i_8] [i_9 - 1])) : (((/* implicit */int) arr_21 [i_7] [i_0] [(_Bool)1] [i_9 + 2])));
                            var_29 = ((/* implicit */short) var_7);
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_0 - 1] [i_7] [i_9 + 1])) && (((/* implicit */_Bool) (unsigned char)0))));
                        }
                        for (signed char i_10 = 4; i_10 < 22; i_10 += 4) 
                        {
                            arr_37 [i_0] [i_0] [i_7] [i_8] [i_10 + 1] = ((/* implicit */int) arr_23 [i_0 - 1]);
                            var_31 = ((/* implicit */unsigned char) var_2);
                        }
                        for (signed char i_11 = 2; i_11 < 22; i_11 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned char)249))));
                            var_33 -= ((/* implicit */unsigned int) var_9);
                            var_34 &= ((/* implicit */short) ((int) (~(((/* implicit */int) arr_26 [i_2] [i_2] [i_0 - 1])))));
                        }
                    }
                } 
            } 
        }
        arr_40 [i_0] = ((/* implicit */unsigned short) ((((((((/* implicit */unsigned long long int) arr_16 [3ULL] [i_0 + 2] [i_0 + 3] [i_0] [i_0] [i_0])) / (arr_35 [i_0 + 1] [i_0 + 3] [i_0] [i_0 + 3] [i_0 + 2]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_9 [i_0] [i_0] [i_0 + 3] [i_0]), ((_Bool)0))))))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)22259)))))));
    }
    /* vectorizable */
    for (signed char i_12 = 3; i_12 < 11; i_12 += 4) 
    {
        var_35 -= ((/* implicit */unsigned int) ((arr_36 [i_12 + 1] [(short)16] [i_12 - 2] [i_12 - 2] [(short)16] [4ULL]) < (var_2)));
        arr_43 [i_12] = ((/* implicit */int) arr_18 [i_12] [i_12 + 1] [i_12 - 3] [i_12 + 1]);
        /* LoopSeq 1 */
        for (unsigned long long int i_13 = 1; i_13 < 10; i_13 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_14 = 0; i_14 < 12; i_14 += 2) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 3) 
                {
                    {
                        var_36 = ((/* implicit */signed char) (~(arr_1 [i_13 + 2] [i_13 - 1])));
                        arr_52 [i_15] [i_14] [i_15] = ((/* implicit */unsigned char) (+((~(arr_14 [i_15] [i_14] [i_13])))));
                        arr_53 [i_15] = ((/* implicit */unsigned long long int) (short)32751);
                        var_37 = ((/* implicit */int) arr_13 [0LL] [i_13] [0LL] [i_15]);
                        arr_54 [i_12 - 1] [i_14] [i_15] [i_15] = ((/* implicit */unsigned int) arr_42 [i_12 + 1]);
                    }
                } 
            } 
            var_38 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_13] [i_12 + 1] [i_12 + 1] [i_12 - 1]))));
            arr_55 [i_13] = ((/* implicit */signed char) var_8);
            arr_56 [i_12] [i_13] [i_13] = ((/* implicit */unsigned short) var_10);
            arr_57 [i_12] = ((/* implicit */signed char) arr_26 [i_12] [i_12] [(unsigned char)17]);
        }
    }
}
