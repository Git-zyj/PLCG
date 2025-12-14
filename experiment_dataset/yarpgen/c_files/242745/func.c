/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242745
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
    var_17 = ((/* implicit */long long int) var_14);
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((long long int) arr_0 [i_0 - 1] [i_0 - 1])))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) (~(max((4128768LL), (((/* implicit */long long int) (unsigned short)57571))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */short) arr_3 [i_0] [i_0 + 1]);
                    var_21 = ((/* implicit */long long int) (~((~(((/* implicit */int) var_16))))));
                }
                for (signed char i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30555)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_3 [i_0] [i_4]))));
                    arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */long long int) ((unsigned int) (unsigned char)94))) : ((+(var_11)))));
                }
                var_23 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
            }
        }
        for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            var_24 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) ((unsigned char) (unsigned short)24340)))));
            arr_16 [i_5] [i_0] [i_0] = ((/* implicit */signed char) min(((-9223372036854775807LL - 1LL)), (1066145472212594209LL)));
        }
        arr_17 [i_0 + 1] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
    {
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_6])) ? (arr_9 [i_6] [i_6]) : (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_6] [i_6])))))));
        var_26 = arr_6 [i_6] [i_6] [i_6] [i_6];
        var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)47232))));
        var_28 = ((/* implicit */signed char) (~(((/* implicit */int) (short)31864))));
    }
}
