/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213837
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
    var_15 = ((/* implicit */int) (+((((-(var_11))) - (var_11)))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            {
                var_16 -= ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) (((_Bool)0) ? (3332373087U) : (((/* implicit */unsigned int) -1974466295)))))))) : ((+(((/* implicit */int) var_1))))));
                var_17 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_2 [i_0] [i_1 - 3])))) ? ((~(((/* implicit */int) arr_6 [i_0 + 1] [i_1 - 3])))) : ((~(((/* implicit */int) (signed char)0))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 2; i_2 < 12; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned char) (!((!((!(((/* implicit */_Bool) -1488281760))))))));
        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_2 - 1])) ? ((~((+(var_2))))) : ((((-(1974466294))) - (((/* implicit */int) ((unsigned char) (signed char)112)))))));
        var_19 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((-1974466295) + (2147483647))) << (((/* implicit */int) (_Bool)1))))) ? ((-(3332373087U))) : (arr_9 [i_2 - 1] [i_2 - 1])))));
    }
    for (int i_3 = 4; i_3 < 24; i_3 += 4) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_12 [i_3 - 4]), (arr_12 [i_3 - 3]))))));
        var_20 *= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_3]))))) ? (((/* implicit */int) max((arr_12 [i_3]), (arr_12 [i_3 - 2])))) : (((/* implicit */int) arr_12 [i_3 - 1]))))));
        arr_15 [i_3] [i_3] = ((/* implicit */int) min((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))) == (var_2))), (var_12)));
        var_21 &= ((/* implicit */unsigned short) ((signed char) (+(((/* implicit */int) (unsigned char)181)))));
    }
    var_22 = ((/* implicit */unsigned int) ((((var_11) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) ((unsigned char) var_2))))))) : (var_8)));
    var_23 += ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14)))))) * (((/* implicit */int) ((var_13) != (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
}
