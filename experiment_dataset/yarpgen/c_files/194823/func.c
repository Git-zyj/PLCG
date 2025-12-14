/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194823
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_1 - 1] [i_1])) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))) ^ (((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_1 - 1])))));
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (signed char)-1))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0] [i_0])) * (((/* implicit */int) arr_1 [i_0] [i_0]))));
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (short)0))));
                var_23 = (!(((/* implicit */_Bool) min((arr_1 [i_1 - 1] [i_1 + 1]), (((/* implicit */unsigned char) arr_6 [i_1 + 1] [i_1 + 2] [i_1 + 2]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)18310))))) ? ((+(((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) (unsigned short)345)) ? (((/* implicit */int) (short)15231)) : (((/* implicit */int) var_14))))))) ? (((/* implicit */int) (short)-32748)) : (((/* implicit */int) var_17))));
    var_25 = ((/* implicit */unsigned short) ((short) ((unsigned char) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-108))))));
}
