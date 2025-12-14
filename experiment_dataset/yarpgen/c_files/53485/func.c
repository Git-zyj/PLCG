/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53485
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */int) arr_7 [9] [i_3] [i_2] [(unsigned char)7] [i_1] [i_0 + 1]);
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_2 + 1]))))) ^ (min((((/* implicit */unsigned long long int) arr_4 [i_2 + 1])), (arr_3 [i_1 - 3] [i_1 - 3])))));
                        var_15 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_0 [i_0] [1]), (((/* implicit */unsigned short) arr_8 [1ULL] [1ULL] [i_1 - 2] [i_2 - 1] [i_1 - 2])))))));
                    }
                    for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        var_16 *= max((((/* implicit */unsigned int) (unsigned char)9)), ((-(arr_7 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_1 - 2] [i_1 - 1] [i_2 + 2]))));
                        var_17 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (short)-128)) ? (405387201561743370LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_5 [(signed char)8] [(unsigned short)5] [4ULL] [i_4])))))), (((/* implicit */long long int) (+((+(182656657))))))));
                        var_18 = ((/* implicit */short) ((int) ((((/* implicit */int) arr_5 [i_1] [(_Bool)1] [i_1] [i_1 - 3])) > (((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_1 - 3])))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 2; i_5 < 7; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((14933295989287108574ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)128))))))));
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((1073741824U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)117))))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) arr_8 [i_2] [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2])))), (((/* implicit */int) max(((short)128), ((short)-128))))));
                        var_22 += ((/* implicit */short) ((((((/* implicit */_Bool) (short)119)) ? (((/* implicit */int) (_Bool)1)) : (1998499253))) % (((((/* implicit */int) arr_9 [i_1 - 2])) * (((/* implicit */int) (short)12284))))));
                    }
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_15 [i_0]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
    {
        for (unsigned int i_8 = 1; i_8 < 20; i_8 += 3) 
        {
            {
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) min((min((arr_21 [i_8 + 1]), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) ((_Bool) 16125007380464031938ULL))))))));
                arr_23 [i_8] [i_8] &= ((/* implicit */short) max((((/* implicit */long long int) ((unsigned char) arr_20 [i_8 + 2] [i_8]))), ((+(var_2)))));
                arr_24 [i_7] [i_8 + 2] [i_7] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_20 [7LL] [i_8 + 1])) ? ((+(((/* implicit */int) (short)128)))) : (-2135541482))) - (max((1998499253), (((int) 9014537608785556796LL))))));
                arr_25 [i_7] [i_8 + 3] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)21))))), (((((/* implicit */_Bool) arr_18 [i_8 + 3] [i_8 + 3])) ? (((/* implicit */unsigned int) -2079583188)) : (arr_18 [i_8 + 2] [i_7])))));
            }
        } 
    } 
}
