/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199538
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (unsigned char)250)))))) == ((((-(var_1))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)6)) ^ (1381922143))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] [i_0 + 3] = ((/* implicit */unsigned char) min((3644479259U), (((unsigned int) (unsigned char)5))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (unsigned char)5);
        var_17 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */unsigned long long int) -1LL)) : (18446744073709551615ULL)))));
        arr_5 [i_0] = ((/* implicit */signed char) max((((((int) (unsigned char)6)) << (((((((/* implicit */int) ((short) (signed char)-28))) + (59))) - (3))))), ((((-(((/* implicit */int) (unsigned char)250)))) % (((/* implicit */int) (unsigned char)3))))));
    }
}
