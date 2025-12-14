/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36277
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
    var_10 = var_8;
    var_11 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_12 = (((!(((/* implicit */_Bool) arr_2 [i_1] [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) && (((/* implicit */_Bool) arr_1 [i_1 - 1] [i_0]))))) : (((((/* implicit */_Bool) var_1)) ? (2115860442) : (arr_1 [i_1 - 1] [3]))));
                    var_13 ^= max((((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_4 [i_1 - 2] [i_1 - 2] [i_1 - 3]) : (arr_4 [i_1 - 3] [i_1 - 3] [i_1 - 3]))), (((((/* implicit */_Bool) -990130031)) ? (2065839282) : (2110079340))));
                    arr_7 [i_1] = max((((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (arr_2 [i_1 - 1] [i_1]) : (var_9))), (((((/* implicit */_Bool) (~(var_7)))) ? (1051337052) : (15728640))));
                }
            } 
        } 
    } 
    var_14 = max((((((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) -1051815391)))) ? (((((/* implicit */_Bool) var_5)) ? (-15728652) : (var_5))) : (((/* implicit */int) (!(((/* implicit */_Bool) 15728625))))))), (max((var_4), ((+(356332573))))));
    var_15 = max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) -15728668)) && (((/* implicit */_Bool) var_2))))) < ((~(var_4)))))), (max((var_2), (var_2))));
}
