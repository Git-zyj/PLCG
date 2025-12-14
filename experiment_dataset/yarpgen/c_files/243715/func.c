/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243715
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        arr_4 [i_0 + 1] = ((/* implicit */unsigned char) 576320014815068160ULL);
        var_17 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_3 [i_0 + 2] [i_0 - 1]))))));
        var_18 = ((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) arr_2 [i_0 + 1] [i_0 + 2]))), (arr_1 [i_0 - 1])));
        arr_5 [i_0 + 2] [i_0 - 1] = ((/* implicit */signed char) ((unsigned char) ((signed char) arr_0 [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        arr_10 [i_1] = ((/* implicit */unsigned char) arr_0 [i_1 + 1]);
        var_19 = arr_8 [i_1 + 1] [i_1 - 1];
    }
    var_20 = ((/* implicit */unsigned short) ((var_14) < (((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (signed char)60))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_21 = ((/* implicit */int) min((var_21), ((~(((/* implicit */int) arr_0 [i_2]))))));
        arr_14 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)32767)) >> (((17870424058894483473ULL) - (17870424058894483453ULL)))));
    }
}
