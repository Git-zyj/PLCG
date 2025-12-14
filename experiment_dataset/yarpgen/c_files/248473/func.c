/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248473
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
    var_19 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        var_21 = ((((/* implicit */int) arr_1 [i_0] [i_0])) & (arr_0 [i_0]));
        var_22 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-9914)) : (((/* implicit */int) (short)-9914)))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1])) != (((/* implicit */int) arr_6 [(unsigned short)17]))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? ((+(((/* implicit */int) arr_6 [i_2])))) : (((/* implicit */int) arr_9 [2U]))));
                    }
                    arr_14 [i_3] = ((/* implicit */short) ((7046760311045113760ULL) << (((546690306) - (546690264)))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    {
                        var_25 += ((/* implicit */short) (-(((/* implicit */int) arr_21 [i_5] [i_6] [i_5] [i_1]))));
                        var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_17))));
                            var_28 = ((/* implicit */unsigned short) ((long long int) arr_4 [i_1]));
                            var_29 *= ((/* implicit */_Bool) ((signed char) (-(-54906117))));
                            arr_28 [i_6] [i_7] = ((/* implicit */short) ((63972565) <= (1594663009)));
                        }
                        for (long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned char) ((unsigned long long int) arr_17 [i_7]));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_1] [15LL])) & (((/* implicit */int) var_18))));
                            var_32 &= ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                        }
                        var_33 = ((/* implicit */unsigned int) ((5U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                    }
                } 
            } 
        } 
        arr_32 [i_1] = ((/* implicit */signed char) ((17179869183ULL) + (((/* implicit */unsigned long long int) -1594663028))));
    }
    for (signed char i_10 = 4; i_10 < 21; i_10 += 4) 
    {
        arr_35 [i_10] = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) max((((/* implicit */int) (short)0)), (arr_33 [i_10] [i_10])))), (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_10 - 2] [i_10 - 1])) ? (((/* implicit */int) ((unsigned short) var_9))) : (((((/* implicit */int) (short)32767)) / (arr_33 [i_10] [i_10 + 3]))))))));
        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_10 - 2] [i_10 + 2])) ? (((((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_10] [i_10])) || (((/* implicit */_Bool) arr_34 [i_10]))))) << ((((+(((/* implicit */int) var_16)))) - (4760))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (arr_33 [i_10 - 4] [i_10])))) ? ((+(((/* implicit */int) var_16)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34104)))))))));
    }
    for (unsigned int i_11 = 0; i_11 < 21; i_11 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_12 = 0; i_12 < 21; i_12 += 1) 
        {
            for (unsigned short i_13 = 0; i_13 < 21; i_13 += 1) 
            {
                for (long long int i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    {
                        var_35 = ((/* implicit */int) arr_3 [i_11]);
                        arr_47 [i_11] [i_12] [i_11] [i_13] [i_14] [i_14] = ((/* implicit */_Bool) min((arr_46 [i_11] [i_12] [i_13] [i_14] [i_14] [i_12]), (((/* implicit */int) ((min((var_10), (((/* implicit */unsigned long long int) var_6)))) == (((/* implicit */unsigned long long int) ((int) arr_5 [i_13] [i_12]))))))));
                        arr_48 [i_11] [i_12] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) arr_25 [i_11] [i_12] [i_12] [i_12] [i_12] [3ULL] [i_14]);
                        var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_41 [i_14] [i_13] [i_12] [(signed char)2]), (arr_13 [i_11] [i_14])))))))));
                    }
                } 
            } 
        } 
        var_37 &= ((/* implicit */long long int) 1594663028);
    }
    var_38 = ((/* implicit */int) (signed char)124);
}
