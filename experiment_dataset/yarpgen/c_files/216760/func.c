/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216760
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (21824))))))));
        var_21 |= var_8;
        var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) (short)-27469)) & (((/* implicit */int) (short)-27476)))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_23 = ((/* implicit */int) arr_1 [i_0] [i_0]);
    }
    var_24 = ((/* implicit */int) var_16);
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            {
                var_25 = ((/* implicit */unsigned char) (-(-903680514)));
                arr_8 [(unsigned short)1] [i_1] = ((/* implicit */unsigned short) max(((+(((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (3384282602U))))), (((arr_5 [i_1] [i_2] [i_2]) - (arr_5 [i_2] [i_2] [i_1])))));
                var_26 = ((/* implicit */unsigned long long int) var_6);
            }
        } 
    } 
    var_27 += ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) (short)25773)) ? (((/* implicit */int) (unsigned short)16576)) : (((/* implicit */int) (unsigned short)48959)))), (((/* implicit */int) max((((/* implicit */short) var_11)), (var_10))))))));
}
