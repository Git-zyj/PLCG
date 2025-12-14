/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49376
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
    var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned short) var_9)), (var_0)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 2; i_3 < 7; i_3 += 4) 
                    {
                        var_17 += ((/* implicit */signed char) arr_2 [i_0]);
                        var_18 &= ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)34))));
                        arr_12 [i_1] [i_1 - 1] = ((/* implicit */long long int) arr_11 [i_0] [i_1 + 1] [i_1 + 1] [i_0]);
                        arr_13 [i_0] [i_1] [(signed char)6] [i_3 + 1] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */int) (unsigned char)69)) : (2147483647)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_2] [i_3 - 1]))))) : (((arr_7 [i_0] [i_2]) & (arr_7 [i_0] [i_0])))));
                        var_19 = ((/* implicit */_Bool) ((((((int) arr_7 [i_2] [i_2])) != (((/* implicit */int) ((_Bool) 2951751782481676776LL))))) ? (((((/* implicit */_Bool) -7LL)) ? (((/* implicit */int) ((arr_3 [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_0]))))))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 4) 
                    {
                        var_20 *= var_11;
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((long long int) max((((/* implicit */long long int) var_12)), ((~(-4LL)))))))));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1] [i_1 + 2]))));
                        var_23 = ((/* implicit */long long int) (+((~(((/* implicit */int) arr_0 [i_0] [i_0]))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (-(((((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) 7LL)))) ? (((/* implicit */int) min((arr_10 [i_6]), (arr_18 [i_0] [(unsigned short)0] [i_6] [(signed char)0] [10LL])))) : (((/* implicit */int) arr_18 [i_1 - 1] [i_1 - 1] [i_6] [(signed char)0] [i_1 - 1])))))))));
                        arr_22 [i_1 + 2] [i_1] = ((/* implicit */signed char) arr_21 [i_2] [i_6]);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 4; i_7 < 10; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            {
                                var_25 |= ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)49))) + (((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_7] [i_2] [i_8] [i_8] [i_7 - 3]))) / (-7LL))))), (((/* implicit */long long int) ((short) ((_Bool) var_9))))));
                                var_26 += ((/* implicit */signed char) max(((~(((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_0]))))))), ((((!((_Bool)0))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) || (((/* implicit */_Bool) var_10))))) : ((-(((/* implicit */int) arr_14 [i_0] [i_8] [i_2] [i_0] [i_8] [i_2]))))))));
                                var_27 -= ((/* implicit */long long int) ((((((/* implicit */int) max((((/* implicit */signed char) var_9)), (arr_24 [i_0] [i_1] [i_7 - 1] [i_8])))) >> (((((/* implicit */int) ((unsigned short) var_7))) - (47133))))) ^ ((-(((/* implicit */int) arr_18 [i_8] [i_7 - 4] [i_8] [i_1] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */long long int) ((signed char) var_11));
    var_29 = (-(((/* implicit */int) ((max((((/* implicit */long long int) (_Bool)0)), (11LL))) >= (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
}
