/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50654
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
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) ((min((var_10), (((/* implicit */int) (short)-19856)))) % (((/* implicit */int) (short)19841))))) ? (max((((var_14) - (8266377470889943044LL))), (((/* implicit */long long int) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_13)) - (147)))))))) : (((((/* implicit */_Bool) (+(9066672916919462075LL)))) ? (((((/* implicit */_Bool) (short)-26566)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-39))) : (-8266377470889943045LL))) : (((/* implicit */long long int) min((((/* implicit */int) var_12)), (1028269152)))))))))));
    var_16 = ((/* implicit */long long int) var_11);
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((-8266377470889943045LL), (((/* implicit */long long int) (unsigned char)46))))) && (((/* implicit */_Bool) var_7)))))) - (max((((/* implicit */long long int) ((int) var_10))), (((long long int) -3082728684280029042LL))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] [(signed char)1] = max(((signed char)-58), (((/* implicit */signed char) ((1028269156) != ((+(((/* implicit */int) (signed char)-24))))))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((_Bool) ((unsigned char) (+(var_14))))))));
        arr_4 [i_0] = (+(arr_2 [i_0]));
    }
}
