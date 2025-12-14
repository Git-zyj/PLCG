/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35661
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)17))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            arr_5 [8LL] |= ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) var_9)))));
            arr_6 [(signed char)18] = ((/* implicit */unsigned char) (-(-1477845970691557017LL)));
            arr_7 [i_1] = ((/* implicit */int) ((((long long int) (_Bool)1)) << (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1])) <= (((/* implicit */int) var_6)))))));
        }
        for (long long int i_2 = 2; i_2 < 17; i_2 += 2) 
        {
            arr_11 [i_2] = ((/* implicit */short) var_2);
            arr_12 [i_0] = ((unsigned long long int) arr_2 [i_2 - 1]);
            arr_13 [i_0] = ((/* implicit */signed char) var_8);
            arr_14 [i_0] [i_0] [i_2] = (-(((/* implicit */int) (signed char)-18)));
            arr_15 [i_0] = ((/* implicit */unsigned char) arr_4 [i_2] [i_2]);
        }
        arr_16 [i_0] [i_0] = ((/* implicit */long long int) (signed char)-1);
    }
}
