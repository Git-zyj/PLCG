/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206207
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
    var_17 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = (~(var_13));
                arr_7 [i_0] [i_1] [i_1] = ((((/* implicit */int) var_12)) << ((((+(arr_1 [i_0]))) - (1383586284))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) arr_3 [i_0] [i_1]))));
                            arr_13 [i_1] [i_1] = ((/* implicit */long long int) var_4);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) var_12)) >> ((-(((/* implicit */int) var_12)))))))));
                            arr_18 [i_5] [i_1] [(_Bool)1] [i_1] [i_1] [i_0] = var_13;
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (+(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)9))))))))));
                            arr_19 [i_0] [i_1] [i_4] [i_1] = ((/* implicit */signed char) var_10);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_1);
    var_22 = ((/* implicit */int) (!(((((/* implicit */_Bool) ((var_16) - (var_16)))) && (((/* implicit */_Bool) var_0))))));
    /* LoopSeq 4 */
    for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        var_23 = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_10))));
    }
    for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
    {
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) arr_2 [i_7] [(signed char)8]))));
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            for (int i_9 = 1; i_9 < 17; i_9 += 1) 
            {
                {
                    var_26 = ((/* implicit */signed char) var_9);
                    arr_28 [i_9] &= (+(((arr_16 [i_7] [i_7] [i_8] [i_8] [i_9 - 1] [i_9 - 1]) >> (((var_3) - (12923049738630859258ULL))))));
                    var_27 = ((/* implicit */signed char) var_9);
                }
            } 
        } 
        var_28 = ((/* implicit */short) ((((/* implicit */int) var_15)) % (((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_7]))))) | ((~(((/* implicit */int) arr_27 [i_7] [i_7] [i_7]))))))));
    }
    for (signed char i_10 = 0; i_10 < 22; i_10 += 3) 
    {
        arr_31 [i_10] [i_10] = ((/* implicit */signed char) (+(var_3)));
        var_29 = ((/* implicit */_Bool) arr_30 [i_10] [i_10]);
        var_30 -= arr_2 [(signed char)6] [(signed char)6];
        var_31 += ((/* implicit */long long int) (~(((((/* implicit */int) var_11)) << (((((((/* implicit */unsigned long long int) arr_5 [i_10])) | (arr_14 [i_10] [i_10] [i_10]))) - (18446744073673373416ULL)))))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_12 = 1; i_12 < 21; i_12 += 2) 
        {
            for (signed char i_13 = 0; i_13 < 22; i_13 += 3) 
            {
                for (int i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    {
                        var_32 &= ((/* implicit */long long int) ((((/* implicit */int) arr_11 [4U] [i_14])) == (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_14] [i_14]))) / (arr_15 [i_12] [18ULL] [i_14]))) > (((/* implicit */long long int) ((((/* implicit */int) arr_35 [i_14] [i_11] [i_14])) + (arr_34 [i_14] [i_11])))))))));
                        arr_43 [i_14] [i_11] [i_12] [i_11] [i_11] = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
                        arr_44 [i_11] [i_12] [i_12] [i_11] [i_13] [i_14] = (i_11 % 2 == 0) ? (((/* implicit */_Bool) ((((((((((/* implicit */int) arr_35 [i_11] [i_11] [i_11])) + (2147483647))) >> (((arr_1 [i_14]) - (1383586263))))) % ((+(((/* implicit */int) var_15)))))) >> (((((/* implicit */long long int) ((/* implicit */int) var_0))) / ((+(var_14)))))))) : (((/* implicit */_Bool) ((((((((((((/* implicit */int) arr_35 [i_11] [i_11] [i_11])) - (2147483647))) + (2147483647))) >> (((arr_1 [i_14]) - (1383586263))))) % ((+(((/* implicit */int) var_15)))))) >> (((((/* implicit */long long int) ((/* implicit */int) var_0))) / ((+(var_14))))))));
                        var_33 = var_15;
                        var_34 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_41 [i_11] [i_14] [i_11] [i_11])) * (((((/* implicit */int) var_10)) / (arr_16 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_15 = 2; i_15 < 21; i_15 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_16 = 0; i_16 < 22; i_16 += 4) 
            {
                var_35 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_40 [(short)9] [i_11])) || (((/* implicit */_Bool) arr_37 [i_15])))))));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 22; i_17 += 3) 
                {
                    for (unsigned long long int i_18 = 2; i_18 < 19; i_18 += 2) 
                    {
                        {
                            var_36 = arr_50 [i_11] [i_11] [i_11] [i_17];
                            var_37 = ((/* implicit */long long int) max((var_37), (arr_37 [i_15])));
                            var_38 = ((/* implicit */unsigned short) ((var_3) == (var_3)));
                            arr_57 [i_11] = ((/* implicit */signed char) var_6);
                        }
                    } 
                } 
            }
            var_39 = ((/* implicit */signed char) ((((/* implicit */int) var_0)) / (arr_1 [i_11])));
            var_40 = (~(((/* implicit */int) var_4)));
            arr_58 [(unsigned short)6] [8] [8] |= ((/* implicit */unsigned short) (((-(arr_54 [i_15] [i_15] [(unsigned short)0] [(unsigned short)0] [i_11]))) + (((((/* implicit */long long int) ((((/* implicit */int) arr_49 [i_15])) + (((/* implicit */int) arr_42 [(unsigned short)2]))))) + (((((/* implicit */long long int) ((/* implicit */int) arr_51 [i_11] [i_11] [i_15]))) / (arr_50 [(signed char)10] [i_15] [i_15 + 1] [i_11])))))));
        }
        /* LoopSeq 2 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) ((((((/* implicit */int) ((var_13) >= (arr_1 [i_11])))) & (((/* implicit */int) var_7)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 2147483642))))))))));
            arr_62 [(_Bool)1] |= arr_40 [2] [2];
        }
        for (int i_20 = 2; i_20 < 21; i_20 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_21 = 0; i_21 < 22; i_21 += 2) 
            {
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (signed char i_23 = 1; i_23 < 18; i_23 += 2) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned int) arr_54 [9ULL] [i_20] [i_20] [i_22] [i_21]);
                            arr_77 [i_11] = ((/* implicit */signed char) ((((/* implicit */int) arr_17 [i_11] [i_11] [i_11])) > (((((/* implicit */int) var_9)) - ((-(((/* implicit */int) var_10))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_24 = 0; i_24 < 22; i_24 += 1) 
            {
                for (int i_25 = 0; i_25 < 22; i_25 += 2) 
                {
                    for (int i_26 = 0; i_26 < 22; i_26 += 3) 
                    {
                        {
                            var_43 ^= ((/* implicit */signed char) (+((((~(((/* implicit */int) var_11)))) * (((/* implicit */int) arr_30 [i_26] [i_25]))))));
                            arr_86 [i_11] = ((/* implicit */long long int) (~(((/* implicit */int) (((!(((/* implicit */_Bool) arr_16 [i_11] [i_11] [i_11] [i_11] [(short)19] [i_11])))) && ((!(((/* implicit */_Bool) var_0)))))))));
                            var_44 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_81 [i_11] [i_20 - 2] [(_Bool)1] [i_11] [i_11] [(_Bool)1]))));
                        }
                    } 
                } 
            } 
        }
    }
}
