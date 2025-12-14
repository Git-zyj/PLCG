/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48395
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
    var_20 = ((/* implicit */unsigned long long int) 24U);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((var_1) >> (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (arr_1 [i_0]))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_22 |= ((/* implicit */long long int) var_7);
                        var_23 = ((/* implicit */_Bool) (-((+(24U)))));
                    }
                } 
            } 
        } 
        arr_10 [i_0] = arr_0 [i_0];
    }
    for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 1; i_6 < 17; i_6 += 4) 
            {
                for (unsigned short i_7 = 1; i_7 < 18; i_7 += 2) 
                {
                    {
                        var_24 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) var_14)))));
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) 6787821586542386980ULL))));
                    }
                } 
            } 
            var_26 -= ((/* implicit */unsigned short) var_2);
        }
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18350397795425500476ULL)) ? ((-(((/* implicit */int) arr_18 [i_4 + 1] [i_4 - 2] [i_4] [i_4])))) : (((/* implicit */int) arr_15 [i_4 + 1]))));
    }
    var_28 = ((/* implicit */short) var_13);
    var_29 = ((/* implicit */unsigned short) var_13);
}
