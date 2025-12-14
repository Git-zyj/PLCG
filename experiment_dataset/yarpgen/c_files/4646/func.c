/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4646
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) arr_3 [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (-560004119927418869LL)))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_2 [i_0]) : (-7191732499916588038LL))) : (((/* implicit */long long int) ((/* implicit */int) ((2245330273U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127)))))))));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) (short)24576)))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_11 = ((/* implicit */_Bool) arr_8 [i_1] [i_1]);
        arr_10 [i_1] = (~(65535));
        arr_11 [(unsigned short)14] = arr_8 [i_1] [i_1];
        arr_12 [i_1] = var_7;
    }
    for (signed char i_2 = 1; i_2 < 19; i_2 += 4) 
    {
        arr_15 [(short)0] [i_2] = ((/* implicit */unsigned short) 1421454666);
        arr_16 [13] = ((/* implicit */int) max((((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_2 + 1]))))), (var_2)));
    }
    var_12 = ((/* implicit */signed char) ((_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-123))))), (8858833732076140310ULL))));
    var_13 = ((/* implicit */short) var_9);
}
