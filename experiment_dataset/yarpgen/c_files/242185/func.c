/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242185
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
    for (signed char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (signed char)126))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) arr_6 [i_0] [i_0])), ((short)15)))) ? ((-(-12))) : ((+(((((/* implicit */int) arr_2 [i_1])) * (((/* implicit */int) (unsigned char)128))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 1; i_2 < 13; i_2 += 2) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) 2080105944U))));
        var_21 = ((/* implicit */unsigned int) ((1759276929) <= (-1759276930)));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (8388607U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-80))))) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-116)))))) + (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)15)) != (((/* implicit */int) (short)16256))))) : (((((/* implicit */_Bool) 1736184251916286330ULL)) ? (((/* implicit */int) (_Bool)1)) : (-2147483645)))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_4]))))) >= (1013107681U)));
                    var_24 = ((/* implicit */long long int) min((var_24), ((+((~((-(-9223372036854775805LL)))))))));
                }
            } 
        } 
        arr_14 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1736184251916286339ULL))))) / (((((8192ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [8U] [8U]))))) : (((/* implicit */int) ((-224343887818964976LL) != (((/* implicit */long long int) ((/* implicit */int) (short)-29589))))))))));
    }
}
