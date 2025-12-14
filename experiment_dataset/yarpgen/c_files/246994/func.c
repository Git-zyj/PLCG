/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246994
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_12 = var_5;
        arr_2 [i_0] [i_0] = ((((/* implicit */int) ((((/* implicit */int) arr_1 [(_Bool)1])) >= (((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_0] [(unsigned char)15])), (var_4))))))) * (((((/* implicit */int) arr_0 [i_0] [i_0])) & (((/* implicit */int) (_Bool)1)))));
    }
    var_13 = ((/* implicit */unsigned short) var_9);
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((max((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_11)))), (((var_9) / (((/* implicit */int) var_8)))))), ((~(((var_3) ? (var_9) : (var_1))))))))));
    var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) (unsigned char)148)) : (((/* implicit */int) var_0))))))));
}
