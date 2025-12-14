/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231505
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
    var_19 -= ((/* implicit */short) -8194089368188807997LL);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 8; i_0 += 2) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_13)) | (4080462677844821235ULL)));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((2992022334227551851LL) / (((/* implicit */long long int) ((/* implicit */int) (short)7021))))))));
        arr_2 [i_0 + 3] [i_0] |= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)26649)) & (((/* implicit */int) ((((/* implicit */int) (unsigned short)38903)) <= (((/* implicit */int) (unsigned short)26653)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) -8194089368188807997LL);
    }
}
