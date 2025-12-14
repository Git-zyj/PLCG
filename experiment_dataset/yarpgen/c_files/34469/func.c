/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34469
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((((int) (!(((/* implicit */_Bool) var_1))))) + (((/* implicit */int) (!(((/* implicit */_Bool) -1588928745)))))));
                                var_18 ^= min((arr_8 [(unsigned short)9] [i_1 - 1] [(short)9] [(_Bool)0] [i_4]), (((/* implicit */long long int) ((unsigned char) arr_7 [i_1 - 2] [i_2]))));
                            }
                            var_19 = ((/* implicit */int) ((unsigned short) arr_0 [i_1 - 2] [i_1 - 2]));
                            arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) (~(33694288)));
                            var_20 += ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (max((((/* implicit */long long int) var_15)), (-1LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [8LL] [i_2]))))))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_0] [i_0] [i_1 - 1]));
            }
        } 
    } 
    var_22 = ((/* implicit */short) -33694289);
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)33140)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))))))) : ((~(((/* implicit */int) (unsigned short)33126))))));
    var_24 = ((/* implicit */int) var_10);
}
