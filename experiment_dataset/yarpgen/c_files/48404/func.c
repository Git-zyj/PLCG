/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48404
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
    var_12 ^= ((/* implicit */_Bool) max((((((/* implicit */int) var_8)) ^ (((((/* implicit */int) var_10)) >> (((((/* implicit */int) (unsigned char)205)) - (203))))))), (((((/* implicit */int) var_1)) & (((/* implicit */int) var_10))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_4 [4] [i_2 - 2] [i_0]), (arr_4 [i_2 - 1] [i_2 + 1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(short)17] [i_2 + 1] [i_0])))))) : (arr_4 [(unsigned short)9] [i_2 - 3] [i_1])));
                    arr_8 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_3 [i_2 - 2] [1ULL])), (min((arr_5 [i_0]), (((/* implicit */short) var_1)))))))) <= (min((((((/* implicit */_Bool) -5693678550160000660LL)) ? (10922173672369130257ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))))), (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned int) (unsigned char)255)))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) var_4);
}
