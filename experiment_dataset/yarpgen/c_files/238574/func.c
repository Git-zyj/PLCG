/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238574
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
    var_14 = ((/* implicit */unsigned short) ((short) (-(min((var_9), (var_9))))));
    var_15 = ((/* implicit */short) ((_Bool) var_4));
    var_16 |= ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (var_4)))) ? (var_8) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)10))) : (var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_2] |= ((/* implicit */short) (-(var_8)));
                                arr_15 [i_0] = ((/* implicit */short) var_0);
                                arr_16 [i_4] [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */signed char) var_5);
                                var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_0] [i_0 - 1] [22ULL] [i_0 - 1]))))) ^ (arr_2 [i_2])));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_12 [i_0 + 1] [i_0] [i_0 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                            }
                            for (short i_5 = 0; i_5 < 25; i_5 += 3) 
                            {
                                arr_21 [(signed char)18] [i_0] [i_2] [i_2] [(_Bool)1] = ((/* implicit */signed char) ((unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (short)23349))))), (var_0))));
                                var_19 ^= ((/* implicit */int) max((((/* implicit */unsigned int) ((unsigned short) arr_6 [i_0]))), ((~(var_8)))));
                            }
                            var_20 = (i_0 % 2 == zero) ? (((((/* implicit */int) ((unsigned short) ((var_12) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) << (((((long long int) ((unsigned int) arr_8 [i_0] [i_2] [i_1] [i_0]))) - (3409075727LL))))) : (((((/* implicit */int) ((unsigned short) ((var_12) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) << (((((((long long int) ((unsigned int) arr_8 [i_0] [i_2] [i_1] [i_0]))) - (3409075727LL))) + (3399237391LL)))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned long long int i_6 = 2; i_6 < 24; i_6 += 2) 
                            {
                                arr_25 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned char) var_4)));
                                var_21 = ((/* implicit */unsigned char) ((unsigned short) arr_10 [i_0] [i_1] [(_Bool)1] [i_3] [(signed char)11] [i_6]));
                                var_22 |= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_8 [i_0] [i_0] [8] [i_2]))) : (((((/* implicit */_Bool) arr_3 [i_3] [i_6])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                            }
                            for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((((var_5) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) ^ (((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min((((/* implicit */long long int) (short)21109)), (max((((/* implicit */long long int) var_4)), (arr_6 [i_0 - 1]))))))));
                                arr_30 [i_0 - 1] [i_0 - 1] [i_2] [i_0] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) var_11))))))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_25 = ((/* implicit */long long int) max((var_25), (max((((/* implicit */long long int) ((short) max((var_13), (((/* implicit */unsigned long long int) var_2)))))), (arr_6 [i_1])))));
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_22 [i_0] [5ULL] [i_1] [5ULL] [i_8])) : (((/* implicit */int) (signed char)3)))))));
                    var_27 = ((/* implicit */short) arr_5 [i_0 + 1] [i_0] [i_0 + 1]);
                }
                /* vectorizable */
                for (long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    var_28 = ((/* implicit */int) ((short) arr_24 [i_0] [i_1]));
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (arr_31 [i_1] [i_0 + 2] [10U]) : (arr_31 [i_0] [i_0 + 1] [i_0])));
                    arr_36 [15] [i_1] [i_9] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_31 [i_0] [i_0] [i_0 + 2])) : (arr_19 [i_0] [i_0] [(signed char)15] [i_0] [i_9] [i_9] [i_0])));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 3; i_10 < 23; i_10 += 3) 
                    {
                        arr_39 [i_9] [i_0] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_9])) < (((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_10] [i_9] [i_0] [i_1] [i_0])))));
                        arr_40 [i_0] [i_9] [i_0] [i_0] = ((/* implicit */unsigned short) 3544858793U);
                        var_30 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_1] [i_0 - 1] [i_0 - 1] [i_1])) ? (arr_18 [i_1] [i_0 + 2] [i_0 - 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                        var_31 ^= ((/* implicit */short) ((((/* implicit */int) arr_22 [i_10] [i_10] [i_10 - 2] [i_0 + 2] [i_0])) < (((/* implicit */int) var_5))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_1] [i_1]))) ? (((/* implicit */int) arr_41 [i_1] [i_0 - 1])) : ((+(((/* implicit */int) var_1)))))))));
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */int) arr_24 [i_1] [i_0 + 1])) >= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)21))))))))));
                    }
                }
            }
        } 
    } 
}
