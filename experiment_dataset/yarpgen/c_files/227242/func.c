/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227242
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) var_1);
                var_14 = ((/* implicit */unsigned char) (signed char)7);
                arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */short) arr_2 [i_1] [i_1] [(_Bool)1])), ((short)-17050)))) == ((+((-(((/* implicit */int) (signed char)-7))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((((((/* implicit */int) var_0)) * (((((/* implicit */int) (signed char)-7)) * (((/* implicit */int) var_13)))))), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_7)))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_0))))))))));
    var_16 = ((/* implicit */unsigned int) min((max((min((var_12), (((/* implicit */int) var_4)))), (((/* implicit */int) (unsigned short)65535)))), (((((((/* implicit */int) (short)3)) * (((/* implicit */int) (unsigned char)243)))) + (((/* implicit */int) ((unsigned short) (signed char)-67)))))));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) max(((signed char)-1), (((/* implicit */signed char) ((((/* implicit */_Bool) -7912977246343173081LL)) || (((/* implicit */_Bool) (unsigned char)229))))))))));
}
