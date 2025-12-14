/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52289
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
    var_11 ^= ((/* implicit */long long int) min((((((/* implicit */_Bool) 1902329819)) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((1122413283101800141LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64414))))))));
    var_12 &= ((((/* implicit */_Bool) 277695205485002086LL)) ? (18014398509481983ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */int) (short)-14624)) | (((((/* implicit */_Bool) -1685827840)) ? (1093504582) : (-981066922)))));
        var_14 &= ((/* implicit */int) ((((((/* implicit */_Bool) 17249877108648908609ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0] [(unsigned char)22]))) - (((/* implicit */long long int) var_10))));
    }
    var_15 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned short) ((var_7) - (((/* implicit */long long int) ((/* implicit */int) var_3))))))), (min((((((/* implicit */_Bool) var_8)) ? (var_4) : (-1469906652032574307LL))), (((/* implicit */long long int) var_5))))));
}
