/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46903
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
    var_19 *= ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)33))));
    var_20 = ((/* implicit */signed char) var_11);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_21 -= ((/* implicit */short) arr_1 [10LL] [10LL]);
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_11))));
    }
    for (unsigned char i_1 = 3; i_1 < 19; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1 + 1] [1] = ((/* implicit */unsigned char) (!(((_Bool) max((arr_2 [i_1 + 1]), (var_9))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                {
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [(short)8] [i_1] [i_1 - 1] [i_1])) & (((/* implicit */int) arr_6 [i_2 + 2]))))) : (((((/* implicit */unsigned long long int) 4257269311U)) / (15349275894119809477ULL)))));
                    var_24 = ((/* implicit */_Bool) ((min((((((/* implicit */int) (short)-9857)) + (-45392466))), (((/* implicit */int) arr_9 [i_2 - 1] [i_2 - 1] [i_1 - 1] [i_1])))) + (var_0)));
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((_Bool) arr_10 [i_1 - 2] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)106)) || (((/* implicit */_Bool) 37697954U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 - 2] [i_1 - 2]))))))))));
    }
    var_26 = ((/* implicit */long long int) (unsigned short)9469);
}
