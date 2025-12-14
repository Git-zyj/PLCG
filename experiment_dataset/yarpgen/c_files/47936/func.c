/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47936
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_13))));
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_15))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) -1473296716)) && (((/* implicit */_Bool) arr_3 [(short)14] [i_1])))) ? (((int) (short)(-32767 - 1))) : (((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1] [i_2 + 1] [12ULL])) ? (((/* implicit */int) arr_1 [i_1] [i_1 + 1])) : (((/* implicit */int) (unsigned char)30))))));
                            var_23 = ((/* implicit */long long int) ((short) ((arr_5 [i_1] [6LL] [i_2 - 1]) - (arr_5 [i_1] [i_1] [6LL]))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */int) ((arr_5 [10U] [(_Bool)0] [i_1 + 2]) < (arr_5 [(_Bool)1] [4] [i_1 - 3])))) >> ((((~(arr_5 [(short)14] [(unsigned char)6] [i_1 - 2]))) - (1609652046))))))));
                arr_14 [i_1] = ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [(short)6])))), (((/* implicit */int) arr_6 [i_0] [i_1]))));
            }
        } 
    } 
}
