/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213484
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
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
                    {
                        var_13 = var_3;
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((var_2) >> (((arr_8 [i_0] [i_3]) + (3667706516243117682LL)))))) : (((/* implicit */unsigned short) ((var_2) >> (((((arr_8 [i_0] [i_3]) + (3667706516243117682LL))) - (7123898206249423852LL))))));
                            var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)45473)) : (((/* implicit */int) (short)4476)))))));
                            var_15 = ((/* implicit */unsigned short) (short)4476);
                        }
                        for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            arr_18 [i_0] [i_0] [i_2] [i_0] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) && (((/* implicit */_Bool) (((-(((/* implicit */int) var_12)))) & (((/* implicit */int) arr_0 [i_0] [i_5])))))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_5)) > ((+(var_2)))))) <= (((/* implicit */int) var_5))));
                        }
                    }
                    for (short i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                    {
                        arr_21 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) (-9223372036854775807LL - 1LL));
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_12 [i_0] [(short)6] [i_0] [(signed char)15] [i_6])) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_6]))))) == ((-(var_6))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_12)))))) : (((/* implicit */int) var_5)))))));
                    }
                    arr_22 [i_0] [i_0] = ((/* implicit */signed char) arr_16 [i_0 + 2]);
                }
            } 
        } 
    } 
    var_18 &= ((/* implicit */unsigned short) ((((((((/* implicit */long long int) ((/* implicit */int) var_11))) / (var_0))) & (((/* implicit */long long int) ((/* implicit */int) var_12))))) - (((/* implicit */long long int) ((/* implicit */int) (short)27821)))));
    var_19 = ((/* implicit */_Bool) (+(var_6)));
}
