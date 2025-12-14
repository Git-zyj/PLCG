/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242397
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
    var_17 = ((/* implicit */unsigned short) min((((/* implicit */int) max((min((var_1), (var_4))), (min((var_9), (var_7)))))), ((+((~(((/* implicit */int) var_12))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [(unsigned short)6] [i_0])) * ((~((-(((/* implicit */int) arr_2 [i_0] [i_1 - 3]))))))));
                var_18 = ((/* implicit */unsigned short) min((var_18), (min((max(((unsigned short)12), ((unsigned short)12))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_3 [i_1]), (arr_1 [i_1])))) || (((/* implicit */_Bool) ((unsigned short) arr_3 [i_1]))))))))));
            }
        } 
    } 
}
