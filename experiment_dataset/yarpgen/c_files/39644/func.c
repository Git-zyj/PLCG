/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39644
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
    var_10 = ((/* implicit */short) min((var_10), (var_0)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((signed char) var_4))) ? ((+(((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) arr_2 [(_Bool)1])))) * ((-(((/* implicit */int) (_Bool)0))))));
                var_12 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_0 [i_0]))) ^ (max((((((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_1])) ? (var_7) : (((/* implicit */int) arr_4 [i_1] [i_0] [i_1])))), ((~(((/* implicit */int) arr_2 [1ULL]))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    arr_10 [i_0] [i_0] = ((((/* implicit */_Bool) arr_8 [i_1] [i_2])) ? (((/* implicit */int) arr_3 [i_0] [(_Bool)1])) : (((/* implicit */int) arr_8 [(unsigned char)1] [i_0])));
                    arr_11 [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [(short)14] [i_0]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)49))))) : (((-8690119641849829701LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [13ULL] [i_1] [i_0] [i_1] [i_0] [15U]))));
                        var_14 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (short)17246))))));
                    }
                    for (short i_4 = 1; i_4 < 14; i_4 += 4) 
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_1] [i_4 + 1])) + (((/* implicit */int) arr_3 [(_Bool)1] [i_4 + 2])))) + ((-(((/* implicit */int) arr_3 [i_0] [i_4 - 1]))))));
                        var_15 = ((/* implicit */_Bool) ((min((arr_13 [i_2] [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 2]), (arr_13 [i_1] [i_4 - 1] [i_4 - 1] [1ULL] [i_4] [i_4 + 1]))) + (min((arr_13 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4] [i_4]), (arr_13 [1LL] [i_1] [i_4 - 1] [1LL] [5U] [i_4])))));
                        /* LoopSeq 1 */
                        for (short i_5 = 2; i_5 < 14; i_5 += 1) 
                        {
                            var_16 = ((/* implicit */signed char) max((0U), (((/* implicit */unsigned int) (~(1879048192))))));
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (+(-1073741824)))) ? (((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)12))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [(unsigned char)10])) * (((/* implicit */int) (signed char)16))))))))))));
                            var_18 ^= ((unsigned long long int) max((min((0U), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) ((arr_16 [i_0]) ? (((/* implicit */int) arr_12 [14U] [i_1] [8LL] [i_4 + 1] [i_5] [i_2])) : (((/* implicit */int) (unsigned char)20)))))));
                            var_19 = ((/* implicit */unsigned char) ((int) max((arr_13 [2LL] [i_4 - 1] [i_5 + 2] [i_4 - 1] [i_5 + 2] [i_0]), (arr_13 [i_1] [i_4 + 2] [i_5 - 1] [i_4 + 2] [i_5] [i_4]))));
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(signed char)15])) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31460)))))), (((var_5) ? (arr_14 [i_0] [i_1] [(unsigned char)15] [(unsigned short)14]) : (((/* implicit */unsigned long long int) 0U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0] [4] [i_4 + 1] [i_5 - 2])) ? (((/* implicit */int) (_Bool)0)) : (-1809564483)))))))));
                        }
                        var_21 &= ((/* implicit */unsigned long long int) (_Bool)1);
                        var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (arr_15 [i_4] [i_0] [i_0] [i_0])))) : (var_8)))));
                    }
                    for (unsigned long long int i_6 = 3; i_6 < 14; i_6 += 4) 
                    {
                        var_23 |= ((/* implicit */signed char) ((min((((/* implicit */int) (short)-32645)), (arr_22 [i_6 + 1] [i_6 + 1]))) % (2097151)));
                        arr_24 [5U] [i_0] [i_2] [i_6] = ((short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)52)), (-9223372036854775800LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_13 [i_6 - 1] [i_6 + 1] [i_6] [i_6 - 2] [i_6 + 1] [i_6 - 2])));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_8))));
                    }
                    var_25 = ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0]);
                }
            }
        } 
    } 
}
