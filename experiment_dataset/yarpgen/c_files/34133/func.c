/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34133
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
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_13 |= ((/* implicit */_Bool) min(((+(((/* implicit */int) (_Bool)1)))), (max((((var_7) & (((/* implicit */int) var_4)))), (-1194651012)))));
        var_14 = (((((+(var_0))) > (((/* implicit */unsigned int) var_2)))) ? (((((/* implicit */unsigned int) ((1194651040) ^ (((/* implicit */int) var_6))))) | (min((((/* implicit */unsigned int) var_12)), (arr_0 [i_0]))))) : (max((arr_1 [i_0]), (((/* implicit */unsigned int) var_7)))));
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            var_15 = min((((((/* implicit */_Bool) max((var_7), (var_9)))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (-1194651012) : (1194651013))))), (((/* implicit */int) max(((signed char)-66), ((signed char)-122)))));
            arr_8 [i_0] [i_0] [i_1 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(-601586485)))) | (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned int) arr_7 [i_0] [i_1 - 2] [i_1])))))))));
            arr_9 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) max((arr_4 [i_1 - 2] [i_1 - 2]), (arr_4 [i_0] [i_1 - 2])))) ? (((arr_4 [i_0] [i_1 + 2]) % (arr_4 [2] [i_1 + 2]))) : (((/* implicit */int) ((1194651001) < (arr_4 [i_0] [i_1 - 2])))));
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) 1049350995)) ? (-287405970) : (1194651009))) : ((~(((/* implicit */int) ((signed char) arr_1 [i_0])))))));
        }
        for (int i_2 = 2; i_2 < 18; i_2 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_4 [i_2 - 1] [i_2 - 2]) : (var_7))))));
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_0)))) ? ((+(((/* implicit */int) arr_5 [i_0] [i_2 - 2] [i_0])))) : (var_11)))) ? (max((arr_1 [i_2 - 2]), (arr_1 [i_2 - 1]))) : (((/* implicit */unsigned int) (((+(1194651002))) << (((((((arr_11 [i_0] [i_2 - 2]) % (-2086538746))) + (1087139981))) - (9))))))));
        }
    }
    for (int i_3 = 4; i_3 < 18; i_3 += 4) 
    {
        var_19 = ((/* implicit */signed char) max((max((((/* implicit */unsigned int) arr_5 [i_3] [i_3] [i_3 + 1])), (arr_0 [i_3 + 1]))), (((/* implicit */unsigned int) max((((/* implicit */signed char) arr_6 [7])), (arr_5 [i_3] [i_3] [i_3]))))));
        var_20 |= max((max((min((((/* implicit */unsigned int) arr_13 [i_3] [i_3])), (arr_2 [i_3]))), (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (var_3)))))), (((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3 - 3]))) : (arr_2 [i_3 - 4]))));
    }
    var_21 = ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | ((-(var_0))))));
    var_22 = ((min(((~(var_2))), (var_2))) + (((((((/* implicit */_Bool) 1833272220U)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (-4194304))) % (((-141715064) ^ (1194650988))))));
}
