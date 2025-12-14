/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239392
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52377))) * (((arr_5 [i_0] [i_1] [i_2]) * (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2 + 1]))))))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_0 [(unsigned char)2])))) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (arr_2 [i_0] [i_1])))))) ? (((((((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (arr_2 [i_0] [(unsigned short)9]) : (268435456))) + (2147483647))) << (((((268435456) + (((/* implicit */int) (_Bool)1)))) - (268435457))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (9143528911800458739LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_4) : (var_14)))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(2996753657U)))) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) var_15))))))) == ((~(var_13)))));
    /* LoopSeq 2 */
    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        arr_15 [i_3] = ((/* implicit */unsigned int) var_17);
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47103)) ? (((/* implicit */int) var_8)) : (var_14)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_8))))) : (arr_14 [i_3]))) + (9223372036854775807LL))) >> (((min(((-(arr_14 [i_3]))), (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_3])) << (((268435470) - (268435457)))))))) - (395059174LL)))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        arr_20 [i_4] = ((/* implicit */long long int) (~((+(((/* implicit */int) var_10))))));
        var_21 = ((/* implicit */unsigned short) ((((var_11) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4]))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_9)) || (arr_11 [i_4]))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_19 [i_4] [i_4]))))), (var_12))))));
    }
    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
}
