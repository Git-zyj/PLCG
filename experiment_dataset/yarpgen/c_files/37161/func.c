/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37161
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        arr_9 [i_0 + 4] [i_1] [i_1] [i_2] [i_3 + 1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 3567772450U)) | (var_11)));
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */long long int) 3567772427U)) >= ((~(arr_5 [i_2] [i_1] [i_2])))))), ((+((-(((/* implicit */int) (unsigned char)102)))))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 19; i_4 += 4) 
                    {
                        arr_12 [i_1] [i_4 + 2] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) << (((/* implicit */int) arr_7 [i_0 + 4] [i_1]))));
                        arr_13 [i_1] = ((/* implicit */long long int) (~(((727194863U) & (((/* implicit */unsigned int) -1064018713))))));
                    }
                    for (unsigned int i_5 = 3; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2387779877287448660LL)) ? (((/* implicit */int) arr_2 [(signed char)0] [i_0 + 4] [i_5 + 1])) : (((/* implicit */int) arr_2 [(_Bool)1] [i_0 + 4] [i_5 + 1]))))) ? (2231206926781504933ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_4)))))))));
                        arr_16 [i_1] [i_1] [i_1] = ((/* implicit */short) ((1023ULL) / (((/* implicit */unsigned long long int) 3567772428U))));
                    }
                    for (unsigned int i_6 = 3; i_6 < 20; i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_1] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */short) (~(-2387779877287448663LL)));
                        arr_21 [i_0] [i_0] [i_1] [i_1] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [15ULL] [i_0 + 3])) ? (((/* implicit */int) (unsigned short)56750)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 1])) || (((/* implicit */_Bool) 2052762173U)))))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_1 [i_2]))) ? (((((/* implicit */_Bool) (unsigned char)89)) ? (((/* implicit */unsigned int) arr_17 [i_1] [i_2] [i_1])) : (arr_10 [i_0] [i_1] [i_0]))) : (((/* implicit */unsigned int) (~(arr_17 [i_0 + 2] [i_0] [i_1])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_13) >> (((5221568650515373966LL) - (5221568650515373948LL)))))) && (((/* implicit */_Bool) var_1))))))));
                        var_17 ^= ((/* implicit */long long int) (-((~(((arr_3 [i_0]) * (var_9)))))));
                    }
                    arr_22 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_8 [i_0] [i_1] [i_1] [i_0] [i_2] [i_2]))) ? ((+(-2387779877287448663LL))) : ((-(6645914942789039269LL))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((1024ULL) / (17669376945077727540ULL))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 8388608U)) ? (((/* implicit */long long int) 19U)) : (-2387779877287448660LL))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775779LL)) || (((/* implicit */_Bool) (unsigned char)149)))))))))));
    var_19 = ((min((var_9), (((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)54))))))) <= (((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) - (((/* implicit */int) var_14)))) / (((/* implicit */int) var_0))))));
}
