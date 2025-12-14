/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214348
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) 199744551);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_13 += ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_1]))))) - (0U)));
                    arr_7 [i_0] [i_1] = ((/* implicit */int) var_10);
                }
            } 
        } 
        var_14 &= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        arr_11 [16LL] [i_3] = (+(((/* implicit */int) arr_8 [i_3])));
        arr_12 [10U] = ((/* implicit */unsigned long long int) 199744551);
        arr_13 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_3])) && (((/* implicit */_Bool) -199744554))));
    }
    for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_4 - 1] [i_4] [i_4])) ? ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (var_7)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_12)))))))));
            arr_19 [(short)3] [i_4] = ((/* implicit */unsigned short) (!(((((((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_4])) ? (-1745347765) : (((/* implicit */int) (unsigned char)254)))) > (((/* implicit */int) ((unsigned char) var_1)))))));
            var_16 = ((/* implicit */long long int) ((int) (-(((/* implicit */int) arr_18 [i_4 + 2] [i_4] [i_4 - 1])))));
            var_17 += ((/* implicit */unsigned short) (~((~(arr_16 [i_4 + 1] [i_5])))));
        }
        var_18 = ((/* implicit */short) arr_15 [i_4]);
    }
    for (int i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((max((var_12), (((/* implicit */unsigned int) (unsigned char)254)))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_6] [(_Bool)1] [i_6]))))))) : (min((((((/* implicit */long long int) arr_3 [i_6] [i_6] [i_6])) & (var_3))), (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (-1745347772))))))));
        var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_22 [i_6]))));
    }
    var_21 = ((/* implicit */long long int) max((var_21), (var_1)));
}
