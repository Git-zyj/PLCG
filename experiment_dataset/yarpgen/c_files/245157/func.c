/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245157
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            arr_7 [(_Bool)1] [i_1] [i_1 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) 9528879345993166794ULL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)0))));
            var_17 = ((/* implicit */unsigned char) arr_3 [i_1 - 1] [0ULL]);
        }
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) ((_Bool) arr_4 [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_19 = ((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_2]))));
        arr_12 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_6 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_5 [i_2]))));
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 4; i_3 < 8; i_3 += 2) 
        {
            for (signed char i_4 = 3; i_4 < 10; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) ((unsigned char) (_Bool)1));
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) 2391258312955574555ULL))));
                    }
                } 
            } 
        } 
    }
    var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) 2022339314)) ? (((/* implicit */int) (unsigned char)31)) : (-2022339315)));
}
