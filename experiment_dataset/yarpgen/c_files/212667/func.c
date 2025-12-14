/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212667
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
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        var_12 &= ((/* implicit */unsigned char) arr_0 [i_0 - 3]);
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) min((((((((/* implicit */int) var_9)) + (((/* implicit */int) arr_0 [i_0])))) - (((/* implicit */int) (_Bool)0)))), (((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) var_0)))))))));
        var_14 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))) ? (((/* implicit */int) arr_1 [6LL])) : ((~(((/* implicit */int) (signed char)73))))))) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_5)) * (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_2 - 1] [(_Bool)1])) == (((/* implicit */int) arr_3 [i_1] [i_2 + 1] [i_2 + 1])))))));
                    arr_6 [i_0] [(signed char)4] [i_2] |= ((/* implicit */unsigned short) (unsigned char)214);
                    arr_7 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) var_1))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        arr_10 [i_1] [i_0 - 3] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)12606))) & (var_6)))) ? (2097151LL) : (((/* implicit */long long int) (-(var_4))))))) ? (((unsigned long long int) arr_9 [i_0 - 1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0 + 1])))));
                        var_16 = ((/* implicit */short) ((unsigned short) (-(5544280525526363780LL))));
                        arr_11 [i_0] [i_1] [i_0] [(_Bool)1] [i_0] = ((/* implicit */short) var_0);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            var_17 *= ((/* implicit */short) ((arr_9 [i_0 - 1]) ? (((((/* implicit */_Bool) 739795235536192407LL)) ? (4660886638943354717LL) : (5544280525526363780LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                            var_18 = ((/* implicit */int) arr_12 [i_3 + 1] [i_3] [i_3] [i_3] [i_4]);
                            arr_14 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */signed char) (short)2047);
                        }
                        for (unsigned long long int i_5 = 3; i_5 < 18; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((int) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_3))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 463840476)) ? (-2466384300248826166LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 + 2])))))))));
                            arr_17 [i_3] [i_1] [i_3] [i_3] [i_1] [(_Bool)1] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1766135378)))))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? ((~(((arr_8 [i_0 - 3] [18LL] [i_1] [i_3]) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 270690336)))))))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        var_21 ^= ((/* implicit */long long int) (~(2113500966)));
                        var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_13 [i_0 + 1])));
                        arr_21 [i_1] [11LL] [i_2] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) (short)-22846))));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 6777355390424710187ULL)) ? (((/* implicit */int) (short)10219)) : (((/* implicit */int) arr_12 [i_6] [i_2] [i_2] [i_1] [i_0])))))))));
                    }
                }
            } 
        } 
    }
    var_24 = ((/* implicit */_Bool) min((((((/* implicit */long long int) ((((/* implicit */_Bool) 8425922507440437509ULL)) ? (((/* implicit */int) (unsigned short)53633)) : (((/* implicit */int) var_9))))) - (var_8))), (((/* implicit */long long int) min((var_10), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) var_0)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                var_25 = ((/* implicit */_Bool) (short)10257);
                var_26 = ((/* implicit */unsigned char) (+(var_10)));
                /* LoopSeq 1 */
                for (short i_9 = 3; i_9 < 23; i_9 += 4) 
                {
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (_Bool)1))));
                    var_28 += ((/* implicit */unsigned long long int) (+((((_Bool)1) ? (((/* implicit */int) ((_Bool) arr_31 [i_7] [i_8] [i_9] [i_7]))) : (((/* implicit */int) (signed char)73))))));
                }
            }
        } 
    } 
    var_29 = ((/* implicit */long long int) var_5);
}
