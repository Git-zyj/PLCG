/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228675
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
    var_10 = ((unsigned char) (+(((int) var_4))));
    var_11 = ((/* implicit */_Bool) min((max((((/* implicit */int) min((var_3), (var_8)))), (var_6))), (((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((int) ((((int) (unsigned char)0)) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_9))))))));
                var_12 = ((/* implicit */unsigned char) min((max(((+(-1165980512))), ((+(arr_2 [14]))))), (((var_3) ? (((/* implicit */int) ((unsigned char) arr_2 [(unsigned char)12]))) : (((/* implicit */int) var_3))))));
                var_13 = ((unsigned short) max((arr_1 [i_0]), (((/* implicit */int) arr_0 [i_0] [(unsigned char)0]))));
                arr_6 [(unsigned char)6] [i_0] [(unsigned char)11] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned char) arr_0 [i_0] [i_1])), (arr_4 [i_0] [i_0]))), (((/* implicit */unsigned char) arr_0 [(unsigned short)2] [i_1]))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_5);
}
