/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19743
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
    var_12 = ((/* implicit */unsigned int) ((max((min((3478061106U), (816906217U))), (((/* implicit */unsigned int) var_4)))) != (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) min((var_11), (((/* implicit */unsigned char) ((17679236015946429619ULL) < (((/* implicit */unsigned long long int) -394236751))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        arr_3 [i_0 - 3] [i_0] = max((3478061092U), (((/* implicit */unsigned int) max((arr_0 [i_0 - 3]), (arr_0 [i_0 - 3])))));
        arr_4 [9LL] [(unsigned short)3] = (~(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 2])) == (-1820898966)))));
    }
    var_14 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + ((-(2577073977U)))));
    var_15 = ((/* implicit */unsigned int) var_0);
}
