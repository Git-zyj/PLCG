/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239026
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
    var_13 = ((/* implicit */signed char) (-(var_9)));
    var_14 = ((/* implicit */_Bool) max((((/* implicit */long long int) max((var_1), (((/* implicit */unsigned char) var_11))))), (max((var_6), ((~(var_6)))))));
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_12))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */short) (~((~(((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))));
            arr_7 [i_0] = ((/* implicit */unsigned short) arr_5 [i_0]);
            var_16 += ((/* implicit */signed char) arr_0 [(short)8]);
            arr_8 [i_1] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))));
        }
        var_17 |= ((/* implicit */int) (-(arr_5 [i_0])));
        var_18 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0])), (arr_2 [i_0])))))), ((+(((/* implicit */int) arr_2 [8LL]))))));
        var_19 ^= ((/* implicit */unsigned int) var_8);
        /* LoopSeq 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_20 &= ((/* implicit */unsigned int) arr_2 [i_0]);
            arr_12 [i_0] = ((/* implicit */int) arr_11 [i_0]);
            var_21 = max(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 2; i_3 < 17; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    {
                        arr_19 [i_4] [i_4] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_3 - 2])), (max((((/* implicit */unsigned int) arr_0 [i_3 + 1])), (arr_15 [12] [i_3 + 1] [i_4] [i_4] [i_4])))));
                        var_22 = ((/* implicit */signed char) arr_11 [i_0]);
                        arr_20 [i_0] [i_0] [i_2] [i_0] [i_4] [i_0] = ((/* implicit */_Bool) (~((+(((/* implicit */int) var_7))))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            arr_24 [i_4] [i_4] = ((/* implicit */short) arr_23 [i_4] [i_2 - 1] [i_3] [i_2 - 1] [i_4]);
                            arr_25 [i_3] [i_4] [i_3] [i_4] [i_0] = ((/* implicit */signed char) var_1);
                            arr_26 [i_0] [i_0] [i_2 - 1] [i_3] [i_3 + 1] [i_4] [i_5] = ((/* implicit */short) max((max((max((((/* implicit */long long int) arr_10 [i_3] [i_3] [i_3])), (var_9))), (max((((/* implicit */long long int) arr_10 [i_0] [i_2] [i_5])), (var_9))))), (((/* implicit */long long int) max((max((arr_14 [i_2 - 1] [(unsigned short)6] [i_5]), (((/* implicit */unsigned int) arr_16 [i_4] [i_4] [7LL] [0])))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [i_0] [9] [9] [(signed char)0] [(signed char)0] [i_4] [(signed char)0]))))))))));
                        }
                    }
                } 
            } 
        }
        for (unsigned long long int i_6 = 3; i_6 < 15; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_6] [(_Bool)1] = ((/* implicit */long long int) (~(((/* implicit */int) max((arr_16 [i_6] [i_6] [i_6] [i_6 + 3]), (var_5))))));
                            arr_38 [i_0] [i_6] [i_6] [i_6 - 3] [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) arr_5 [i_6 - 1]);
                        }
                        var_23 = ((/* implicit */signed char) var_9);
                        arr_39 [i_8] [i_6] [i_6] [i_6] [i_6] [i_0] = ((/* implicit */long long int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [6ULL] [i_0]);
                    }
                } 
            } 
            arr_40 [i_6] = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) arr_16 [i_6] [i_6] [i_6] [i_6])), ((~(var_9))))), (var_6)));
        }
    }
    /* vectorizable */
    for (long long int i_10 = 1; i_10 < 22; i_10 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_11 = 0; i_11 < 24; i_11 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_12 = 3; i_12 < 23; i_12 += 4) 
            {
                arr_52 [i_12] = (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_44 [1U] [1U]))))));
                var_24 = ((/* implicit */unsigned short) arr_51 [i_10 + 2] [i_12] [i_12 - 3]);
            }
            var_25 = arr_50 [i_10] [i_11] [i_11];
            arr_53 [i_11] [i_10] = ((/* implicit */short) arr_45 [(unsigned char)17] [i_11]);
        }
        for (int i_13 = 0; i_13 < 24; i_13 += 3) 
        {
            var_26 = ((/* implicit */unsigned char) arr_51 [i_10] [(unsigned char)0] [0LL]);
            arr_56 [(unsigned char)1] [i_10] = (!(((/* implicit */_Bool) arr_54 [i_10 - 1])));
        }
        arr_57 [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) arr_55 [(signed char)2] [18LL] [i_10 + 2]))));
        arr_58 [i_10] = ((/* implicit */unsigned short) arr_51 [i_10 - 1] [20ULL] [i_10]);
        var_27 = ((/* implicit */short) arr_41 [i_10]);
    }
}
