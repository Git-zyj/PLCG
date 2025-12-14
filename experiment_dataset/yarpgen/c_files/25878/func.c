/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25878
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
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned short)12450)) ^ (((/* implicit */int) (short)-32761)))), (((/* implicit */int) min(((signed char)-110), ((signed char)-111))))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)125)) & (((/* implicit */int) (short)-11944))))) ? ((~(((/* implicit */int) (signed char)-94)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_16)), (arr_1 [i_0])))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) (signed char)-106))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-20)), (arr_2 [i_0])))) : (((((((/* implicit */int) var_6)) + (2147483647))) << (((((/* implicit */int) var_5)) - (48030)))))))));
            }
        } 
    } 
    var_19 |= ((/* implicit */unsigned short) var_10);
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_10))));
}
