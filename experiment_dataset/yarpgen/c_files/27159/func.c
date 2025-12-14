/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27159
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    var_16 ^= (~(((((/* implicit */_Bool) arr_5 [i_1] [i_2 - 2] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_1] [i_2 - 2] [i_1])))));
                    var_17 ^= ((((/* implicit */int) arr_5 [i_1] [i_2 - 2] [i_1])) ^ (((((/* implicit */_Bool) 16881953909184111760ULL)) ? (((/* implicit */int) arr_5 [i_1] [i_2 + 1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_2 - 1] [i_1])))));
                    var_18 = ((/* implicit */int) max((1564790164525439860ULL), (((/* implicit */unsigned long long int) ((unsigned char) arr_7 [i_0] [(unsigned char)8] [i_0] [i_1 + 1])))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 7; i_3 += 1) 
                    {
                        arr_11 [(unsigned short)0] [i_1] [i_2] [i_1 + 1] [i_1] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1 + 1] [i_2 + 1] [i_3 + 1])) ? (((/* implicit */unsigned long long int) (+(var_15)))) : (1564790164525439856ULL)));
                        var_19 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */long long int) (~(var_2)))) : (((((/* implicit */_Bool) 6310708388239899166ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29072))) : (-6688080961611735916LL))));
                    }
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_2 [(unsigned short)2] [i_2 - 2])) ? (((/* implicit */int) arr_15 [i_0] [i_2 - 2] [i_0] [i_1 - 1] [i_2 - 2] [(signed char)2])) : (arr_2 [i_1] [i_2 - 2]))), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(signed char)8] [i_2 - 2])) && (((/* implicit */_Bool) arr_15 [i_0] [i_2 - 2] [i_0] [i_1 - 1] [i_4] [(unsigned short)3])))))));
                        arr_16 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [(signed char)3] [i_0])) ? (((((/* implicit */int) (unsigned short)36464)) + (((/* implicit */int) min((((/* implicit */short) arr_4 [i_0] [i_1 - 1] [i_2])), ((short)6069)))))) : (max((arr_2 [i_0] [i_1]), (((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (unsigned short)17234))))))));
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((-6688080961611735916LL) + (9223372036854775807LL))) << (((/* implicit */int) ((((/* implicit */_Bool) 7558975780193461697ULL)) || (((/* implicit */_Bool) min((7558975780193461676ULL), (((/* implicit */unsigned long long int) (unsigned short)36463)))))))))))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (-(290519911)));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_5))))) < (((((/* implicit */_Bool) -290519912)) ? (((/* implicit */unsigned long long int) var_15)) : (12355722638080295293ULL)))))) + (((((/* implicit */int) var_9)) + (((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) var_14))))))));
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) 16698974617833741157ULL)))))))));
}
