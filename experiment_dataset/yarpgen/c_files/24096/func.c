/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24096
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
    var_15 = ((/* implicit */unsigned char) var_11);
    var_16 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned short) (-(((/* implicit */int) arr_0 [(unsigned char)0])))));
    }
    for (short i_1 = 1; i_1 < 11; i_1 += 1) 
    {
        var_18 = ((/* implicit */_Bool) arr_4 [i_1]);
        var_19 = arr_5 [i_1];
        var_20 = ((/* implicit */short) ((_Bool) ((signed char) arr_1 [i_1 - 1])));
        arr_7 [i_1] [i_1 + 1] = (unsigned char)207;
    }
    for (long long int i_2 = 3; i_2 < 11; i_2 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            arr_13 [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_2]))))) : (var_0)));
            arr_14 [i_2] [(_Bool)1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) arr_11 [i_2 + 1] [(signed char)2] [i_2 + 1]))))));
            arr_15 [i_2] [i_3] [i_3] = ((/* implicit */long long int) arr_10 [i_2]);
        }
        for (short i_4 = 2; i_4 < 11; i_4 += 2) 
        {
            var_21 = ((/* implicit */long long int) (short)32512);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                arr_22 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_12 [i_2] [i_4 - 2] [i_2]))));
                var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_16 [i_2] [i_4 + 2] [i_2]))));
                arr_23 [i_2] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_2 + 2] [i_4 - 2] [i_2 + 2]))));
                var_23 = ((/* implicit */long long int) ((arr_20 [i_2 - 2] [i_4 - 2]) && (((/* implicit */_Bool) arr_10 [i_2 - 1]))));
                arr_24 [i_2] = ((/* implicit */unsigned short) var_4);
            }
            var_24 = ((/* implicit */signed char) ((_Bool) arr_8 [i_2 - 2] [i_4 - 1]));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 2) 
            {
                var_25 = ((/* implicit */unsigned long long int) (!(((_Bool) arr_18 [i_2] [i_2] [i_6 + 1] [i_2]))));
                arr_28 [i_2] [i_6] [i_6] [i_4] |= ((/* implicit */long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6]))) >= (var_5)))));
            }
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_31 [i_2] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned char) ((min((((/* implicit */long long int) arr_12 [4LL] [11LL] [i_2])), (-255543951469942363LL))) != (((/* implicit */long long int) (+(((/* implicit */int) arr_10 [(unsigned char)2])))))))), (arr_9 [i_2 - 1] [i_2 + 2])));
            var_26 += ((/* implicit */_Bool) var_3);
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                for (long long int i_9 = 2; i_9 < 12; i_9 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) min((9223372036854775783LL), (((/* implicit */long long int) (_Bool)1))));
                        var_28 = ((((/* implicit */_Bool) arr_35 [i_2 - 1] [i_9 - 2] [i_2])) ? (((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_2 - 1] [i_9 + 1] [i_2]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_35 [i_2 + 2] [i_9 - 2] [i_2]))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                for (unsigned char i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_12 = 0; i_12 < 13; i_12 += 3) 
                        {
                            arr_44 [i_2] [i_7] [i_2] [i_11] [i_2] = ((/* implicit */_Bool) ((arr_32 [11ULL] [i_7]) ? ((+(63ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            arr_45 [i_2] [i_2] = ((((long long int) arr_9 [i_2 + 1] [i_2 - 1])) << (((arr_38 [(unsigned short)9] [(unsigned short)9] [(unsigned short)9]) - (8734722067852609959LL))));
                            arr_46 [i_2] [i_2] [(unsigned char)8] [i_11] [2LL] = ((/* implicit */unsigned long long int) 8935141660703064064LL);
                        }
                        /* vectorizable */
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            var_29 = ((/* implicit */_Bool) arr_43 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [i_2]);
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_2 + 1] [i_2 + 2] [i_2] [1ULL])) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) arr_25 [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2]))));
                        }
                        /* vectorizable */
                        for (unsigned char i_14 = 0; i_14 < 13; i_14 += 4) 
                        {
                            arr_52 [i_2] [i_2] [(_Bool)1] [5ULL] [i_14] = ((/* implicit */unsigned char) arr_33 [i_2] [(unsigned char)2]);
                            var_31 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [i_2] [(_Bool)1]))));
                        }
                        var_32 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_8 [i_2] [i_2 - 3])) ? (((/* implicit */int) arr_40 [i_2] [i_11])) : (((/* implicit */int) arr_39 [i_10] [i_7] [i_10])))) << (((((((/* implicit */_Bool) arr_40 [(unsigned short)2] [i_11])) ? (((/* implicit */int) arr_40 [(_Bool)1] [i_10])) : (((/* implicit */int) arr_40 [i_10] [i_10])))) - (43)))));
                    }
                } 
            } 
        }
        var_33 = ((/* implicit */long long int) arr_35 [i_2] [7ULL] [i_2]);
        arr_53 [i_2] = (i_2 % 2 == 0) ? (((/* implicit */long long int) (((((((~(((/* implicit */int) var_7)))) + (2147483647))) << ((((((~(((/* implicit */int) arr_40 [i_2] [i_2])))) + (72))) - (26))))) % ((~(min((arr_51 [i_2] [i_2]), (((/* implicit */int) (_Bool)1))))))))) : (((/* implicit */long long int) (((((((~(((/* implicit */int) var_7)))) + (2147483647))) << ((((((((((~(((/* implicit */int) arr_40 [i_2] [i_2])))) + (72))) - (26))) + (93))) - (3))))) % ((~(min((arr_51 [i_2] [i_2]), (((/* implicit */int) (_Bool)1)))))))));
    }
    var_34 = ((/* implicit */long long int) ((var_9) | (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)44156)))), (var_11)))));
}
