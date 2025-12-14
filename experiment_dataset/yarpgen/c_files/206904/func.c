/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206904
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_0))));
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((unsigned char) max((((/* implicit */short) var_7)), (((short) var_7))))))));
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((/* implicit */long long int) var_5);
            arr_4 [4ULL] [4ULL] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_7)))) + (arr_2 [i_0])))));
            arr_5 [i_0] [i_1] = ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_1 [i_0 - 4] [i_1])));
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (~(((/* implicit */int) ((short) arr_2 [i_0 - 2]))))))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)5161))))) ? ((~(314341931858265476LL))) : (((/* implicit */long long int) ((arr_3 [5U] [i_2]) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                var_18 = ((/* implicit */signed char) ((((unsigned long long int) var_3)) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 6714576227243336129ULL))))));
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 4) 
                    {
                        arr_14 [i_0] [i_2] [i_3] [i_5] [i_5 + 4] = ((/* implicit */long long int) var_2);
                        var_19 += (unsigned char)117;
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_9))));
                    }
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_0 [i_0 + 3]))));
                }
                for (unsigned int i_6 = 2; i_6 < 11; i_6 += 4) 
                {
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((unsigned long long int) arr_13 [(unsigned char)1] [i_3] [i_2] [i_0] [i_0])))));
                    var_23 = ((/* implicit */_Bool) min((var_23), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) (_Bool)1))))) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_7 [i_0])))))));
                    var_24 = ((/* implicit */long long int) var_3);
                }
                arr_19 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) arr_15 [i_0 - 4]);
            }
            arr_20 [i_0] [i_0] = ((/* implicit */signed char) arr_17 [i_2] [i_2] [i_0] [i_2] [i_2] [i_0]);
            var_25 *= ((/* implicit */_Bool) arr_18 [i_0 + 1]);
        }
        var_26 = ((((((((/* implicit */_Bool) 12505861150263046812ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))) == (((/* implicit */int) arr_17 [4LL] [i_0 + 3] [4LL] [i_0 - 2] [i_0 - 4] [i_0 + 3])))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) 4294967295U)))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11))) < (arr_8 [i_0] [i_0] [11LL] [0LL])))))) : (((/* implicit */int) var_4)));
        var_27 = ((/* implicit */_Bool) max((14350129541983018330ULL), (((/* implicit */unsigned long long int) (unsigned char)138))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        arr_23 [i_7] = ((/* implicit */short) ((arr_22 [i_7] [i_7]) - (((/* implicit */int) var_7))));
        arr_24 [i_7] = ((/* implicit */unsigned short) (short)31578);
        var_28 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [3LL] [i_7])) ? (((/* implicit */unsigned long long int) arr_22 [i_7] [i_7])) : (((6714576227243336119ULL) >> (((arr_22 [i_7] [i_7]) - (1113545654)))))));
        var_29 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_21 [i_7]))));
    }
}
