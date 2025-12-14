/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243242
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) (short)-31474)) ? (((/* implicit */int) (short)22242)) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) (short)-10973))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (short)10994)))))) : (((((/* implicit */_Bool) 6838214915384522448ULL)) ? (((/* implicit */int) (signed char)75)) : (-504829100))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0])) != (((((/* implicit */_Bool) (short)10964)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-10975))))));
    }
    var_15 *= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)10972)) <= (((/* implicit */int) (short)-10970))))) >= (((/* implicit */int) min(((short)-10954), (((/* implicit */short) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)127))))))))));
}
