/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227882
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
    var_13 = ((/* implicit */long long int) var_11);
    var_14 = ((/* implicit */long long int) var_1);
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_15 *= ((/* implicit */short) (~(arr_0 [8ULL])));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_8)) ? ((((_Bool)1) ? (-6799943963690691631LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (arr_0 [(unsigned char)0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [10U])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_0 [16U]))))))))))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) arr_1 [i_0])), ((short)9)))) - (((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)58))))))) ? (min((max((var_8), (arr_0 [i_0]))), (max((arr_0 [i_0]), (((/* implicit */long long int) var_9)))))) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_18 *= ((/* implicit */unsigned int) arr_3 [i_1] [i_1]);
        var_19 = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) var_12)) != (((/* implicit */int) (unsigned char)175)))));
        var_20 = ((/* implicit */int) var_8);
        arr_5 [(signed char)4] [(signed char)4] = ((/* implicit */int) arr_1 [(unsigned short)9]);
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (unsigned char)184))));
    }
    for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        var_22 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_2]))))))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 1; i_3 < 11; i_3 += 1) 
        {
            for (unsigned int i_4 = 2; i_4 < 11; i_4 += 1) 
            {
                {
                    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_3))))))));
                    arr_13 [i_2] [i_2] [i_3 - 1] [i_4] = ((/* implicit */signed char) max(((+(((/* implicit */int) var_12)))), (((/* implicit */int) min((arr_1 [i_3 + 1]), (arr_12 [i_3 + 1] [i_3 + 1]))))));
                    var_24 = min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_3 + 1] [i_4])) ? (((/* implicit */int) arr_4 [i_3 + 1] [i_4 - 1])) : (((/* implicit */int) arr_4 [i_3 - 1] [i_4 + 1]))))), (arr_7 [i_2] [i_3]));
                    var_25 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_10 [(signed char)9])), (arr_9 [i_2] [i_2] [i_4 - 1])));
                }
            } 
        } 
        arr_14 [i_2] = ((/* implicit */_Bool) arr_0 [6]);
        var_26 = (+((~(((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_2]))))))));
    }
    for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 4) 
    {
        var_27 = ((((/* implicit */_Bool) arr_10 [i_5 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5 - 1]))) != (var_10))))) : (max((var_4), (((/* implicit */long long int) arr_10 [i_5 - 1])))));
        var_28 = ((/* implicit */signed char) ((((/* implicit */long long int) min((max((((/* implicit */int) (short)8192)), (arr_8 [i_5] [10LL]))), (((/* implicit */int) min((((/* implicit */signed char) arr_4 [i_5] [i_5])), ((signed char)6))))))) > (var_10)));
        var_29 += ((/* implicit */signed char) ((long long int) min((arr_8 [i_5 - 3] [i_5 - 1]), (((/* implicit */int) arr_2 [i_5 - 3])))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_6 = 1; i_6 < 9; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_7 = 3; i_7 < 9; i_7 += 3) 
        {
            for (signed char i_8 = 1; i_8 < 8; i_8 += 3) 
            {
                for (int i_9 = 2; i_9 < 9; i_9 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) 
                        {
                            var_30 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_7] [i_7 - 1])) ? (arr_8 [i_6] [i_7 - 2]) : (arr_8 [i_7] [i_7 + 1])));
                            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) (unsigned char)175))));
                        }
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            arr_31 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) (~(var_6)));
                            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) arr_19 [i_6 + 1]))));
                            var_33 = ((/* implicit */long long int) arr_3 [(signed char)12] [i_6 + 1]);
                        }
                        for (int i_12 = 0; i_12 < 11; i_12 += 4) 
                        {
                            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_7] [10ULL]))))) > (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)200)) / (arr_33 [i_6] [0] [i_8 + 2] [i_9])))))))));
                            arr_34 [i_7] [i_7] [i_8 + 3] [i_9 - 2] [i_12] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_8])) ? (((/* implicit */long long int) var_9)) : (var_4)))));
                            arr_35 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) (unsigned char)184)) ? (arr_20 [(signed char)9]) : (((/* implicit */long long int) var_6))))));
                            var_35 = ((/* implicit */unsigned int) (+(arr_28 [i_12] [(unsigned char)0] [i_12] [i_7 + 2] [i_7 - 3] [i_7] [i_7 + 2])));
                        }
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_6 - 1] [i_7 + 2] [i_9 + 2] [i_6 - 1] [i_9 - 1])) ? (((/* implicit */int) arr_32 [i_6 + 2] [i_7 - 1] [i_9 - 1] [(_Bool)1] [i_9 + 1])) : (((/* implicit */int) arr_32 [i_6 + 2] [i_7 - 2] [i_9 + 2] [(unsigned char)7] [(unsigned short)6]))));
                    }
                } 
            } 
        } 
        var_37 = ((/* implicit */_Bool) arr_12 [i_6] [i_6]);
        var_38 = ((/* implicit */unsigned char) max((var_38), (var_0)));
    }
}
