/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221411
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
    var_16 = ((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) (signed char)-31)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((var_8) >= (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)15415)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))), (((/* implicit */int) arr_3 [i_0])))))));
        var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */int) var_11)) : ((-(((/* implicit */int) var_13))))))) ? (((/* implicit */int) (unsigned short)0)) : ((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13))))))));
        var_18 &= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_2 [22])) ? (max((var_14), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned short)8]))))));
        var_19 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) - ((-(((/* implicit */int) (_Bool)1)))))))));
        var_20 = ((/* implicit */signed char) min((((arr_0 [i_0]) | (-1376778705))), (max((var_2), (arr_0 [i_0])))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_21 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15))))));
        var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)65524))));
        var_23 = ((/* implicit */_Bool) max((3105983816370963263ULL), (((/* implicit */unsigned long long int) -9223372036854775806LL))));
        var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) min(((unsigned char)53), (((/* implicit */unsigned char) (signed char)55))))) > (((/* implicit */int) (_Bool)1)))))));
    }
}
