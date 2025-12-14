/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34426
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
    var_18 *= ((/* implicit */signed char) var_1);
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-18009))));
        arr_3 [i_0] [(unsigned short)14] &= ((/* implicit */signed char) max((max((arr_1 [(short)16]), (arr_1 [(short)20]))), ((+(arr_1 [(signed char)0])))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) / (((/* implicit */int) (short)-18009))))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])))) : ((+(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */long long int) (-(((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_8 [i_0 - 1] [i_1] [i_2] [i_1]))))))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (!((((+(((/* implicit */int) (short)-2669)))) > (((/* implicit */int) ((((/* implicit */int) (short)18009)) == (((/* implicit */int) (unsigned char)103))))))))))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 3; i_3 < 18; i_3 += 2) 
    {
        arr_14 [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9221544764958100546LL)) ? (var_9) : (((var_14) | (arr_10 [i_3] [22LL] [i_3 + 1] [i_3 - 3])))))) ? (max((max((-8183674971114322287LL), (((/* implicit */long long int) (short)-7014)))), (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)18009)))));
        arr_15 [i_3] &= ((/* implicit */int) ((_Bool) arr_10 [18] [14LL] [i_3] [i_3]));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) var_7)), (max((var_9), (((/* implicit */unsigned long long int) (short)-14531)))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_2) >> (((/* implicit */int) var_3))))) ? (((((/* implicit */int) (short)18015)) >> (((((/* implicit */int) var_4)) - (28902))))) : (((/* implicit */int) max((arr_0 [i_3] [18LL]), (((/* implicit */short) (unsigned char)45)))))))))))));
    }
    var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)209)) ? (1859809787804739234LL) : (((((/* implicit */_Bool) var_4)) ? ((-(var_11))) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
}
