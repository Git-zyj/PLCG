/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189823
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
    var_12 = ((long long int) max((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_6)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) (signed char)49);
                    var_14 = ((/* implicit */signed char) (unsigned short)22440);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) -625691439)) : (arr_1 [i_0])));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            arr_12 [i_0] [i_0] [i_2] [4ULL] = ((((/* implicit */int) (signed char)32)) << (((/* implicit */int) var_7)));
                            arr_13 [i_2] [i_4] [i_4] &= (-(8500283000611857214LL));
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_11))));
                            var_17 = ((/* implicit */signed char) arr_3 [i_0] [i_4]);
                        }
                        var_18 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
                        arr_14 [i_0] [i_1] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) var_5)))));
                    }
                }
            } 
        } 
        var_19 = 0LL;
    }
    var_20 |= ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))) - (6U))) > (var_1)));
    var_21 = ((/* implicit */unsigned int) min((((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) * (((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) (unsigned char)249)))))));
}
