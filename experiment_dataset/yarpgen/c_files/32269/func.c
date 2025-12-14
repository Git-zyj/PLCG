/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32269
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
    var_10 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 4; i_4 < 6; i_4 += 1) /* same iter space */
                        {
                            var_11 = ((/* implicit */int) (+(arr_5 [i_2 + 1])));
                            arr_17 [i_0] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) ? (arr_0 [i_2 - 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) var_4))));
                            var_12 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_9)))) : ((~(arr_0 [i_0 - 2] [(signed char)6]))));
                            var_13 += ((/* implicit */int) ((((((((/* implicit */int) arr_2 [i_4])) + (2147483647))) << (((13690069671994308170ULL) - (13690069671994308170ULL))))) > (((/* implicit */int) arr_2 [i_1]))));
                        }
                        for (int i_5 = 4; i_5 < 6; i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_3] [i_3] [i_2] [i_0] [i_3] = ((unsigned char) arr_5 [i_0 - 2]);
                            var_14 = ((/* implicit */_Bool) (+(arr_8 [i_1 - 2] [i_2 - 3] [i_3] [i_3])));
                            arr_21 [i_0] [i_1] [(signed char)8] [i_3] |= ((/* implicit */unsigned short) ((int) ((int) arr_7 [i_2] [i_3] [i_5])));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_6 = 1; i_6 < 6; i_6 += 3) 
                        {
                            arr_26 [8LL] [i_1 - 1] [8LL] [i_0 - 3] [i_6 + 1] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [(_Bool)0])) ? (((/* implicit */int) arr_18 [i_0 - 1] [i_2 - 3])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0] [(_Bool)0] [i_0])))))));
                            var_15 = ((/* implicit */long long int) (+(arr_11 [i_1 - 2] [i_0 - 1])));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_12 [i_0] [i_1 + 1] [i_2] [i_3] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)41))))));
                            arr_29 [4] &= ((/* implicit */unsigned long long int) 2416139656U);
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_2 - 3])) ? (((/* implicit */int) arr_2 [i_2 + 1])) : (((/* implicit */int) arr_2 [i_2 - 1]))));
                            arr_30 [i_0] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_3])) ? (var_8) : (384526268)))) ? (((unsigned long long int) arr_3 [i_7])) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)19893))))));
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((var_8) > (((/* implicit */int) var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) (signed char)10)))))));
                        }
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned char) arr_4 [i_0] [i_0 - 3] [i_0]);
        arr_31 [i_0] = ((/* implicit */int) (_Bool)1);
    }
    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) 
    {
        var_20 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_8] [i_8] [i_8])) / (((/* implicit */int) ((short) min((((/* implicit */unsigned short) arr_15 [6LL] [i_8] [i_8])), (var_1)))))));
        var_21 = ((/* implicit */long long int) var_1);
        /* LoopNest 2 */
        for (unsigned short i_9 = 1; i_9 < 9; i_9 += 3) 
        {
            for (int i_10 = 0; i_10 < 10; i_10 += 1) 
            {
                {
                    arr_42 [i_10] [i_10] [1LL] = ((/* implicit */unsigned long long int) min((((int) arr_16 [i_9] [i_9] [i_10] [i_9])), (arr_39 [i_10] [i_9] [i_9])));
                    arr_43 [i_10] = ((/* implicit */int) max((min((max((((/* implicit */unsigned long long int) var_6)), (8907893280821082247ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_8]))) : (1878827622U)))))), (((/* implicit */unsigned long long int) arr_39 [i_10] [i_9] [i_10]))));
                    /* LoopNest 2 */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        for (long long int i_12 = 0; i_12 < 10; i_12 += 3) 
                        {
                            {
                                arr_50 [i_8] [i_11] [i_10] [i_9] [i_9] = ((/* implicit */long long int) ((min((max((((/* implicit */unsigned long long int) 67106816)), (12211196417894940394ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (-67106804)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_12])))));
                                var_22 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 985377898)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_8] [i_9 - 1])) << (((var_3) - (15732996082151719170ULL)))))) : (((((/* implicit */_Bool) var_1)) ? (var_3) : (var_3)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
