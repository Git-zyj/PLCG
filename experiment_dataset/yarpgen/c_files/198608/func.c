/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198608
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -249599643)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_8 [i_2] [i_1] [i_3]))))) ? (((/* implicit */int) arr_8 [(unsigned short)6] [i_2] [i_1])) : (((/* implicit */int) arr_8 [i_0] [i_2] [i_3]))));
                        var_15 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) 460281801037625660LL)) ? (arr_7 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [i_2] [(unsigned short)7]))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned char) arr_8 [i_0] [(short)15] [i_0]);
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_4] [i_1])) >> (((-460281801037625661LL) + (460281801037625663LL)))));
                    }
                    /* vectorizable */
                    for (short i_5 = 1; i_5 < 20; i_5 += 2) 
                    {
                        arr_16 [i_2] [6ULL] [i_2] [i_5] [i_2] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_5 + 1] [i_5 + 1] [i_1] [i_0] [i_5] [i_0]))));
                        var_17 = ((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_2] [(unsigned char)21]);
                    }
                    for (unsigned short i_6 = 1; i_6 < 22; i_6 += 1) 
                    {
                        arr_21 [i_0] [i_6] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_2] [i_1] [i_2]))))))));
                        arr_22 [i_6] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_14 [i_0] [i_0])), (arr_5 [i_0] [i_0])))) : (((/* implicit */int) max((arr_15 [i_0] [i_1] [i_1] [i_6] [i_1]), (((/* implicit */unsigned char) arr_12 [(unsigned short)19] [i_1] [i_1] [i_2] [i_2] [i_6])))))))), (max((((/* implicit */unsigned long long int) -249599643)), (max((((/* implicit */unsigned long long int) arr_19 [i_0] [(unsigned char)1] [i_0] [i_0])), (14887411021538807027ULL)))))));
                        var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (460281801037625660LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_2]))))) >= (((/* implicit */long long int) ((/* implicit */int) ((5087276180676515979LL) != (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))))))));
                    }
                    arr_23 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
}
