/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210663
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) * ((+(((/* implicit */int) arr_0 [i_0]))))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) (signed char)14)))))) == (((((/* implicit */int) arr_0 [i_0])) << (((/* implicit */int) arr_0 [i_0])))))))));
    }
    var_20 = var_14;
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        for (unsigned short i_2 = 3; i_2 < 9; i_2 += 3) 
        {
            for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                {
                    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_5 [i_2 + 1] [i_2 - 3]), (((/* implicit */unsigned long long int) (short)-6657)))))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_3 [i_2 + 1] [i_2 - 3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65527)))))) ? (max((((/* implicit */long long int) (_Bool)0)), (var_0))) : (((/* implicit */long long int) 2535466290U))));
                }
            } 
        } 
    } 
}
