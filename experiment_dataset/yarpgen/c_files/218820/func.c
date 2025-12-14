/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218820
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_16 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 844424930131968LL))));
                                arr_12 [(unsigned short)8] [(unsigned short)8] [i_3] [i_2] [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] = ((/* implicit */unsigned char) var_6);
                                arr_13 [i_4] [i_4] [(signed char)19] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) >= (((long long int) max((var_10), (((/* implicit */unsigned long long int) arr_6 [i_3] [i_4])))))));
                                arr_14 [i_0] [i_0] [(_Bool)1] [i_3] [i_4] = ((/* implicit */unsigned char) max((var_11), (((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_6)), (var_1)))) : (var_14)))));
                            }
                        } 
                    } 
                    arr_15 [i_0] = ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_10)))));
                    var_17 = ((/* implicit */long long int) ((signed char) ((long long int) arr_10 [i_0] [i_1] [i_2] [i_2])));
                    arr_16 [i_1] = var_8;
                }
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_19 [23LL]))), (((/* implicit */unsigned long long int) ((int) var_10))))) / (((/* implicit */unsigned long long int) min((657412473U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-68)))))))))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_9 = 1; i_9 < 22; i_9 += 3) 
                        {
                            var_19 = ((/* implicit */signed char) (!(arr_17 [i_9 - 1])));
                            arr_31 [i_5] [i_8] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) (_Bool)1))));
                            var_20 = ((/* implicit */unsigned int) arr_18 [18LL]);
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_21 &= ((/* implicit */short) (-(((/* implicit */int) (unsigned short)12))));
                            arr_34 [i_5] [i_6] [(short)15] [i_8] = ((/* implicit */unsigned short) (~(var_9)));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((int) ((unsigned int) (unsigned char)179))))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 25; i_11 += 4) /* same iter space */
                        {
                            arr_37 [i_8] [i_11] [(signed char)18] [i_7] [i_6] [i_6] [i_8] = ((/* implicit */unsigned int) (short)511);
                            var_23 *= ((signed char) ((((/* implicit */_Bool) arr_35 [i_5] [i_6] [i_7] [i_5])) ? (((/* implicit */int) (unsigned short)35155)) : (arr_20 [(short)13] [(short)13] [(unsigned char)20])));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_20 [10LL] [10LL] [i_8]))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 25; i_12 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)511))));
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((var_14) >= (arr_39 [i_12] [i_8] [i_7] [i_6] [(_Bool)1]))))));
                        }
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) ? (844424930131977LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-18))))))));
                    }
                    var_28 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)123)), (((((/* implicit */_Bool) arr_23 [i_5] [i_5])) ? ((~(((/* implicit */int) var_12)))) : ((~(((/* implicit */int) arr_40 [i_5] [2LL] [i_6] [i_6] [(signed char)6]))))))));
                    var_29 += ((/* implicit */int) ((signed char) var_10));
                }
            } 
        } 
    }
    var_30 &= var_6;
}
