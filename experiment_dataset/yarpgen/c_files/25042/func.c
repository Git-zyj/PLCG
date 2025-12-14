/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25042
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
    for (signed char i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        var_12 = var_9;
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((var_5) ? (((/* implicit */int) arr_2 [i_0 - 3])) : (((/* implicit */int) max((var_3), (max((((/* implicit */unsigned char) arr_2 [i_0])), (var_3)))))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (short i_4 = 1; i_4 < 23; i_4 += 2) 
                {
                    {
                        arr_13 [i_1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) -7092691443898233982LL);
                        var_14 = ((/* implicit */signed char) -6593407420536562690LL);
                    }
                } 
            } 
        } 
        var_15 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -764327583)) ? (764327578) : (764327583)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [22U] [i_1]))) : (max((((/* implicit */unsigned long long int) -934306573)), (4082198025692202607ULL)))));
        arr_14 [i_1] = ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) 3815474347U)) ? (arr_12 [i_1] [i_1] [i_1] [(short)11] [i_1] [i_1]) : (((/* implicit */int) arr_5 [i_1] [i_1])))) : ((((_Bool)0) ? ((+(((/* implicit */int) arr_5 [i_1] [i_1])))) : (((/* implicit */int) var_3)))));
    }
    var_16 = ((/* implicit */short) var_11);
    var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((int) 6593407420536562690LL)), ((+(((/* implicit */int) var_3))))))) && (((/* implicit */_Bool) var_0))));
    var_18 = (+(6593407420536562690LL));
    var_19 = ((/* implicit */unsigned short) ((var_5) ? (var_6) : (((/* implicit */unsigned int) max(((~(((/* implicit */int) var_5)))), (((0) ^ (764327583))))))));
}
