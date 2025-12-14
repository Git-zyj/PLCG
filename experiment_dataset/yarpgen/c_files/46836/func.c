/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46836
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((+(var_2)))))) ? (max((var_2), (((/* implicit */unsigned long long int) (+(var_1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) != (((/* implicit */int) ((var_10) != (((/* implicit */int) var_12)))))))))));
    var_14 = ((/* implicit */short) max((((/* implicit */long long int) (+(((((/* implicit */int) var_0)) * (((/* implicit */int) var_11))))))), (-1LL)));
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_15 = ((_Bool) (~((+(var_5)))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | ((+(((((/* implicit */int) arr_1 [i_0 + 1])) - (((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) max((min((((/* implicit */int) var_11)), (arr_10 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 2]))), ((+(((((/* implicit */int) var_8)) | (((/* implicit */int) var_11)))))))))));
                        var_17 = ((/* implicit */_Bool) var_2);
                        arr_11 [i_0] [i_1] [i_0] = ((/* implicit */long long int) var_4);
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_9)))))) * ((+(var_2)))));
                        var_19 = ((/* implicit */short) (+(var_1)));
                        var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (arr_7 [i_0] [i_0] [i_0 - 1] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [(unsigned short)5] [i_2] [i_0]))))) % (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                    }
                    arr_14 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) + (2147483647))) << (((((long long int) arr_6 [i_2])) - (520402747512230229LL)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        arr_18 [4U] [(_Bool)1] [i_5] [i_5] [8U] [i_0] = ((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_5]);
                        arr_19 [i_0] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((var_1) < (arr_9 [i_5] [i_2] [2LL] [4U] [i_0 - 1]))))));
                        arr_20 [i_0] [i_1] [i_1] [i_5] [i_0] = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) var_6)))));
                        arr_21 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                        arr_22 [(_Bool)1] [(_Bool)0] [(_Bool)1] [(_Bool)0] [(_Bool)1] [i_5] &= ((/* implicit */unsigned int) ((((_Bool) arr_5 [i_5])) || (((/* implicit */_Bool) arr_16 [(_Bool)1] [i_0 + 1] [i_0] [i_0] [i_0] [i_0]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 4; i_6 < 8; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
                        arr_27 [(unsigned short)6] [i_1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_6))))) / (arr_5 [i_2])));
                    }
                }
            } 
        } 
        var_22 *= ((/* implicit */unsigned short) var_9);
    }
    /* vectorizable */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        var_23 ^= (+(arr_29 [i_7 - 1]));
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_4))));
        arr_30 [i_7] = ((/* implicit */short) (~(-1LL)));
    }
    /* vectorizable */
    for (short i_8 = 2; i_8 < 18; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 16; i_9 += 3) 
        {
            for (unsigned char i_10 = 1; i_10 < 18; i_10 += 3) 
            {
                {
                    var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
                    var_26 ^= ((/* implicit */unsigned int) var_6);
                }
            } 
        } 
        arr_38 [i_8] = arr_35 [i_8 + 1] [i_8 + 1] [i_8 + 1];
        var_27 ^= ((/* implicit */_Bool) var_5);
    }
    for (unsigned int i_11 = 0; i_11 < 21; i_11 += 1) 
    {
        var_28 = ((_Bool) ((var_2) >> (((((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_11] [i_11]))))) - (13687565173621080903ULL)))));
        var_29 -= max((((/* implicit */int) ((unsigned short) max((((/* implicit */int) var_0)), (var_10))))), ((~(((/* implicit */int) ((_Bool) var_5))))));
    }
    var_30 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */int) ((((/* implicit */int) (unsigned short)63690)) < (((/* implicit */int) var_3))))), (((((/* implicit */int) var_7)) * (((/* implicit */int) var_0))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_12 = 0; i_12 < 12; i_12 += 1) 
    {
        arr_43 [i_12] [i_12] = ((/* implicit */_Bool) (~((~(arr_40 [i_12])))));
        arr_44 [i_12] = ((/* implicit */unsigned char) (~(((arr_41 [i_12] [(unsigned short)11]) ? (((/* implicit */int) arr_34 [i_12])) : (((/* implicit */int) (short)5131))))));
        /* LoopNest 3 */
        for (long long int i_13 = 0; i_13 < 12; i_13 += 2) 
        {
            for (long long int i_14 = 4; i_14 < 11; i_14 += 1) 
            {
                for (unsigned int i_15 = 2; i_15 < 11; i_15 += 2) 
                {
                    {
                        var_31 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_49 [i_14 - 1] [i_14 - 1] [9LL]))));
                        arr_53 [i_15 - 1] = ((/* implicit */long long int) arr_34 [(unsigned short)0]);
                        arr_54 [i_12] [i_12] [i_12] = ((/* implicit */long long int) var_10);
                        arr_55 [i_12] [i_12] [i_13] [i_14] [i_15 - 1] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (_Bool)1))) | (((/* implicit */int) arr_41 [i_14 - 4] [i_14 - 1]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 21; i_16 += 1) 
    {
        var_32 = ((/* implicit */int) arr_40 [i_16]);
        var_33 -= ((/* implicit */_Bool) var_4);
    }
    /* vectorizable */
    for (long long int i_17 = 0; i_17 < 23; i_17 += 3) 
    {
        arr_62 [i_17] = ((/* implicit */int) (-(var_2)));
        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_60 [i_17] [i_17])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))))));
        arr_63 [18] = ((/* implicit */long long int) arr_61 [i_17]);
        /* LoopSeq 1 */
        for (long long int i_18 = 4; i_18 < 20; i_18 += 2) 
        {
            var_35 = ((/* implicit */_Bool) ((long long int) arr_60 [i_18 - 1] [i_18 + 1]));
            arr_66 [i_17] [19U] = ((/* implicit */long long int) (-(((/* implicit */int) arr_65 [i_18 - 2]))));
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_18 - 4]))) & (arr_60 [i_18 - 1] [i_18 + 2])));
        }
    }
}
