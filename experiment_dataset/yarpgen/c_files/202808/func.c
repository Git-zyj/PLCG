/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202808
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_13 *= ((/* implicit */unsigned int) ((var_9) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned char)22] [i_0 + 3])))));
        var_14 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [(_Bool)1] [21ULL])) : (((/* implicit */int) arr_1 [9LL]))))) ? (((((/* implicit */_Bool) arr_0 [20ULL] [1ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1] [(unsigned char)10])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 23; i_2 += 3) 
        {
            for (unsigned char i_3 = 2; i_3 < 23; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        arr_13 [11U] [i_2] [i_2] [(unsigned char)11] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((max((arr_11 [24ULL] [i_2] [(_Bool)1] [1LL] [(signed char)0]), (((/* implicit */long long int) arr_6 [6U])))) > ((-(var_9))))))) + ((-(-7427510840333899785LL)))));
                        var_15 = ((/* implicit */short) (+(((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) var_1))))) ? (arr_11 [(short)3] [i_2] [(_Bool)1] [18U] [(_Bool)1]) : (var_3)))));
                        arr_14 [i_2] [(short)20] [(short)4] [(unsigned char)14] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [5LL] [(signed char)3] [(unsigned char)1] [i_2])) || (((/* implicit */_Bool) arr_4 [21U]))));
                    }
                    arr_15 [21ULL] [(signed char)5] [i_2] = ((/* implicit */signed char) arr_7 [(unsigned char)16] [13ULL]);
                    arr_16 [i_2] [(short)9] [(signed char)18] [8LL] = ((/* implicit */unsigned long long int) ((unsigned char) arr_5 [(signed char)13]));
                    arr_17 [i_1] &= ((/* implicit */short) (~(((/* implicit */int) ((_Bool) arr_4 [i_3 + 1])))));
                }
            } 
        } 
        var_16 ^= ((/* implicit */short) arr_10 [(signed char)16] [6LL] [(signed char)10] [i_1]);
        var_17 = ((/* implicit */_Bool) arr_10 [2U] [(short)12] [16LL] [i_1]);
        arr_18 [23ULL] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((arr_10 [18U] [2ULL] [(signed char)10] [i_1]) << (((var_8) - (3165315111041963365LL)))))) ? (((arr_6 [13U]) ? (arr_7 [(short)0] [(unsigned char)20]) : (((/* implicit */unsigned long long int) arr_11 [(_Bool)1] [i_1] [(short)4] [(_Bool)1] [(short)6])))) : (max((((/* implicit */unsigned long long int) var_8)), (arr_7 [(short)22] [(short)21]))))), (((/* implicit */unsigned long long int) ((min((7427510840333899790LL), (((/* implicit */long long int) (short)16368)))) >> (((((/* implicit */int) var_0)) + (13364))))))));
    }
    var_18 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((var_10) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? (min((var_2), (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) < (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))));
    var_19 = ((/* implicit */long long int) ((short) ((((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_4))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 7427510840333899790LL)), (330784963809160752ULL)));
}
