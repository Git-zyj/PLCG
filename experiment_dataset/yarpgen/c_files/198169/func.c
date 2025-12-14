/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198169
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
    var_16 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_1)) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_5))) : (max((var_2), (((/* implicit */long long int) var_15)))))), (((/* implicit */long long int) var_0))));
    var_17 = ((/* implicit */signed char) (+((-((-(((/* implicit */int) var_10))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [16ULL] [i_2] = ((/* implicit */signed char) arr_5 [i_0] [i_1] [i_0]);
                    arr_9 [i_0] &= ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) + (((((/* implicit */_Bool) arr_4 [(unsigned char)8])) ? (-3689922992974431269LL) : (((/* implicit */long long int) arr_1 [i_0])))));
                }
            } 
        } 
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) arr_2 [i_0])) : (16777215U)));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */int) (short)-13616)) * (((/* implicit */int) (signed char)40)))) : (((/* implicit */int) ((1462501055) > (arr_2 [(signed char)18]))))));
        var_20 = ((/* implicit */signed char) ((((((/* implicit */int) (short)9746)) < (((/* implicit */int) arr_7 [5U] [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)79))));
        arr_10 [i_0] [(signed char)17] = ((((/* implicit */_Bool) ((unsigned short) (signed char)-41))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) + (((/* implicit */int) (signed char)(-127 - 1)))))) : (((long long int) (signed char)79)));
    }
    var_21 = (+(((/* implicit */int) (_Bool)1)));
}
