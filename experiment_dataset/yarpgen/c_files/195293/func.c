/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195293
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
    var_11 |= var_8;
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        arr_4 [i_0 + 2] = ((/* implicit */unsigned long long int) (unsigned char)232);
        var_12 = (-(((/* implicit */int) arr_3 [i_0 + 1])));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_13 ^= ((unsigned char) arr_6 [i_0 + 1]);
            arr_7 [(unsigned short)8] = (unsigned char)44;
        }
    }
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (signed char)85))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) (signed char)-85)), (arr_8 [i_2])))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max((((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) arr_8 [i_2])))))), (((((arr_9 [i_2]) + (9223372036854775807LL))) << ((((~(((/* implicit */int) (signed char)-85)))) - (84))))))))));
        var_16 = ((/* implicit */_Bool) arr_8 [i_2]);
        var_17 *= ((/* implicit */unsigned short) (!(((((3544940284U) >> (((arr_9 [i_2]) + (1165273463287067609LL))))) <= (((/* implicit */unsigned int) ((((/* implicit */int) (short)-25057)) / (-467493731))))))));
    }
}
