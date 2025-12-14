/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241266
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
    var_17 = ((/* implicit */long long int) max((((var_0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((var_10) != (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))), (((/* implicit */int) (unsigned short)45154))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (unsigned char)0))));
        var_19 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)1024))));
    }
    for (unsigned int i_1 = 1; i_1 < 16; i_1 += 3) 
    {
        var_20 = arr_3 [i_1];
        arr_5 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((arr_2 [i_1]) >= (arr_2 [i_1])))), (min((arr_2 [i_1]), (arr_2 [i_1])))));
        var_21 = var_9;
    }
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 12; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_22 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (((_Bool)0) ? ((~(((/* implicit */int) (unsigned short)64508)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [6U] [i_2])) || (((/* implicit */_Bool) var_8)))))))), (((unsigned int) arr_13 [(_Bool)0]))));
                    arr_14 [(_Bool)0] [0U] |= ((/* implicit */long long int) (-(5330686848063261822ULL)));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) ((var_10) == (((/* implicit */unsigned int) (~((-(((/* implicit */int) var_3)))))))));
    }
}
