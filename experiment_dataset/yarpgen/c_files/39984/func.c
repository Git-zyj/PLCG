/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39984
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
    var_17 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] [i_0 - 3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 2])) * (((/* implicit */int) arr_0 [i_0 - 1]))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_1 [i_0 + 1]))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) (short)0)), (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (min((2164690927107286806ULL), (16282053146602264809ULL)))))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-94)) % (((/* implicit */int) (unsigned short)53822)))))));
    }
    for (unsigned int i_1 = 3; i_1 < 13; i_1 += 1) 
    {
        var_19 = (!(((/* implicit */_Bool) (unsigned short)11714)));
        arr_5 [12ULL] [i_1] |= ((/* implicit */short) arr_0 [i_1]);
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 8764965555312746113ULL))))) / (((((/* implicit */_Bool) (unsigned short)35565)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1])))))))))));
        arr_6 [i_1] = ((((/* implicit */int) ((signed char) (-2147483647 - 1)))) & (((/* implicit */int) min(((short)511), (((/* implicit */short) (_Bool)0))))));
        arr_7 [8ULL] &= ((/* implicit */unsigned char) var_14);
    }
    var_21 = ((/* implicit */int) ((unsigned long long int) (((!(((/* implicit */_Bool) var_7)))) ? ((-(var_6))) : (((/* implicit */long long int) min((((/* implicit */int) (short)26405)), (var_13)))))));
}
