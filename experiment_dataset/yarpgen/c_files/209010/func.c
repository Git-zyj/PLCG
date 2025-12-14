/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209010
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
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) (~(1966370251U)))))));
    var_18 = var_14;
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_6))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_2] [7LL] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_1 [i_1]), (((/* implicit */long long int) (unsigned short)21184))))))))));
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_2 [(unsigned short)6] [i_0 - 1])) ? (((/* implicit */long long int) var_11)) : (-8498207484909716042LL))) : (((/* implicit */long long int) max((arr_0 [i_0 + 1]), (arr_3 [i_2] [i_0 - 1] [i_2 + 1]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_3 = 2; i_3 < 21; i_3 += 2) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */long long int) arr_12 [i_3]);
        arr_14 [i_3] = ((/* implicit */unsigned short) var_3);
    }
    for (long long int i_4 = 2; i_4 < 10; i_4 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_8))));
        arr_17 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))), (((/* implicit */int) arr_9 [i_4 - 1] [i_4]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_4 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_4] [i_4 - 1] [i_4]))))) : (((((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_1 [i_4]))))))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (unsigned short i_7 = 4; i_7 < 16; i_7 += 2) 
            {
                for (unsigned short i_8 = 1; i_8 < 18; i_8 += 2) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) (+(arr_25 [i_7 + 2])));
                        var_22 = ((/* implicit */long long int) max((var_22), ((+((((_Bool)1) ? (8498207484909716046LL) : (75910881292750240LL)))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */int) arr_21 [i_5] [i_5] [i_5]);
        var_24 = (unsigned short)25854;
    }
}
