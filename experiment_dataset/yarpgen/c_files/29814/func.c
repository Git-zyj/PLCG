/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29814
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) 1452504165)))));
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (!(var_1))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((_Bool) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)0)) : (var_6)))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_12 *= ((/* implicit */unsigned char) var_3);
            arr_14 [i_2] [i_3] = ((/* implicit */unsigned char) (-(arr_1 [i_3])));
            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) arr_2 [i_2]))))))));
            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_6))));
        }
        arr_15 [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)168))));
        var_15 = ((/* implicit */unsigned short) var_4);
    }
    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_0)))))) + (((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) ((unsigned char) var_8))) : ((+(((/* implicit */int) var_5))))))));
        var_17 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)174))))));
        var_18 &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_9 [i_4])) ? ((-(((/* implicit */int) arr_10 [i_4])))) : ((~(arr_1 [i_4])))))));
        arr_20 [i_4] = ((/* implicit */int) var_3);
    }
    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_2))));
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (((~(var_6))) * ((-(((/* implicit */int) var_1)))))))));
    var_21 = ((/* implicit */unsigned char) var_5);
}
