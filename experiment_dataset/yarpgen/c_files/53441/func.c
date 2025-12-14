/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53441
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) (((~(max((arr_6 [i_0]), (((/* implicit */unsigned long long int) var_8)))))) & (((/* implicit */unsigned long long int) (-(min((var_0), (var_9))))))));
                    arr_8 [(unsigned short)6] [i_0] [i_1] [(unsigned char)10] = 9223372036854775807LL;
                    arr_9 [i_1] [i_0] = max(((+(arr_5 [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_0 - 1]))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) max((var_8), (var_0)));
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((3151283801047839894ULL), (((/* implicit */unsigned long long int) (short)-27292))))) ? (((((/* implicit */int) (signed char)43)) | (var_1))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)27291)) : (((/* implicit */int) (short)27303))))))) ? (var_3) : (((/* implicit */long long int) ((((((/* implicit */int) var_4)) + (2147483647))) << (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (-16))) - (8977))))))));
    var_15 ^= ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-32)) ? (var_10) : (((/* implicit */unsigned int) var_1)))) == (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) : (var_8));
}
