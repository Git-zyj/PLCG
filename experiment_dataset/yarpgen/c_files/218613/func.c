/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218613
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [(signed char)6] [i_1] = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) ((unsigned char) arr_2 [i_0]))))));
                    var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) ((488950010) - (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [(unsigned char)14])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9)))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */short) arr_6 [i_0] [i_1 + 2] [(unsigned char)4]);
                                var_14 = ((/* implicit */long long int) (unsigned char)255);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) ((((((/* implicit */int) arr_4 [i_1])) + (((/* implicit */int) arr_4 [i_1])))) == (((/* implicit */int) var_11))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_5 = 1; i_5 < 7; i_5 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_6 = 1; i_6 < 8; i_6 += 1) 
        {
            var_16 = ((/* implicit */_Bool) (+(max((((((/* implicit */int) var_2)) - (((/* implicit */int) arr_19 [i_6] [i_5 - 1] [i_5])))), (((/* implicit */int) arr_2 [i_5 + 2]))))));
            /* LoopSeq 4 */
            for (long long int i_7 = 1; i_7 < 6; i_7 += 3) 
            {
                arr_23 [i_5] [i_5] [(signed char)9] [(signed char)4] = ((/* implicit */unsigned char) (short)-24978);
                var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((short) arr_6 [i_5 + 3] [i_6] [i_7]))))))));
                arr_24 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */short) var_3);
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_5] [i_6 - 1] [i_5 + 3]), (arr_5 [i_5] [i_6 + 1] [i_5 + 3]))))) * (var_7)));
                var_19 = ((/* implicit */long long int) max((((/* implicit */int) ((_Bool) (short)-24997))), ((~(((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (arr_5 [i_5] [i_6] [i_8]))))))));
                arr_27 [i_5] [7LL] [(unsigned char)0] [i_5] = ((((/* implicit */_Bool) ((var_9) ? (((((/* implicit */_Bool) arr_0 [i_5 + 1] [(unsigned char)9])) ? (((/* implicit */int) (short)24978)) : (((/* implicit */int) (short)24996)))) : (((/* implicit */int) arr_4 [i_5]))))) ? (((/* implicit */int) (short)24996)) : (((/* implicit */int) (_Bool)0)));
            }
            /* vectorizable */
            for (short i_9 = 1; i_9 < 9; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_10 = 1; i_10 < 7; i_10 += 4) 
                {
                    for (signed char i_11 = 1; i_11 < 8; i_11 += 3) 
                    {
                        {
                            arr_37 [i_5] [i_5] = ((/* implicit */int) arr_13 [(signed char)1] [i_9] [9LL] [(_Bool)1] [9LL] [i_9] [i_5]);
                            var_20 = ((/* implicit */long long int) ((unsigned char) arr_3 [i_5] [i_9 + 1] [i_5]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_12 = 2; i_12 < 7; i_12 += 4) 
                {
                    for (long long int i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) var_0)))));
                            arr_44 [4] [i_5] [i_9 - 1] [i_5] [i_5] = ((/* implicit */short) (~(arr_28 [i_5 + 2])));
                            var_22 = ((/* implicit */short) (unsigned char)134);
                            arr_45 [(short)2] [(signed char)5] [i_9] [i_5] [i_13] = ((/* implicit */short) (signed char)-9);
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_7))));
                        }
                    } 
                } 
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_24 = ((/* implicit */short) max(((+(arr_0 [13LL] [i_6 + 2]))), (arr_42 [i_14] [i_5] [(unsigned char)8])));
                var_25 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_25 [i_5])) : (((/* implicit */int) arr_25 [i_5]))))) - (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) (signed char)-52)) : (((/* implicit */int) var_3))))), (((((/* implicit */long long int) ((/* implicit */int) var_8))) / (arr_28 [i_14])))))));
            }
        }
        for (unsigned char i_15 = 1; i_15 < 9; i_15 += 3) 
        {
            arr_52 [i_5] = ((/* implicit */unsigned long long int) (+(min((arr_42 [i_15 + 1] [i_5] [i_15]), (((((/* implicit */_Bool) arr_1 [(unsigned char)13] [(unsigned char)0])) ? (arr_30 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_51 [(signed char)9] [i_15 - 1])))))))));
            /* LoopNest 3 */
            for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
            {
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    for (long long int i_18 = 3; i_18 < 9; i_18 += 3) 
                    {
                        {
                            var_26 &= ((/* implicit */unsigned long long int) var_11);
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max((var_5), (var_10))))) % ((+(((long long int) var_11))))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_5] [i_5] [i_5] [i_5 + 2])) / (((/* implicit */int) arr_33 [i_15] [i_5] [i_5] [i_5 + 1]))))) - (max((arr_3 [i_5 - 1] [i_15 + 1] [i_5]), (arr_49 [i_5] [i_15] [i_15] [i_5])))));
        }
        var_29 = var_3;
    }
    var_30 = ((/* implicit */short) ((((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-578)) : (((/* implicit */int) var_11))))) != (((/* implicit */long long int) ((/* implicit */int) var_11)))));
}
