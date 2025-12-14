/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241349
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
    for (long long int i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) (-2147483647 - 1));
        arr_2 [i_0] = ((/* implicit */long long int) var_14);
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) max((arr_0 [i_0]), (arr_0 [i_0]))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            arr_8 [i_0] [i_1] = max(((~(max((arr_6 [3]), (((/* implicit */int) var_1)))))), (((/* implicit */int) ((unsigned short) 1389445997))));
            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((_Bool) ((var_14) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_1 [i_0 - 2])))))));
        }
        for (short i_2 = 3; i_2 < 13; i_2 += 2) 
        {
            arr_11 [i_0] = ((/* implicit */unsigned short) arr_9 [(unsigned short)9] [i_2]);
            arr_12 [i_2] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) arr_10 [i_2 - 2] [i_2 + 1]);
        }
    }
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (-((~(((/* implicit */int) min((((/* implicit */short) var_11)), (var_3)))))))))));
    var_19 = ((/* implicit */long long int) ((var_0) == ((~(min((8717632205678801975ULL), (((/* implicit */unsigned long long int) -1465734498))))))));
    var_20 = ((/* implicit */unsigned short) var_11);
}
