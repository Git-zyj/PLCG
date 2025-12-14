/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219224
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_12)) ? ((-(var_10))) : (((/* implicit */long long int) var_12)))))))));
    var_16 = ((/* implicit */signed char) var_9);
    var_17 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) var_10)) ^ (arr_0 [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) var_11);
        var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0] [i_0]))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_7) : (((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [(_Bool)1] [i_0]))))));
        var_20 = ((/* implicit */short) min((((/* implicit */long long int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_1 [8] [i_1])) : (((/* implicit */int) (unsigned short)43822))))))))));
        var_22 ^= ((/* implicit */long long int) ((var_8) ? (((0ULL) | (6106708107145638190ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8)))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((var_13) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32767)))))));
    }
    for (long long int i_2 = 3; i_2 < 21; i_2 += 1) 
    {
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) min((((/* implicit */long long int) ((_Bool) ((((/* implicit */int) arr_1 [(unsigned short)18] [2ULL])) - (var_9))))), (var_2))))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned short)8])) ? (((/* implicit */long long int) arr_4 [2U])) : (var_10)))) ? (((long long int) arr_4 [(_Bool)1])) : (((/* implicit */long long int) min((arr_4 [(signed char)16]), (arr_4 [(_Bool)1])))))))));
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((unsigned int) arr_4 [(unsigned char)14])) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2 - 3])) ? (arr_4 [18ULL]) : (((/* implicit */int) arr_9 [18LL]))))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 4) 
                {
                    {
                        var_26 |= ((/* implicit */_Bool) ((short) ((unsigned int) var_10)));
                        var_27 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((long long int) arr_15 [i_4] [i_4] [i_4] [i_4]))) ? (min((var_1), (((/* implicit */int) arr_1 [13LL] [13LL])))) : (((/* implicit */int) ((unsigned short) var_6))))), (((/* implicit */int) min(((short)-14846), (((/* implicit */short) (signed char)-1)))))));
                        arr_17 [i_5] [i_3] [i_3] [i_2 - 1] = ((((1048575) / (((((/* implicit */_Bool) 12340035966563913444ULL)) ? (956690264) : (((/* implicit */int) (short)-3822)))))) | (((((/* implicit */_Bool) (short)966)) ? (((/* implicit */int) (_Bool)1)) : (-956690265))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (var_13) : (arr_0 [(unsigned short)9]))) - (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_12)) ? (arr_12 [i_5] [(short)8]) : (((/* implicit */unsigned long long int) var_4))))))) : (((min((((/* implicit */unsigned long long int) var_11)), (var_13))) - (((/* implicit */unsigned long long int) var_6))))));
                    }
                } 
            } 
            arr_18 [i_3] = var_6;
            var_29 = ((/* implicit */int) arr_9 [i_3]);
        }
        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 - 2])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_2 - 2] [i_2 - 2] [i_2])) || (((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned char) arr_16 [18U] [18U]))))))))) : (min((arr_0 [15U]), (((/* implicit */unsigned long long int) min((var_2), (var_10)))))))))));
        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_4 [18LL]), (var_1)))) ? (((((/* implicit */_Bool) arr_4 [(unsigned short)16])) ? (var_10) : (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) arr_4 [16U]))));
        arr_19 [i_2 - 1] = ((/* implicit */unsigned long long int) var_12);
    }
}
