/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226783
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120))) == (268435448U)));
    var_18 ^= ((/* implicit */unsigned int) max((max((var_3), (((/* implicit */long long int) var_11)))), (var_3)));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) arr_2 [i_0 - 1])) - (var_3))) + (((/* implicit */long long int) ((int) arr_2 [i_0 + 1])))));
        var_20 = arr_3 [i_0] [i_0];
        arr_4 [i_0 + 1] = ((/* implicit */short) min((((/* implicit */unsigned int) ((_Bool) var_14))), (((unsigned int) 2497795496105049339LL))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_2 [i_0 - 1]))) << (((min((3684773804U), (var_9))) - (2436166998U)))))) ? (((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])) | (16772865110118624471ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((2416585879U), (((/* implicit */unsigned int) var_5))))) ? (arr_0 [i_0 + 1]) : ((+(arr_3 [i_0 - 1] [i_0]))))))));
        arr_5 [i_0 - 1] [i_0 - 1] = ((/* implicit */long long int) var_9);
    }
    var_22 = ((/* implicit */unsigned int) ((short) var_2));
}
