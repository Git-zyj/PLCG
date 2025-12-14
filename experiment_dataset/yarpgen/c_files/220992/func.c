/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220992
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
    var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) max((var_15), (var_0)))))));
    var_18 = max((min(((!(((/* implicit */_Bool) var_5)))), ((!(((/* implicit */_Bool) 17197874576756171506ULL)))))), ((((~(((/* implicit */int) var_5)))) < (((/* implicit */int) var_4)))));
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = (~(((((var_16) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_2]))))))));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 2])) / (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 2]))))))));
                    arr_8 [i_0] [i_0 + 2] [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) (~(var_1)))))));
                }
            } 
        } 
        var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_14)), ((+(arr_3 [i_0] [i_0])))))) != (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) & (1248869496953380104ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [i_0 + 2]), (((/* implicit */short) var_4)))))) : (min((((/* implicit */unsigned long long int) var_6)), (var_1)))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)165)) & (((/* implicit */int) (short)-23766))));
    }
    var_22 = ((/* implicit */short) max((9103248833241573477ULL), (((/* implicit */unsigned long long int) (short)-21541))));
}
