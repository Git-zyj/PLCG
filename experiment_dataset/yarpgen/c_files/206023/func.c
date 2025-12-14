/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206023
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-32063)) && (((/* implicit */_Bool) 887915542))))) * (((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)6869), (((/* implicit */short) (signed char)94)))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (15032062682609177980ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)55357)) : (((/* implicit */int) (signed char)107))))) == ((((_Bool)1) ? (639271624U) : (1723480099U)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */int) (!(((/* implicit */_Bool) 2208836887U))))) % (((((/* implicit */_Bool) var_5)) ? ((-2147483647 - 1)) : (-920921995)))))));
    }
    var_17 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)31712))))) : (((((/* implicit */int) var_7)) << (((((/* implicit */int) var_4)) - (28158)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_10), (((/* implicit */signed char) (!(((/* implicit */_Bool) -1LL))))))))) : (((((/* implicit */unsigned long long int) ((int) (_Bool)1))) - (((((/* implicit */_Bool) 1542949989U)) ? (((/* implicit */unsigned long long int) 2382332692U)) : (18446744073709551615ULL)))))));
}
