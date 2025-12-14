/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/304
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
    var_15 = ((/* implicit */_Bool) ((var_9) >> (((/* implicit */int) (((~(511))) < (((/* implicit */int) ((var_13) || (((/* implicit */_Bool) var_2))))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 511)))) < (((((/* implicit */_Bool) -25)) ? (1818691539U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)101)))))));
        var_16 = ((/* implicit */unsigned int) var_14);
        var_17 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_9)), ((~(max((arr_0 [i_0]), (((/* implicit */long long int) 524))))))));
    }
    for (unsigned char i_1 = 3; i_1 < 16; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) (unsigned char)141);
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 511)) ? (((/* implicit */int) (unsigned short)65534)) : (-7)));
        var_19 = ((/* implicit */_Bool) arr_6 [i_1]);
        arr_8 [i_1] = ((/* implicit */_Bool) 2107001189);
        arr_9 [i_1] = ((/* implicit */long long int) -76664689);
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_20 -= ((/* implicit */int) (((!(((/* implicit */_Bool) max((2842534639U), (((/* implicit */unsigned int) var_14))))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) -6783368030429310738LL)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (arr_1 [(signed char)9]))), (min((((/* implicit */long long int) arr_11 [(unsigned short)12] [i_2 - 1])), (-6783368030429310734LL))))))));
        arr_12 [8U] |= ((/* implicit */unsigned long long int) 3234415245U);
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) var_8);
        arr_17 [i_3] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)12))));
        var_22 &= ((/* implicit */signed char) max((((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_3] [i_3]))))), (-6783368030429310738LL)));
        var_23 &= ((/* implicit */signed char) ((_Bool) (~(arr_14 [i_3 - 2]))));
    }
}
