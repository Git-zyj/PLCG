/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219050
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
    var_19 = ((/* implicit */int) var_2);
    var_20 = ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))) != (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) var_13)))))))));
        var_22 = ((/* implicit */int) ((_Bool) ((arr_1 [i_0] [i_0]) && ((_Bool)0))));
        var_23 = ((/* implicit */signed char) var_18);
        var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))) == (((/* implicit */int) (short)-20102))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((((/* implicit */_Bool) 982767785)) ? (((/* implicit */int) (unsigned short)50732)) : (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_2]))))));
            var_26 += ((/* implicit */_Bool) (+(((unsigned int) arr_3 [i_1] [1U]))));
            var_27 = ((/* implicit */unsigned short) ((short) (-(((/* implicit */int) var_6)))));
        }
        for (unsigned short i_3 = 3; i_3 < 21; i_3 += 3) 
        {
            var_28 = ((/* implicit */unsigned short) ((signed char) var_13));
            var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))) ^ ((-(arr_3 [(_Bool)1] [i_3 + 1])))));
            var_30 = ((/* implicit */signed char) (_Bool)1);
        }
        var_31 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) var_5))));
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (24ULL)))) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)24745)) || (((/* implicit */_Bool) var_8)))))));
        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4194303LL)) ? (77776240) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_14)) : ((~((-2147483647 - 1))))));
        var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) (((_Bool)1) || (((((/* implicit */int) (_Bool)1)) < (77776235))))))));
    }
}
