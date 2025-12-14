/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202154
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        arr_2 [11U] = ((/* implicit */_Bool) arr_1 [11LL] [i_0 - 1]);
        arr_3 [(unsigned short)5] = ((_Bool) (-(((((/* implicit */_Bool) (unsigned short)65535)) ? (var_5) : (((/* implicit */int) (unsigned short)25))))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)12293)) > (var_4))))));
                var_12 = ((/* implicit */int) var_9);
                arr_10 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((short) (_Bool)1))) << (((/* implicit */int) (unsigned short)25))));
                arr_11 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((+(-1LL))) : (((max((3LL), (((/* implicit */long long int) (signed char)63)))) * (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2] [4ULL])))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_3);
    var_14 = ((/* implicit */unsigned long long int) var_2);
}
