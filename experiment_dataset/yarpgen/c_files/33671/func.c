/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33671
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) 6));
                var_18 = ((/* implicit */signed char) (unsigned short)64234);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] = ((max((((/* implicit */unsigned long long int) arr_3 [i_2] [i_2] [i_2])), (arr_4 [i_2]))) + (((arr_4 [i_2]) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_2]))))))));
        arr_11 [i_2] [i_2] = ((/* implicit */short) arr_5 [i_2] [i_2] [(unsigned short)24]);
    }
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
    {
        arr_16 [i_3] = -11;
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((((/* implicit */long long int) 11)) - (arr_7 [i_3]))) + (max((arr_7 [i_3]), (arr_7 [i_3]))))))));
    }
    var_20 = ((/* implicit */long long int) var_10);
}
