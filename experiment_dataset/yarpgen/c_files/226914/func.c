/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226914
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [4] [i_2] [i_2] = ((/* implicit */_Bool) (+(max(((+(arr_1 [(unsigned short)17] [(unsigned short)17]))), (((/* implicit */int) ((short) arr_4 [i_0] [i_1] [i_2])))))));
                    var_12 &= (-((-(((/* implicit */int) ((short) arr_2 [i_0]))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_9))));
    /* LoopSeq 1 */
    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        var_14 &= ((/* implicit */unsigned short) ((-292638602) * (((/* implicit */int) (_Bool)0))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((max((((/* implicit */int) ((signed char) 526862507))), (min((-292638596), (((/* implicit */int) (_Bool)1)))))) ^ (arr_0 [i_3]))))));
        var_16 = ((_Bool) ((292638602) & (arr_8 [i_3])));
        var_17 = ((/* implicit */signed char) max((min((((arr_9 [i_3] [i_3]) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) var_6)))), (((int) -2023111827)))), (((arr_9 [i_3] [i_3]) ? ((-(((/* implicit */int) arr_7 [i_3])))) : (((/* implicit */int) (_Bool)0))))));
    }
}
