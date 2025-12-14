/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211870
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
    var_10 = ((/* implicit */long long int) var_4);
    var_11 = var_7;
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (short i_3 = 3; i_3 < 9; i_3 += 2) 
                {
                    {
                        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2100933532)) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [(_Bool)1] [i_0])) : (12422907820233124700ULL)))) ? (arr_6 [i_3 + 1] [i_1] [i_1] [i_0 + 1]) : (((arr_1 [i_1]) / (arr_6 [i_0] [i_0] [(signed char)2] [i_1])))));
                        arr_10 [i_0] [i_0] [i_2] [(_Bool)1] [i_0] = ((/* implicit */signed char) ((_Bool) var_3));
                        var_13 = (+(-472312044));
                        var_14 = ((/* implicit */int) ((short) (short)21401));
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (-(((/* implicit */int) arr_5 [i_3 + 3] [i_0 - 2] [i_0] [i_0])))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0 - 3] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) arr_1 [i_0])))));
        arr_12 [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_2 [i_0] [10ULL])) ? (arr_6 [i_0 - 3] [i_0] [i_0 - 3] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
        var_16 ^= ((/* implicit */unsigned short) arr_6 [i_0] [(short)2] [i_0] [(short)2]);
        var_17 = ((/* implicit */int) ((unsigned int) ((_Bool) arr_8 [(unsigned short)4] [(_Bool)1] [(_Bool)1] [i_0])));
    }
    for (short i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        var_18 *= ((/* implicit */short) ((((/* implicit */int) ((short) arr_15 [i_4]))) & (arr_15 [i_4])));
        var_19 = ((_Bool) ((((/* implicit */int) arr_16 [i_4])) + (arr_15 [i_4])));
        var_20 *= ((/* implicit */short) max(((~(((/* implicit */int) arr_16 [i_4])))), (((/* implicit */int) arr_16 [i_4]))));
    }
    var_21 = ((/* implicit */int) ((short) (~(((17590038560768LL) - (var_2))))));
}
