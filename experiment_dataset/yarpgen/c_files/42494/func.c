/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42494
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
    for (short i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) ((signed char) ((arr_3 [i_0] [i_0]) / (arr_3 [i_0 - 1] [i_0]))));
        arr_4 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) arr_3 [i_0] [i_0])))));
        var_17 = (-(((/* implicit */int) (unsigned short)23166)));
    }
    var_18 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            {
                arr_9 [i_1] [i_2] = ((/* implicit */int) (_Bool)1);
                arr_10 [i_1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */int) max((((/* implicit */short) var_4)), (arr_6 [i_2])))), ((+((-(((/* implicit */int) (unsigned short)23148))))))));
            }
        } 
    } 
}
