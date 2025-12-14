/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43574
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
    var_20 = ((/* implicit */short) (+((~(((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    var_21 = ((/* implicit */unsigned int) var_19);
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_22 += ((int) max((((/* implicit */long long int) arr_0 [i_0])), (-5200437140309423911LL)));
        var_23 = ((/* implicit */_Bool) max((arr_0 [(short)16]), (((/* implicit */short) arr_2 [i_0]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 19; i_1 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_2] [i_3] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_2] [i_1 + 2])) ? (arr_9 [i_3] [i_1] [1U] [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [i_1 + 2])))));
                        arr_13 [i_0] [i_1] [i_2] [i_1] |= ((/* implicit */unsigned int) (~(arr_11 [(short)0] [i_0] [i_0] [i_1 + 1])));
                        arr_14 [i_3] |= ((/* implicit */_Bool) (unsigned short)14693);
                    }
                } 
            } 
            var_24 = (-(arr_11 [i_1 + 1] [i_1] [i_1] [i_1]));
        }
        for (short i_4 = 2; i_4 < 19; i_4 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */signed char) arr_4 [i_0 + 1] [i_4]);
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_8 [i_4 - 2] [i_4 - 2] [i_0]), (arr_8 [i_4 + 2] [i_4] [(signed char)9])))) ? (((((/* implicit */_Bool) (~(var_5)))) ? (((5200437140309423893LL) * (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_4]))))) : (((/* implicit */long long int) arr_16 [i_0])))) : (((/* implicit */long long int) (-(((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0])))))))));
            arr_17 [i_0] [i_0] [i_4 + 2] = ((/* implicit */unsigned long long int) 5200437140309423882LL);
            var_27 = ((/* implicit */unsigned short) var_16);
        }
    }
}
