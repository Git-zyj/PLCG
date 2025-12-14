/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191976
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) max((((unsigned long long int) arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1 - 2])), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1 - 1])) & (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 2] [i_1 + 3] [i_1 + 3])))))));
                    arr_7 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) max(((unsigned char)185), ((unsigned char)185))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0] [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75))) * (((arr_6 [i_0] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_0])))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        var_18 = ((18446744073709551615ULL) - (min((((/* implicit */unsigned long long int) -1)), (2358603420194518766ULL))));
        var_19 += ((/* implicit */unsigned short) min(((~(((/* implicit */int) var_13)))), ((~(((((/* implicit */int) arr_9 [i_3])) / (((/* implicit */int) arr_5 [i_3] [i_3] [i_3] [i_3]))))))));
        arr_10 [(unsigned short)14] = ((/* implicit */unsigned int) max((((max((18446744073709551611ULL), (((/* implicit */unsigned long long int) (short)4419)))) * (18446744073709551611ULL))), (((/* implicit */unsigned long long int) (_Bool)0))));
        arr_11 [i_3] = ((/* implicit */unsigned short) (-(arr_6 [i_3] [i_3])));
    }
    var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((-(var_3)))))) ? (((/* implicit */int) (short)-8231)) : (((/* implicit */int) var_12))));
    var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)38830))));
}
