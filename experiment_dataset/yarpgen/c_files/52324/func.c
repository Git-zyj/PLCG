/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52324
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
    var_10 = ((/* implicit */long long int) min((((var_9) ? ((~(var_1))) : (((/* implicit */int) var_2)))), ((-((+(((/* implicit */int) var_4))))))));
    var_11 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned short)27856))))))) ? ((((+(var_8))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29382))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */int) var_2))))) ? (((var_7) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))) : (max((((/* implicit */int) var_7)), (var_0))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_6 [(short)8] = ((/* implicit */long long int) (_Bool)0);
            arr_7 [7U] [i_1] [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)16128))))) ? (((/* implicit */int) (short)-31125)) : ((+(var_0)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                arr_12 [(_Bool)1] [i_1] [(signed char)0] [3] = ((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) (short)29500))))) < ((-(arr_3 [i_0])))));
                arr_13 [i_0] = ((/* implicit */unsigned int) (unsigned char)31);
                var_12 = ((/* implicit */signed char) ((unsigned char) ((var_0) + (((/* implicit */int) var_6)))));
            }
        }
        for (short i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            var_13 = arr_2 [i_0];
            arr_16 [i_3] [i_0] = ((/* implicit */long long int) var_4);
            arr_17 [i_0] = ((/* implicit */unsigned char) var_9);
            var_14 |= ((/* implicit */unsigned char) var_7);
            /* LoopNest 2 */
            for (int i_4 = 4; i_4 < 8; i_4 += 3) 
            {
                for (signed char i_5 = 1; i_5 < 9; i_5 += 3) 
                {
                    {
                        arr_24 [(signed char)6] [(_Bool)1] &= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((arr_8 [i_0]) ? (var_3) : (((/* implicit */int) (short)13483))))) + (((((/* implicit */_Bool) arr_21 [i_5] [i_5] [5] [i_5])) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) var_1))))))) ? (((((/* implicit */_Bool) ((unsigned char) (unsigned char)237))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_7)), ((unsigned char)225))))))) : ((~(arr_5 [i_4 - 1]))));
                        arr_25 [i_5] [i_4 + 1] [i_3] [(_Bool)1] [5U] = ((/* implicit */unsigned int) ((((var_2) ? (((/* implicit */int) (!(arr_22 [i_0] [i_3] [i_4])))) : (((/* implicit */int) ((_Bool) arr_18 [i_0] [i_0] [(_Bool)1] [4]))))) < (((((/* implicit */int) var_6)) / (arr_4 [i_0] [i_3] [6U])))));
                    }
                } 
            } 
        }
        for (long long int i_6 = 3; i_6 < 9; i_6 += 4) 
        {
            var_15 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [9]))))) ? (((/* implicit */int) ((signed char) arr_14 [i_0] [i_6] [i_6 - 2]))) : (((/* implicit */int) min((arr_1 [i_0] [i_6 - 2]), (arr_1 [i_0] [i_0])))));
            var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (signed char i_7 = 3; i_7 < 9; i_7 += 4) 
            {
                for (int i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    {
                        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(arr_15 [i_6 + 1] [i_6 - 1] [i_6 - 3]))))));
                        var_18 |= ((/* implicit */signed char) (((-(-746123103))) < ((((~(var_0))) * (((/* implicit */int) ((signed char) arr_30 [i_0] [i_6] [i_7])))))));
                    }
                } 
            } 
        }
        arr_34 [(signed char)3] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) >= (14562331245449308484ULL)))), (((var_3) & (((/* implicit */int) var_9))))));
    }
    for (int i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
    {
        arr_37 [i_9] = ((/* implicit */short) ((var_9) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2047)), (arr_36 [i_9]))))))) : (((/* implicit */int) (!(var_2))))));
        var_19 *= ((/* implicit */signed char) ((long long int) ((long long int) (unsigned char)37)));
        arr_38 [i_9] [i_9] = ((/* implicit */int) var_7);
        var_20 &= ((/* implicit */int) var_5);
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) <= (max((((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) (short)-13483)) : (0))), (((/* implicit */int) var_9))))));
}
