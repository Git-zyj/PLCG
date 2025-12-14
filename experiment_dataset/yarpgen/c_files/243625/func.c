/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243625
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
    var_14 = ((/* implicit */unsigned short) min(((~(3608326031U))), (((/* implicit */unsigned int) (unsigned char)120))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) (((((~(((/* implicit */int) var_5)))) * (((/* implicit */int) arr_0 [i_1])))) < (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) ((unsigned char) var_4)))))));
                var_16 = ((/* implicit */short) arr_3 [i_0] [i_0] [i_0]);
                var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) -414803392))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 3; i_2 < 9; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            {
                var_18 = ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [i_2] [i_2] [2U])), (572629075U)))) ? (min((arr_2 [i_3]), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_5 [i_3]), (((/* implicit */unsigned short) (unsigned char)248)))))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned short) var_1)), (var_0)))))));
                var_19 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)37691))))) ? (((/* implicit */int) (!(var_11)))) : ((~(((/* implicit */int) (signed char)14)))))), (((/* implicit */int) (unsigned char)76))));
                arr_8 [i_2 - 3] [i_2] [(short)9] = ((/* implicit */_Bool) ((unsigned char) min((((/* implicit */short) var_13)), (min((arr_4 [i_3]), (((/* implicit */short) (signed char)-17)))))));
                var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_1 [i_2 - 3] [i_2 - 1]) : (arr_1 [i_2 - 2] [i_2 + 1])))) ? (arr_1 [i_2 + 1] [i_2 - 2]) : (((arr_1 [i_2 - 3] [i_2 - 3]) * (arr_1 [i_2 - 2] [i_2 - 3]))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_9);
}
