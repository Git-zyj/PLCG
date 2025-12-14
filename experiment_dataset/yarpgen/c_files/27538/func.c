/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27538
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
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 ^= ((/* implicit */int) ((max((var_16), (((/* implicit */long long int) arr_1 [i_0 + 1])))) / (((/* implicit */long long int) arr_1 [i_0 - 1]))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 19; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) arr_9 [i_0 + 1] [i_2 - 2] [i_3 + 2] [i_3 - 2]);
                            /* LoopSeq 1 */
                            for (short i_4 = 1; i_4 < 19; i_4 += 3) 
                            {
                                var_21 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((-1LL) | (5249560661135350368LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (max((((/* implicit */unsigned long long int) var_11)), (var_15))))));
                                var_22 = ((/* implicit */_Bool) var_7);
                                var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                                var_24 &= (~(((((/* implicit */_Bool) (~(arr_1 [i_0 - 1])))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))));
                            }
                            var_25 = ((/* implicit */int) (!(((((/* implicit */_Bool) var_7)) && ((!(((/* implicit */_Bool) arr_2 [i_0]))))))));
                            arr_12 [10ULL] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */short) (-((+(((/* implicit */int) arr_3 [i_1] [i_2 + 1] [i_3 - 2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((5577557682147822943ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) && (((/* implicit */_Bool) ((var_15) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))))));
}
