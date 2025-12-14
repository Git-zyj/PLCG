/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50086
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((((/* implicit */_Bool) ((int) arr_1 [i_0] [i_0 + 1]))) ? (min((((/* implicit */int) min((((/* implicit */unsigned char) var_10)), ((unsigned char)221)))), (arr_1 [i_0] [i_0 - 1]))) : ((-(arr_1 [i_0] [i_0 + 1]))));
                arr_7 [i_1] [i_0] = ((/* implicit */signed char) (((-(max((-112232861), (arr_0 [(signed char)4]))))) >> (((3748861167U) - (3748861162U)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_2 = 1; i_2 < 13; i_2 += 3) 
    {
        arr_10 [i_2 + 1] = ((/* implicit */signed char) arr_8 [(_Bool)1] [i_2]);
        arr_11 [i_2] = ((((/* implicit */unsigned int) arr_8 [i_2] [i_2])) % (min((3748861175U), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_2] [i_2 + 2]))))))));
        arr_12 [11LL] = ((/* implicit */int) arr_9 [i_2] [i_2 - 1]);
        arr_13 [i_2 + 2] = ((/* implicit */int) arr_9 [i_2 - 1] [i_2 - 1]);
    }
    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        arr_18 [i_3] [(short)0] = ((/* implicit */int) ((((min((arr_15 [(signed char)13] [(signed char)3]), (((/* implicit */long long int) var_16)))) >> (((arr_17 [i_3] [i_3]) - (39647457U))))) < (((/* implicit */long long int) var_2))));
        arr_19 [i_3] = ((/* implicit */unsigned int) arr_1 [(_Bool)1] [(signed char)2]);
    }
}
