/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45803
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
    for (long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        arr_12 [i_0 + 1] [i_3] = ((var_0) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) > (arr_0 [(_Bool)0])))) : (((/* implicit */int) arr_5 [i_0 + 1])));
                        arr_13 [i_3] = ((/* implicit */long long int) var_5);
                    }
                } 
            } 
            arr_14 [17U] = var_2;
            arr_15 [i_0] [(unsigned short)7] |= ((/* implicit */long long int) 2329363775U);
        }
        arr_16 [i_0] [i_0] &= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) (unsigned short)60590)))))));
        arr_17 [5] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_0] [(short)6] [i_0 - 1])) <= (((/* implicit */int) var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)17951))))) : (arr_3 [i_0 - 2])));
        arr_18 [(_Bool)0] = (!(((/* implicit */_Bool) var_7)));
        arr_19 [i_0 + 1] = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) var_9)) <= (((/* implicit */int) (unsigned short)4945)))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) var_0))));
        arr_24 [i_4] = ((/* implicit */signed char) (unsigned char)0);
    }
    var_11 = ((/* implicit */long long int) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) ? ((-(((/* implicit */int) (short)11407)))) : (((/* implicit */int) ((_Bool) var_9)))))));
}
