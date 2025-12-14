/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203559
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
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) 6884405411269954306ULL))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1 + 2] [i_2 + 1] = ((/* implicit */long long int) (-(min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0])))));
                    var_17 = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) max((((arr_1 [i_2 - 1] [i_1 - 2]) << (((((3021306962U) ^ (1273660329U))) - (4294967291U))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((arr_4 [i_0] [i_0]) + (2147483647))) >> (((var_1) - (1967149127220310275ULL)))))) || (((/* implicit */_Bool) max((11092041878565954146ULL), (arr_3 [i_1] [i_0])))))))))) : (((/* implicit */unsigned char) max((((arr_1 [i_2 - 1] [i_1 - 2]) << (((((3021306962U) ^ (1273660329U))) - (4294967291U))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((((arr_4 [i_0] [i_0]) - (2147483647))) + (2147483647))) >> (((var_1) - (1967149127220310275ULL)))))) || (((/* implicit */_Bool) max((11092041878565954146ULL), (arr_3 [i_1] [i_0]))))))))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) var_5);
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((((/* implicit */_Bool) var_4)) ? (arr_3 [i_0] [i_0]) : (var_1))) - (((/* implicit */unsigned long long int) (+(var_3)))))) : (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_0)) ? (1146569540U) : (((/* implicit */unsigned int) arr_4 [(short)16] [i_0]))))))));
        var_18 = ((/* implicit */int) (~(((1745179494109864587ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) 1073740800)) : (var_14))))))));
    }
    var_19 = ((/* implicit */unsigned int) var_6);
}
