/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222495
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_1])), (arr_0 [i_1])))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_0] [(_Bool)1] [i_0])), (arr_0 [i_0])))));
                var_17 = ((/* implicit */unsigned short) arr_0 [i_0]);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 4; i_2 < 16; i_2 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-107))) ? (min((((/* implicit */long long int) arr_7 [i_2 + 1])), (((((var_1) + (9223372036854775807LL))) << (((((/* implicit */int) var_2)) - (41809))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2])))));
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_2 - 3]))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_15)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 10064332481196361643ULL)) ? (var_11) : (((/* implicit */int) arr_6 [i_2]))))))))));
    }
}
