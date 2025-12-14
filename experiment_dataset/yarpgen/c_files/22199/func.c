/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22199
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) var_14);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */int) (+(var_12)));
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_0 - 2]))));
        }
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned short) (!(arr_9 [i_2])));
        arr_11 [10LL] |= ((/* implicit */long long int) ((arr_7 [0LL]) << (((arr_7 [(unsigned short)14]) - (246418203U)))));
    }
    /* LoopSeq 1 */
    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        arr_14 [i_3] |= max((var_2), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (_Bool)0))))));
        arr_15 [i_3] = ((/* implicit */long long int) (_Bool)1);
        arr_16 [i_3] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_3]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))))))), ((unsigned short)31705)));
    }
    var_19 = (_Bool)1;
    var_20 = ((/* implicit */long long int) var_12);
}
