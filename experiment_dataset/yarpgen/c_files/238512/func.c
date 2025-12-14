/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238512
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
    var_20 = ((/* implicit */_Bool) ((signed char) (((+(var_1))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))))));
    var_21 = ((/* implicit */unsigned int) max((var_21), ((+(((((/* implicit */_Bool) var_1)) ? (min((var_1), (var_8))) : (max((((/* implicit */unsigned int) -825941249)), (1718354598U)))))))));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) < (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))))), (max((var_2), (((/* implicit */long long int) 2576612690U))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1718354598U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (1718354605U)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (1718354606U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) && (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_19))))))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((unsigned short) (+(min((var_15), (((/* implicit */unsigned int) var_10)))))))));
        arr_5 [i_0] &= ((/* implicit */unsigned int) (+((~(((/* implicit */int) (short)32767))))));
        arr_6 [2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((1718354598U) - (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) <= (((/* implicit */int) arr_1 [i_0] [i_0]))))) == (((/* implicit */int) ((short) arr_2 [(unsigned char)7])))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((((/* implicit */int) arr_3 [i_0])) == (((/* implicit */int) var_0)))))))));
    }
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_12)))) ? ((((((-(((/* implicit */int) (unsigned char)196)))) + (2147483647))) << (((((2572779494U) | (((/* implicit */unsigned int) ((/* implicit */int) var_19))))) - (4294967271U))))) : (var_3)));
}
