/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38015
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
    for (long long int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [(signed char)8] [i_2] = arr_7 [i_0] [i_1] [i_1] [i_2];
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        var_10 ^= max((((8960609796917963257LL) % (-3145831666597382496LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_3] [i_0 + 1])) && (((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_2]))))));
                        var_11 = min((max((arr_9 [i_0] [i_0] [i_0 + 1]), (arr_9 [(signed char)3] [i_0] [i_0 - 1]))), (var_5));
                    }
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) ((long long int) max((var_7), (((/* implicit */long long int) var_2)))));
}
