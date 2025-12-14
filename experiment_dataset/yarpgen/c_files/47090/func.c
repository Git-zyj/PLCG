/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47090
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
    var_11 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) min(((short)8), (((/* implicit */short) (unsigned char)138))))) != (((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (var_4)))))))));
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)9317)), (1833643312283246790ULL)))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (0ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), (var_3))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))) & (((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) 10096776043620485494ULL))))))))));
    var_13 = ((/* implicit */short) var_6);
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (-(((/* implicit */int) arr_3 [i_0] [i_0 - 3])))))));
            var_15 += ((((/* implicit */int) arr_4 [i_0 - 1])) <= (((/* implicit */int) arr_2 [i_0 - 3] [i_0 + 1])));
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)193))) : (((((/* implicit */_Bool) (unsigned char)185)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
            arr_5 [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32767)) > (((/* implicit */int) var_0))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            var_17 *= ((/* implicit */short) (+(((/* implicit */int) var_5))));
            var_18 *= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)204)) << (((2702418552581223136ULL) - (2702418552581223116ULL)))));
            var_19 *= ((/* implicit */unsigned char) ((unsigned long long int) (-(((/* implicit */int) var_0)))));
        }
        var_20 = ((/* implicit */_Bool) ((arr_2 [i_0 - 3] [i_0 - 3]) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0])) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0]))));
        var_21 = ((/* implicit */_Bool) ((short) arr_3 [i_0 - 2] [i_0 + 1]));
    }
    /* vectorizable */
    for (unsigned char i_3 = 3; i_3 < 8; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                for (unsigned char i_6 = 4; i_6 < 9; i_6 += 4) 
                {
                    {
                        arr_18 [i_3] [i_3] [6ULL] [i_6] = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-22044)))) | (((/* implicit */int) ((_Bool) var_8)))));
                        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255)))))));
                    }
                } 
            } 
        } 
        var_23 -= ((/* implicit */unsigned char) arr_15 [i_3] [i_3 - 1] [i_3] [i_3 + 1]);
    }
    for (short i_7 = 1; i_7 < 12; i_7 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_6)))));
        arr_21 [i_7] = ((/* implicit */unsigned long long int) var_2);
    }
    for (short i_8 = 1; i_8 < 12; i_8 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_8] [i_8])), (min((((/* implicit */unsigned long long int) var_2)), (arr_0 [i_8 + 2] [i_8 - 1])))));
        var_26 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_3 [i_8] [i_8 + 2])) ? (((/* implicit */int) arr_3 [i_8 + 1] [i_8])) : (((/* implicit */int) arr_3 [i_8] [i_8])))), ((((_Bool)1) ? (((/* implicit */int) arr_19 [i_8 + 2] [i_8 + 2])) : (((/* implicit */int) var_6))))));
        var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_8 - 1])) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) (unsigned char)52))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (unsigned char)233)))))))));
        var_28 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)209))));
        arr_25 [i_8] = ((/* implicit */unsigned long long int) (unsigned char)0);
    }
}
