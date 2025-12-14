/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233312
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) var_1)))))));
    var_16 = var_9;
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((var_5) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) ((var_6) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))))))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) ((unsigned long long int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) arr_2 [i_0])))));
        var_19 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) ((unsigned short) var_7))) : (((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0])))))));
        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned short)8191)) : (-1)))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : (min((arr_2 [i_0]), (arr_2 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1]))))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1]))) : (((/* implicit */int) arr_5 [i_1]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) | (((((/* implicit */_Bool) 3941882849U)) ? (((/* implicit */long long int) -30693279)) : (var_6))))))));
            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_1] [i_2]))));
            arr_9 [i_1] = ((/* implicit */unsigned short) arr_7 [i_1] [i_1]);
            /* LoopNest 2 */
            for (unsigned int i_3 = 2; i_3 < 11; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    {
                        var_24 = ((/* implicit */unsigned int) ((((arr_11 [i_3 - 1]) + (9223372036854775807LL))) >> (((/* implicit */int) var_12))));
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((((/* implicit */_Bool) arr_8 [(unsigned short)10] [i_4])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_16 [i_1] [i_3 - 1] [i_3 - 2] [i_4])))))));
                    }
                } 
            } 
        }
        var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned short) arr_5 [5U]))))) ? (((/* implicit */unsigned long long int) var_2)) : ((-(var_14)))))) ? (max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1]))) : ((-(((/* implicit */int) arr_14 [i_1] [(unsigned char)11] [i_1] [i_1] [(unsigned char)11]))))));
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_1])) || (arr_15 [i_1] [i_1] [1LL] [i_1]))) ? (((arr_15 [i_1] [i_1] [i_1] [(_Bool)1]) ? (arr_2 [i_1]) : (arr_2 [i_1]))) : (arr_2 [i_1]))))));
    }
    /* vectorizable */
    for (signed char i_5 = 3; i_5 < 20; i_5 += 2) 
    {
        var_28 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_18 [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)14] [(signed char)14]))) : (arr_1 [i_5 - 3] [i_5]))));
        arr_20 [i_5] [i_5] = ((/* implicit */signed char) ((((arr_1 [i_5] [i_5]) * (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
        arr_21 [i_5] = ((/* implicit */int) var_9);
        /* LoopSeq 2 */
        for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_5] [i_6])) ? (((/* implicit */int) arr_0 [i_5] [i_6])) : (((/* implicit */int) arr_0 [i_5 + 1] [i_6]))));
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 19; i_7 += 3) 
            {
                for (short i_8 = 2; i_8 < 18; i_8 += 1) 
                {
                    {
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) var_7))));
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) arr_18 [i_8 - 2] [i_5 - 3]))));
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_8] [i_5])) ? (arr_25 [i_5] [i_6]) : (((/* implicit */unsigned int) arr_29 [(signed char)0] [(signed char)7] [i_7] [i_8] [i_8]))))) ? (((/* implicit */int) arr_22 [i_5] [i_5])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_7 + 1])))))));
                    }
                } 
            } 
        }
        for (int i_9 = 1; i_9 < 17; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                for (int i_11 = 1; i_11 < 19; i_11 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_12 = 3; i_12 < 20; i_12 += 2) 
                        {
                            var_33 = ((/* implicit */int) ((unsigned int) ((var_0) ? (((/* implicit */unsigned int) arr_2 [i_10])) : (arr_25 [(_Bool)1] [(_Bool)1]))));
                            var_34 = ((/* implicit */unsigned int) arr_39 [i_10]);
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_35 = ((/* implicit */signed char) (-(arr_34 [i_9 - 1] [i_9] [i_10] [i_10])));
                            var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) var_14))));
                        }
                        arr_46 [i_9] [i_9] [i_9] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_9 + 4] [i_11 + 2])) ? (var_7) : (((/* implicit */unsigned long long int) arr_25 [i_5] [i_5]))));
                    }
                } 
            } 
            arr_47 [(_Bool)0] &= ((/* implicit */int) ((unsigned short) arr_37 [(unsigned short)8] [i_9 - 1] [i_9 + 3] [i_5 - 2] [(unsigned short)8]));
            var_37 = ((/* implicit */signed char) arr_24 [i_9 + 3] [i_5 - 3] [i_5]);
        }
        arr_48 [i_5] [i_5] &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [12] [12])) * (((/* implicit */int) arr_0 [(unsigned short)0] [(unsigned short)0]))));
    }
}
