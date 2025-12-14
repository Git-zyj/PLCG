/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46137
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_15 = var_1;
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        var_16 *= ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) max(((signed char)-59), ((signed char)16)))))));
                        var_17 |= ((/* implicit */signed char) (+(((/* implicit */int) max((arr_6 [i_3 + 1]), ((signed char)18))))));
                        var_18 += ((signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_3 - 1] [i_2] [i_0 + 2])) ? (((/* implicit */int) ((signed char) arr_9 [i_3] [(signed char)12] [i_0] [i_0]))) : (((/* implicit */int) ((((/* implicit */int) (signed char)39)) <= (((/* implicit */int) (signed char)93)))))));
                        arr_11 [i_0 - 2] [(signed char)12] [i_0] [i_3 - 1] = ((/* implicit */signed char) (+(((/* implicit */int) min((arr_8 [i_0] [(signed char)9] [i_3 + 2] [i_0 + 1]), (arr_5 [i_3 - 1]))))));
                    }
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)127))))))) || (((/* implicit */_Bool) arr_5 [i_0 - 2]))));
                }
            } 
        } 
    } 
}
