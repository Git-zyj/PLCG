/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38718
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
    var_14 = ((/* implicit */unsigned int) ((2741942854U) < (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_11)))))));
    var_15 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [24ULL] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-59)) ? (max((max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (signed char)-122)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_3 [i_1] [i_1] [i_0])), (1258894879U)))))) : (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) arr_0 [(unsigned char)18])))))));
                arr_6 [i_0] = ((/* implicit */int) min((((/* implicit */short) arr_0 [i_0])), (((short) 1553024440U))));
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) var_7);
                arr_8 [i_0 + 2] [i_0] = ((/* implicit */int) max((1553024440U), (((/* implicit */unsigned int) (unsigned short)22801))));
            }
        } 
    } 
}
