/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233375
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
    var_13 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-1))));
    var_14 = ((/* implicit */unsigned short) var_10);
    var_15 *= ((/* implicit */_Bool) var_5);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((short)0), ((short)-9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_11))))) : (min((((/* implicit */unsigned long long int) (short)26)), (min((((/* implicit */unsigned long long int) var_0)), (arr_2 [i_0])))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-29)) ? (((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (arr_1 [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
    }
    for (int i_1 = 2; i_1 < 21; i_1 += 2) 
    {
        var_18 *= ((((/* implicit */int) min((((/* implicit */signed char) arr_3 [i_1 + 3])), (var_3)))) >= (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 + 3])) <= (((/* implicit */int) arr_3 [i_1]))))));
        var_19 = max((((/* implicit */long long int) (short)1)), (((8399009894575532917LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)67))))));
        var_20 = ((/* implicit */unsigned char) min(((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [i_1 + 2])))), (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
        arr_5 [(_Bool)1] [(short)18] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) & (min((((/* implicit */long long int) 16380U)), (-8399009894575532917LL)))));
    }
    for (unsigned short i_2 = 1; i_2 < 9; i_2 += 1) 
    {
        var_21 ^= ((/* implicit */short) ((((/* implicit */int) var_6)) >= (0)));
        /* LoopNest 2 */
        for (unsigned char i_3 = 4; i_3 < 10; i_3 += 2) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_5 = 2; i_5 < 9; i_5 += 1) 
                    {
                        arr_15 [i_2] [(_Bool)0] [(_Bool)1] [i_2] = ((/* implicit */_Bool) var_4);
                        var_22 = ((/* implicit */unsigned char) var_9);
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (484393133U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                        arr_16 [i_2] [i_3] [i_4] [i_2 + 2] [i_2] = ((/* implicit */long long int) var_2);
                    }
                    var_24 = ((var_4) >= (((/* implicit */int) min((((/* implicit */short) arr_14 [i_4 - 1] [i_2 + 2] [i_4 - 1])), ((short)-20)))));
                    var_25 = ((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) arr_4 [i_2]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_6 = 3; i_6 < 7; i_6 += 1) 
        {
            for (unsigned int i_7 = 4; i_7 < 10; i_7 += 1) 
            {
                {
                    var_26 = ((/* implicit */_Bool) min((var_26), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (((/* implicit */int) arr_4 [i_7]))))) ? (((((/* implicit */int) (short)28)) | (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_6)))))))));
                    var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
                    /* LoopNest 2 */
                    for (short i_8 = 1; i_8 < 8; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 3; i_9 < 10; i_9 += 2) 
                        {
                            {
                                arr_28 [i_2] [i_2] [i_7] [i_7] [i_7] = ((/* implicit */long long int) -339484067);
                                var_28 = ((/* implicit */int) arr_14 [i_7] [i_8] [i_9]);
                                var_29 *= ((/* implicit */unsigned char) arr_6 [(unsigned short)4]);
                                var_30 = ((/* implicit */short) (+(arr_27 [i_2] [i_2] [i_2] [i_2] [i_2 + 1])));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */int) (short)0);
                }
            } 
        } 
    }
    var_32 |= ((/* implicit */_Bool) (short)-1);
}
