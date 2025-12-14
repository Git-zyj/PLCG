/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32554
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
    var_18 = ((/* implicit */unsigned short) (unsigned char)245);
    var_19 &= ((/* implicit */_Bool) min((2679927043U), (((/* implicit */unsigned int) var_9))));
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_15))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) min((8117845204921781965LL), (((/* implicit */long long int) var_13))));
        var_21 = ((short) 4499201580859392LL);
        var_22 = ((/* implicit */long long int) (unsigned char)24);
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [9] [i_0])))))))))));
            arr_7 [i_1] = ((/* implicit */unsigned char) -8117845204921781977LL);
            arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_0 [i_0])))))), (min(((~(((/* implicit */int) var_16)))), (((/* implicit */int) arr_6 [i_0] [i_1]))))));
        }
        for (int i_2 = 1; i_2 < 10; i_2 += 2) 
        {
            var_24 = ((/* implicit */_Bool) arr_2 [i_2 + 2] [(unsigned char)6]);
            var_25 ^= ((/* implicit */unsigned int) (-((~(max((((/* implicit */long long int) arr_2 [i_0] [i_2 + 2])), (-8117845204921781967LL)))))));
        }
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            var_26 = ((/* implicit */short) arr_4 [i_3]);
            arr_14 [i_0] [i_0] = ((/* implicit */signed char) (~(((unsigned int) min(((_Bool)1), (arr_1 [i_0]))))));
        }
    }
    for (short i_4 = 1; i_4 < 12; i_4 += 1) 
    {
        var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_3))))))));
        var_28 = ((/* implicit */short) (signed char)(-127 - 1));
        var_29 = ((/* implicit */unsigned short) var_6);
        var_30 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) -8117845204921781970LL)))))));
        var_31 = ((/* implicit */long long int) ((_Bool) (-((-(((/* implicit */int) var_4)))))));
    }
    for (short i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        var_32 += ((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_5]))));
        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [2LL]))))))))));
        var_34 = (+((~(min((((/* implicit */long long int) var_16)), (-8117845204921781966LL))))));
    }
}
