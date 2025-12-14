/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19802
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (+(815655149U))))));
        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)10))))) ? (((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65511))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 754441078)) != (var_2))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) -14));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (((+(((((/* implicit */long long int) arr_4 [i_1] [i_1])) + (var_2))))) - (((/* implicit */long long int) (+(((-1174932782) + (((/* implicit */int) var_5))))))))))));
        arr_7 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 0ULL))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) var_4)), (((var_8) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) < (((/* implicit */unsigned long long int) var_0))));
    }
    for (unsigned int i_2 = 1; i_2 < 21; i_2 += 3) 
    {
        arr_12 [i_2] = ((/* implicit */long long int) min((1174932775), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2])))))) ? (((/* implicit */int) ((var_7) >= (((/* implicit */unsigned int) 650304131))))) : (-101506330)))));
        arr_13 [i_2] = ((/* implicit */unsigned int) arr_11 [i_2]);
        var_15 ^= ((/* implicit */int) arr_11 [i_2]);
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1)))))));
        var_17 ^= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) == (((/* implicit */int) ((((/* implicit */int) arr_11 [i_2 - 1])) >= (((/* implicit */int) arr_11 [i_2 - 1])))))));
    }
    var_18 = ((/* implicit */unsigned char) var_2);
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1214)) ? (1144538037U) : (((/* implicit */unsigned int) -101506325))));
}
