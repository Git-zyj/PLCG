/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247088
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) 13359975512544201020ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)97)) == (((/* implicit */int) (unsigned short)15220)))))) : (arr_6 [i_0] [i_1] [i_2] [i_2]))))));
                    var_13 = ((/* implicit */short) max((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [i_0]))) ^ (arr_3 [i_0] [i_1]))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [i_0])) ? (-226180752) : (((/* implicit */int) arr_1 [i_1])))) < (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-104))))))))));
                    var_14 -= ((/* implicit */unsigned long long int) ((short) var_4));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) var_11);
}
