/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236074
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] |= ((/* implicit */signed char) min(((+(((/* implicit */int) arr_1 [i_0])))), (min((((/* implicit */int) arr_1 [i_0])), (-425363176)))));
                arr_6 [i_0] [i_0] = (-(902851580));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) >> (((/* implicit */int) var_10))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_0])), (var_2))))))), ((+(((/* implicit */int) arr_0 [i_1]))))));
                arr_8 [17] [10LL] [i_0] = (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)183)) ? (8651504324608031785LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) + (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_16))))))));
                arr_9 [i_0] [i_1] = ((((/* implicit */_Bool) min((((var_4) & (((/* implicit */long long int) ((/* implicit */int) arr_2 [10LL] [i_1]))))), (((/* implicit */long long int) arr_0 [i_0]))))) ? ((+(((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) arr_2 [i_0] [i_1]))))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_5))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_11);
    var_20 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_16))))) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
}
