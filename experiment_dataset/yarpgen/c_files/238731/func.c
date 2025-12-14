/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238731
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
    var_16 = ((/* implicit */short) (unsigned short)4947);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [(unsigned short)2] |= ((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) arr_0 [(unsigned short)8])) ? (((/* implicit */int) arr_0 [(unsigned short)4])) : (((/* implicit */int) arr_0 [(unsigned short)10])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned short)12]))))))), (((/* implicit */int) min((((/* implicit */short) arr_1 [i_0])), ((short)32756))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)7)))), (((((/* implicit */_Bool) ((signed char) arr_0 [i_0]))) ? (4238584988177013534ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-73)))))))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_1 [i_0]))) ? (((((/* implicit */_Bool) 795701657)) ? (((/* implicit */int) (short)4096)) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (unsigned short)9376))));
    }
}
