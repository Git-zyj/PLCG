/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238211
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
    var_15 = ((/* implicit */long long int) var_0);
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (~(((var_0) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
    var_17 = ((/* implicit */unsigned long long int) 3806394782U);
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~(arr_0 [i_0 - 1]))))));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */long long int) arr_8 [i_0]))))))));
                    var_20 = ((/* implicit */_Bool) ((488572515U) - (488572514U)));
                }
                arr_10 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_7 [i_0 + 1] [i_1 - 1]) : (arr_7 [i_0] [(unsigned short)12])))) ? (((long long int) (unsigned short)12855)) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((1125898833100800LL) - (1125898833100786LL))))))))) : ((~(((unsigned long long int) arr_7 [i_0] [(unsigned char)15]))))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_1 [i_1 - 1] [i_0 - 2]))));
            }
        } 
    } 
}
