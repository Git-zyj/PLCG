/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36875
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
    var_12 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_13 = ((/* implicit */_Bool) (((~(arr_0 [i_0 + 1]))) << (((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-36))) : (5729698727074837989ULL))) & (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1033741276)), (arr_1 [i_0])))))) - (3405239481417985857ULL)))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_9)) * (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [(short)7] [i_2])) * (arr_0 [i_0])))) ? (arr_0 [i_0]) : (((((/* implicit */_Bool) arr_6 [(short)2] [i_1 + 1] [(short)2] [19U])) ? (((/* implicit */unsigned long long int) arr_2 [i_1 - 1] [i_1 - 1])) : (arr_6 [i_0] [(_Bool)1] [9ULL] [i_2])))))));
                    var_15 = ((/* implicit */int) ((signed char) (+(((/* implicit */int) var_8)))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) ((arr_3 [4LL] [4LL]) ? (arr_0 [i_0]) : (((max((arr_5 [i_0 + 2] [5LL]), (((/* implicit */unsigned long long int) (_Bool)1)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 3] [18ULL])) ? (((/* implicit */int) (unsigned short)60923)) : (((/* implicit */int) var_11)))))))));
        var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [(unsigned short)8] [i_0 + 1])) ? (((/* implicit */int) var_5)) : (arr_2 [i_0] [i_0 + 1]))) * (((arr_2 [i_0] [i_0 + 1]) - (arr_2 [i_0] [i_0 - 1])))));
    }
}
