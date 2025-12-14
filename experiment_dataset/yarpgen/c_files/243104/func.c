/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243104
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_11 = ((/* implicit */short) max((((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)81)), (var_1)))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (((((((/* implicit */int) arr_0 [i_0] [i_0])) - (((/* implicit */int) arr_0 [(short)12] [i_0])))) - (((/* implicit */int) ((unsigned char) arr_1 [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            arr_5 [i_1 - 2] [i_0] = ((/* implicit */unsigned char) (((~(arr_3 [(unsigned short)13] [i_1 + 1] [i_1 - 2]))) & (var_5)));
            var_12 = ((_Bool) ((long long int) ((var_3) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))));
        }
    }
    var_13 = ((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) var_6))))))))));
    var_14 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_5)))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (signed char i_3 = 3; i_3 < 11; i_3 += 3) 
        {
            {
                var_15 = ((/* implicit */short) (-(arr_7 [(short)1] [i_2])));
                arr_11 [(_Bool)1] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */signed char) var_10)), (var_7)))) ? ((+(((/* implicit */int) arr_0 [i_2] [i_3 - 2])))) : (((/* implicit */int) ((arr_3 [i_2] [i_2] [i_2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(signed char)6])))))))) < (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_2 [i_2] [i_2] [(short)10]))))) ? (((/* implicit */int) var_0)) : (var_2)))));
            }
        } 
    } 
}
