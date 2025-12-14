/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209834
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
    var_15 = ((/* implicit */signed char) var_10);
    var_16 = ((/* implicit */int) ((short) (((_Bool)1) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (signed char)66)) << (((/* implicit */int) var_11)))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_17 = var_5;
        var_18 = ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) & (min((((/* implicit */long long int) max(((unsigned char)242), (((/* implicit */unsigned char) var_0))))), (4913687315637041994LL))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_9 [i_1] |= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_0] [i_1] [i_2]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_5 [i_0 + 1]))));
                        var_20 = ((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2] [i_2]);
                    }
                    arr_13 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (-583623352) : (((/* implicit */int) (signed char)103))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 33554431))))) : (((/* implicit */int) ((signed char) (unsigned short)38021))))) - (((/* implicit */int) var_8))));
                    var_21 = ((/* implicit */int) ((_Bool) (+(arr_12 [i_0 + 1] [i_2] [i_0 - 1]))));
                }
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        arr_16 [i_4] [i_4] &= ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_4])))))));
        var_22 = ((/* implicit */int) var_7);
        var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_4])) * (((((/* implicit */_Bool) max((arr_14 [i_4]), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */int) ((17477388438126487298ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (unsigned char)239))))));
    }
    var_24 = ((/* implicit */unsigned int) var_14);
}
