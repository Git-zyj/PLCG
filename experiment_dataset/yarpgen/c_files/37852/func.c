/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37852
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
    var_16 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12))) : (14528891953161547039ULL))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) (signed char)7))))) ? (((((-1841444446053970198LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)177)) - (177))))) : (min((8894073038579680869LL), (((/* implicit */long long int) var_11)))))) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [(unsigned char)11])))));
                    var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (signed char)36))) ? (((((/* implicit */_Bool) var_13)) ? (arr_2 [i_2] [i_1]) : (arr_2 [i_1] [i_2]))) : (((((/* implicit */_Bool) (signed char)78)) ? (arr_2 [i_0] [i_2]) : (arr_2 [(unsigned char)0] [i_2])))));
                }
            } 
        } 
    } 
}
