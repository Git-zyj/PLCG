/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246995
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
    var_16 = ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (short)-26325)))) | (((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))) ? (max((arr_2 [i_1]), (((/* implicit */int) (short)-26325)))) : (arr_2 [i_0])))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 2) /* same iter space */
                {
                    arr_9 [i_2] [i_2] [i_0] = ((/* implicit */long long int) (~(var_8)));
                    var_17 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (short)-26325)))) - (((/* implicit */int) arr_3 [i_0] [i_2 + 1] [i_2]))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 1; i_3 < 17; i_3 += 2) /* same iter space */
                {
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (short)26325)) >> (((((/* implicit */int) (signed char)62)) - (44)))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 2; i_4 < 18; i_4 += 4) 
                    {
                        for (long long int i_5 = 2; i_5 < 18; i_5 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) arr_2 [i_3 + 1]))));
                                arr_17 [(unsigned char)0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) | (arr_6 [i_0] [i_3 + 3] [i_0])));
                                arr_18 [i_0] [i_0] [i_0] [i_3] [i_4] [i_5 - 1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_3] [i_3 + 2] [i_3 + 2]))));
                                arr_19 [i_0] [i_0] [i_3] [i_3] [i_0] = ((/* implicit */unsigned char) ((long long int) (+(((/* implicit */int) arr_0 [i_0 + 2])))));
                                var_19 = (-(((/* implicit */int) ((var_7) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [(signed char)16])))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0 + 3] [i_0] [i_0 + 3]))) : (arr_11 [i_0] [i_1])));
                    arr_21 [i_0] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_3] [i_3 + 3] [3U] [i_3])) ? (arr_10 [i_1] [i_3 + 4] [i_3 - 1] [i_3]) : (arr_10 [i_0] [i_3 + 4] [i_3 - 1] [i_3 + 3])));
                }
                for (unsigned short i_6 = 1; i_6 < 17; i_6 += 2) /* same iter space */
                {
                    var_20 |= ((/* implicit */long long int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (short)-26325)))), (((((/* implicit */int) (short)26314)) << (((((/* implicit */int) var_13)) - (50610)))))))) ? (((((/* implicit */_Bool) (short)-26315)) ? (((/* implicit */int) arr_23 [i_6 + 4] [i_6] [i_6 + 4])) : (((/* implicit */int) arr_23 [i_6] [i_6 + 1] [i_6 + 4])))) : (((((/* implicit */int) var_5)) >> (((((((/* implicit */int) var_11)) << (((arr_10 [i_6 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 2]) - (2758069094U))))) - (65007)))))));
                    arr_25 [i_0] = ((/* implicit */unsigned short) (short)26327);
                }
                for (unsigned int i_7 = 2; i_7 < 18; i_7 += 3) 
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max(((short)26343), (((/* implicit */short) (_Bool)1)))))));
                    arr_28 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -8264524711717846781LL)))))) < (((((/* implicit */_Bool) arr_0 [4ULL])) ? (9007199254739968LL) : (4611686018427387903LL)))))) / (((/* implicit */int) ((((/* implicit */int) var_11)) >= (-1836337742))))));
                    arr_29 [i_0 + 1] [i_0] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (3279974656335592262LL) : (((/* implicit */long long int) var_3))))) || (((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_7 [i_0])))))));
                }
                arr_30 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((max((((/* implicit */unsigned int) var_6)), (arr_14 [i_0] [i_0] [(unsigned short)16] [i_1] [i_1]))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))));
            }
        } 
    } 
}
