/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53525
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
    var_15 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) ((short) var_9))))), (((/* implicit */int) ((_Bool) var_2)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [(_Bool)1] [i_1] [i_0] = 623725375;
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    arr_9 [i_0] = arr_7 [2] [2] [i_2];
                    var_16 = ((/* implicit */int) (+(var_4)));
                }
                arr_10 [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_14))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_13 [i_4] [i_3] [i_3]))));
                arr_15 [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3])) ? (var_12) : (arr_14 [i_3])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)37321)) && (((/* implicit */_Bool) arr_14 [i_3]))))) : (((((/* implicit */_Bool) (unsigned short)28215)) ? (((/* implicit */int) (unsigned short)28215)) : (((/* implicit */int) (unsigned short)41574)))));
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) (-(9080845194591072269ULL)))))))));
                arr_16 [i_3] = ((((/* implicit */_Bool) 14917859758671504965ULL)) ? (815901142) : (((/* implicit */int) (_Bool)1)));
            }
        } 
    } 
}
