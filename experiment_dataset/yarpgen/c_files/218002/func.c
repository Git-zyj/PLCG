/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218002
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */signed char) var_2);
                    var_16 = ((/* implicit */signed char) min((((((/* implicit */int) (!(((/* implicit */_Bool) -3300797744750489111LL))))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(unsigned char)6] [i_1])) || (((/* implicit */_Bool) 3300797744750489110LL))))))), (((/* implicit */int) (unsigned short)25365))));
                    arr_8 [(signed char)14] [i_1] [(signed char)14] [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [7] [(unsigned short)2] [(unsigned char)19] [i_1])))))) ? (((unsigned long long int) (unsigned char)89)) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(unsigned char)8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (var_6)))), ((~(var_12))))) : (((/* implicit */unsigned long long int) ((min((3300797744750489122LL), (((/* implicit */long long int) (unsigned char)153)))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */int) arr_2 [(unsigned char)3] [i_1] [i_1])) : (((/* implicit */int) arr_6 [13ULL] [i_2] [(short)10] [i_2 + 1]))))))))));
                    arr_9 [i_1] [i_1] [0LL] [i_2 + 1] = var_10;
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_14)) : (var_8)));
}
