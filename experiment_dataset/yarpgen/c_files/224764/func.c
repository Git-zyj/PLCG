/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224764
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-345))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1977934581U)) ? (2317032715U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13371)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) / (var_12))) : (((/* implicit */unsigned int) ((((-2089089967) + (2147483647))) >> (((-2057560786) + (2057560808))))))))));
    var_17 = ((/* implicit */unsigned short) ((short) var_11));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((_Bool) var_12)))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 *= ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) var_11)))));
            arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2057560786)) && (((/* implicit */_Bool) -2057560786))));
        }
        arr_6 [i_0] [i_0] = ((/* implicit */signed char) var_14);
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */int) max((((/* implicit */unsigned int) (~(((var_1) >> (((((/* implicit */int) (signed char)-85)) + (114)))))))), ((~(min((var_0), (var_15)))))));
        var_20 &= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (unsigned short)1)))))))) && (((_Bool) ((((/* implicit */_Bool) 2089089967)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) var_4)))))));
        var_21 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 3321200815U)) ? (((/* implicit */int) var_6)) : (var_11)))));
    }
    var_22 = (~((~(((var_14) ^ (((/* implicit */int) (unsigned char)161)))))));
    var_23 *= ((/* implicit */int) ((((var_8) > (((/* implicit */unsigned int) ((((/* implicit */int) (short)7621)) * (((/* implicit */int) var_6))))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)28806))))) + (((unsigned int) 1709610118U)))))));
}
