/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203774
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
    for (signed char i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_10 = var_5;
                    arr_9 [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((arr_3 [i_1] [i_1]) + (((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (2101056988194782603ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (max((var_7), (((/* implicit */unsigned long long int) (unsigned char)255))))))));
                    var_11 ^= max((max((max((var_3), (((/* implicit */long long int) arr_7 [i_2] [(_Bool)1] [i_1] [i_0 - 2])))), (arr_6 [i_1 - 1] [i_1 - 1] [i_0 - 1]))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (var_5))) >= (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                    arr_10 [i_1] [(short)3] [i_0] [i_1] = ((/* implicit */int) var_0);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                {
                    var_12 = min(((((((~(((/* implicit */int) (unsigned char)0)))) + (2147483647))) << ((((((~(arr_18 [i_5] [i_5] [i_4] [i_3]))) + (859967909000936391LL))) - (16LL))))), ((~(((/* implicit */int) (_Bool)1)))));
                    arr_19 [i_3] [i_4] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) max(((short)-29868), (((/* implicit */short) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_15 [i_4] [(short)11])))) && ((!(((/* implicit */_Bool) var_7)))))))) : (((((/* implicit */_Bool) arr_11 [i_5] [i_4])) ? (var_3) : ((+(var_5)))))));
                    arr_20 [i_3] [i_3] = ((/* implicit */short) max((((/* implicit */signed char) (!(var_6)))), (var_1)));
                    arr_21 [i_3] [16ULL] [i_3] = ((/* implicit */short) ((((min((arr_16 [i_5] [i_4] [i_3]), (((/* implicit */long long int) var_9)))) >= (-5629092003311775246LL))) ? (((long long int) var_5)) : (((((/* implicit */_Bool) var_9)) ? (var_3) : (min((var_8), (((/* implicit */long long int) var_9))))))));
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) ^ (((((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_5] [(_Bool)1] [(_Bool)1] [i_3])) >> (((5629092003311775246LL) - (5629092003311775222LL)))))) + (((((/* implicit */_Bool) 5629092003311775231LL)) ? (arr_18 [i_3] [i_3] [i_4] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))))));
                }
            } 
        } 
    } 
}
