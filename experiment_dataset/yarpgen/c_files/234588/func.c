/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234588
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
    var_15 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_16 ^= ((/* implicit */unsigned char) max((((/* implicit */int) arr_5 [i_0] [i_1])), (((int) (signed char)-37))));
                arr_6 [i_1] = ((/* implicit */unsigned short) min((arr_3 [i_1]), (max((arr_3 [i_0]), (((/* implicit */unsigned char) arr_5 [i_0] [i_1]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_4);
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_18 ^= ((/* implicit */_Bool) arr_3 [i_2]);
        var_19 = ((/* implicit */long long int) arr_10 [i_2]);
        var_20 |= arr_8 [i_2];
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_3 [i_3])), (arr_12 [i_3])));
        var_21 = ((/* implicit */int) max((((long long int) ((long long int) arr_5 [i_3] [i_3]))), (((/* implicit */long long int) min((((/* implicit */unsigned char) ((_Bool) arr_10 [i_3]))), (((unsigned char) arr_5 [i_3] [i_3])))))));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned char) arr_11 [i_3]);
    }
    var_22 = ((/* implicit */short) min((((/* implicit */long long int) var_14)), (min((var_3), (((/* implicit */long long int) var_1))))));
}
