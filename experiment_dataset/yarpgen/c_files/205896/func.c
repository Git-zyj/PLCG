/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205896
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) arr_3 [i_0]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 3; i_2 < 24; i_2 += 4) 
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                    arr_8 [i_1] [i_1] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_13))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (unsigned short)18345)))))));
                }
                arr_9 [i_0] [(_Bool)1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (arr_6 [i_0 - 3] [i_1] [i_1])))) ? (var_7) : (((((/* implicit */int) var_18)) - (((/* implicit */int) (_Bool)1))))))) ? ((-(((arr_5 [(unsigned char)16]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47191))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_6) > (((/* implicit */long long int) var_16))))))))));
                var_21 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)-13)) ? (arr_4 [i_0] [i_1]) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-29)) || (((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 - 2] [i_1])))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) max((((/* implicit */int) (unsigned short)51664)), ((((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) var_1)) <= (var_7)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_14))))))));
    /* LoopSeq 1 */
    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 1) 
    {
        arr_14 [i_3] = ((/* implicit */_Bool) ((((arr_5 [i_3]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) 340805246)) : (arr_5 [i_3])));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (_Bool)0))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 2; i_4 < 17; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                {
                    var_24 *= ((/* implicit */_Bool) ((unsigned short) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_19 [i_5] [i_5] [i_5])) : (((/* implicit */int) var_14)))) | (((/* implicit */int) var_3)))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        for (int i_7 = 2; i_7 < 16; i_7 += 3) 
                        {
                            {
                                arr_26 [i_3 + 2] [i_3] [i_6] [i_7 - 1] = ((/* implicit */unsigned short) ((signed char) arr_3 [i_3 + 1]));
                                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) var_7)) - (((((/* implicit */_Bool) 12857183528334263693ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_4 + 1]))) : (arr_12 [i_3]))))))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_23 [i_3 - 1] [i_3 + 2] [i_4 - 1] [i_5] [i_5]))));
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) arr_16 [i_3] [i_4 - 1]))))) != (((((/* implicit */int) var_1)) + (-1583898811))))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) min((arr_17 [i_3 + 2] [i_4 + 1] [i_5] [i_3 + 2]), (((/* implicit */unsigned short) arr_1 [i_4 + 1]))))))))));
                }
            } 
        } 
        arr_27 [i_3] = ((((/* implicit */int) min(((unsigned short)18345), (((/* implicit */unsigned short) arr_1 [i_3]))))) & (min((((((/* implicit */int) (unsigned short)21214)) - (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_9)) + (((/* implicit */int) (_Bool)1)))))));
    }
    var_28 ^= ((/* implicit */unsigned char) var_18);
}
