/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197766
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
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)24736), (((/* implicit */unsigned short) (short)-25145))))) ? (var_6) : (var_5))))));
    var_14 = ((/* implicit */signed char) max(((short)31165), (((/* implicit */short) ((((/* implicit */_Bool) (short)19040)) && (((/* implicit */_Bool) 404686431U)))))));
    var_15 = ((/* implicit */long long int) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)174)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) var_8);
        var_16 += max((((/* implicit */unsigned int) ((unsigned char) min((var_6), (((/* implicit */unsigned int) var_12)))))), (((min((1885690398U), (((/* implicit */unsigned int) var_1)))) ^ (((/* implicit */unsigned int) ((var_1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)100))))))));
    }
    var_17 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) (unsigned short)24747)))) == (((/* implicit */int) (unsigned short)24736)))))) : (((unsigned int) 1430341866866987994ULL)));
}
