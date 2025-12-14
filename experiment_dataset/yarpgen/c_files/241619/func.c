/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241619
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
    var_17 = var_6;
    var_18 = ((/* implicit */int) ((unsigned char) ((var_10) > (((/* implicit */long long int) ((/* implicit */int) var_16))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+(min((((unsigned int) var_10)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 22930835)))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_19 = ((/* implicit */long long int) (unsigned char)12);
            var_20 = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_8 [i_1])))));
            arr_10 [i_1] [i_2] [i_2] = (~(max((max((((/* implicit */unsigned long long int) arr_9 [i_2] [i_2] [3ULL])), (var_5))), (((/* implicit */unsigned long long int) ((arr_5 [i_1] [i_2]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1])))))))));
            var_21 = ((/* implicit */long long int) (((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [9ULL] [i_1]))) > (33550336U)))))) ^ (((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [(_Bool)1]))))) / (((/* implicit */int) (unsigned char)244))))));
        }
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned short) (-((~(arr_5 [i_1] [i_1])))));
    }
}
