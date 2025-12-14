/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32466
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        var_21 = ((/* implicit */unsigned long long int) (unsigned short)29119);
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [(signed char)2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((long long int) var_1)))) ? (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) arr_2 [i_1] [i_1])) == (((/* implicit */int) arr_0 [i_1]))))), (min((((/* implicit */short) arr_4 [(short)10])), ((short)-1)))))) : (((/* implicit */int) (_Bool)1))));
        var_22 = ((/* implicit */long long int) (unsigned short)45740);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4063232LL)) ? ((+(((/* implicit */int) var_17)))) : (((/* implicit */int) (short)10))));
        arr_9 [i_2] = ((/* implicit */long long int) (~(3820818848U)));
    }
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            {
                arr_14 [i_4] [i_3] [i_3] = (signed char)-11;
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4611686018427387903LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (((unsigned int) arr_12 [(signed char)3]))));
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_3))) & (((/* implicit */int) ((signed char) var_14)))))) ? (((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) var_11)) : ((~(((/* implicit */int) var_7)))))) : ((+(((/* implicit */int) arr_12 [i_3]))))));
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (var_14)))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) min((var_5), (((/* implicit */unsigned short) arr_12 [i_3])))))))), (max((((arr_13 [i_4]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16))))), (min((((/* implicit */unsigned long long int) var_16)), (arr_13 [i_3]))))))))));
            }
        } 
    } 
}
