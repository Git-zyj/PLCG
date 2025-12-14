/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35484
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
    var_13 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) min((var_12), (var_12)))))), (((/* implicit */int) var_6))));
    var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) var_9)))))))), (max((((((/* implicit */_Bool) (unsigned short)50001)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5043551553632452462ULL))), (((/* implicit */unsigned long long int) ((2651974371U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (2651974375U)));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-15691)) < ((+(-943354802)))));
        var_15 += ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) var_11))));
        var_16 = ((/* implicit */short) ((long long int) 3716990205693980774ULL));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [5] [i_1])) ? (var_10) : (((/* implicit */long long int) arr_7 [i_0] [i_1]))));
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) 1890687064U)) : (var_4)));
            arr_9 [i_0] [i_1] [2U] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) 1073741823ULL)))));
        }
    }
}
