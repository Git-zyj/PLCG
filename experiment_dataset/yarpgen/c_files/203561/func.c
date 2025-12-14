/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203561
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
    var_14 ^= ((/* implicit */unsigned char) var_13);
    var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_9))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_4 [i_1]), (((/* implicit */unsigned short) arr_0 [(unsigned char)0] [i_1])))))));
                var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_0] [i_1]))));
                var_18 = ((/* implicit */unsigned char) min((((((/* implicit */int) var_1)) + (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)70)), ((unsigned short)24454)))))), (((/* implicit */int) (unsigned short)65535))));
                arr_6 [i_0] [i_0] |= ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (unsigned char)239)))));
                var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_1] [i_1]))) ? (((/* implicit */int) arr_0 [i_0] [(unsigned short)2])) : (((/* implicit */int) max((arr_4 [i_1]), (((/* implicit */unsigned short) var_4)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 14716350769841683197ULL))))) + (max(((~(((/* implicit */int) var_2)))), (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (unsigned char)239)))))))));
}
