/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40403
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [(_Bool)1] &= ((/* implicit */signed char) min((var_9), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (unsigned char)133))))), (1248150663U))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        var_10 = ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_2] [i_3]))) : (-8772695613134447352LL)));
                        var_11 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) (unsigned short)18701)), (arr_2 [i_1 - 1] [i_2 + 1])))));
                    }
                    for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 4) 
                    {
                        arr_13 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1498932974139123810LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 2] [i_2 - 1] [i_4 + 1]))) : (max((arr_9 [i_0] [i_0] [i_2] [i_0] [i_4]), (3538781053U)))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1 - 2] [i_2 + 1] [i_2 - 1])) & (((/* implicit */int) arr_4 [i_1 - 2] [i_2 - 1] [i_2 - 1]))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))) ? (-8884473360144851984LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                        var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned char)0] [i_2] [i_2]))) : (var_5)))) ? (min((4838951248060287803LL), (((/* implicit */long long int) 433412740U)))) : (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_4] [i_4 + 1]))))));
                        var_13 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((var_9) | (var_9)))) ? (var_5) : (((unsigned long long int) var_2))))));
                        var_14 = ((/* implicit */unsigned char) ((((min((((/* implicit */int) min(((signed char)(-127 - 1)), (((/* implicit */signed char) var_4))))), (arr_0 [i_0] [i_0]))) + (2147483647))) << (((var_9) - (2534128621562886591LL)))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((int) (((!(((/* implicit */_Bool) 8884473360144851995LL)))) ? (((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */int) (short)16368)))) : (var_0)))))));
                        var_16 = ((/* implicit */unsigned char) arr_10 [i_0] [i_1] [i_0] [i_1] [i_5] [i_5]);
                        var_17 = ((/* implicit */int) arr_11 [i_0] [i_1 - 2] [i_2] [i_5]);
                    }
                    for (short i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        arr_19 [i_2] [i_2] [i_2] [i_2] [(signed char)15] [i_6] = ((/* implicit */int) min((((/* implicit */long long int) (unsigned short)62687)), (var_9)));
                        var_18 = ((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_17 [i_0] [i_1] [i_0] [i_2] [i_2])), (arr_5 [i_0] [i_1 - 1] [i_2]))))));
                    }
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (+(((/* implicit */int) var_4)))))) || (((/* implicit */_Bool) ((unsigned int) arr_6 [i_1])))));
                    var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_1] [i_2])))));
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */unsigned int) ((long long int) (~(0ULL))));
}
