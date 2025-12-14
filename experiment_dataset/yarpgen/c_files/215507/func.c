/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215507
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
    var_13 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-1))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) max((((var_3) ? (((/* implicit */int) arr_0 [4LL])) : (((/* implicit */int) (unsigned short)65522)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_0]))))))), (((1135282178070730653LL) << (((1135282178070730641LL) - (1135282178070730640LL)))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [(signed char)2])))) ? (((long long int) arr_0 [i_0])) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))) ? ((-(((/* implicit */int) ((_Bool) arr_1 [(unsigned short)1]))))) : ((+(((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_5)))))))));
        arr_4 [0LL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)76))) ^ (9007182074871808ULL)));
    }
}
