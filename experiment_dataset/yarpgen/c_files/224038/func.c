/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224038
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
    var_11 |= ((/* implicit */unsigned long long int) var_2);
    var_12 = ((/* implicit */signed char) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_2 [0ULL]) : (arr_2 [2U])));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) arr_2 [i_0]));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 6; i_2 += 1) 
            {
                {
                    arr_9 [(unsigned short)1] [i_1 + 1] [i_0] [0] = ((/* implicit */_Bool) var_4);
                    arr_10 [(short)8] [i_1] [(short)4] [(signed char)2] &= ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) var_7)))));
                    arr_11 [i_0] [i_1] [i_0] = ((((var_2) >> (((((/* implicit */int) arr_6 [i_2])) - (61156))))) != (((/* implicit */long long int) arr_7 [i_1 - 2] [i_1 - 1] [i_2 - 3])));
                    arr_12 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((unsigned int) arr_7 [i_1 + 1] [i_2 - 2] [i_2]));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned short i_5 = 2; i_5 < 7; i_5 += 2) 
                {
                    {
                        arr_20 [i_0] [i_0] [i_3] [i_4] [i_5] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_6)) ? (arr_17 [i_0] [i_3] [i_4] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                        arr_21 [i_5] [i_3] [i_0] [(unsigned short)4] [i_5] = ((/* implicit */short) (-(4559689964220984702LL)));
                    }
                } 
            } 
        } 
    }
}
