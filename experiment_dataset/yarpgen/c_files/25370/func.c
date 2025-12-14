/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25370
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
        arr_4 [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    {
                        var_12 = ((/* implicit */long long int) ((((/* implicit */int) (short)-18713)) / (((/* implicit */int) var_3))));
                        var_13 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((var_7) * (var_8)))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_1])) ? (1090301736U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
        var_15 = (+(arr_8 [i_1] [i_1] [i_1]));
        var_16 = ((/* implicit */unsigned int) (~((+(var_5)))));
    }
    var_17 = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_1)))) & (((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (var_2) : (var_7))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
}
