/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200202
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
    var_16 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))))) ? (((/* implicit */int) var_10)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_17 -= ((((/* implicit */_Bool) ((((_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */long long int) ((arr_0 [i_0] [i_1]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) : ((((_Bool)1) ? (((/* implicit */long long int) arr_2 [i_0])) : (var_4)))))) && (((_Bool) ((long long int) -1909437003658022211LL))));
                var_18 = ((/* implicit */unsigned int) (_Bool)1);
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    arr_8 [i_0 - 1] [i_1] [i_1] [i_2] = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (675598588U));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) max((((long long int) ((_Bool) var_6))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0])) != (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_3]))))) & (((/* implicit */int) ((unsigned char) (_Bool)1))))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((long long int) max((((/* implicit */short) ((signed char) arr_4 [i_2] [i_2]))), (var_3)))))));
                            arr_14 [i_1] [i_3] = ((/* implicit */short) (_Bool)1);
                        }
                        var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (arr_2 [i_3]))) << (((((((/* implicit */_Bool) -45559345)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_13 [i_1] [i_2]))) - (50887U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_3 [i_2]))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        var_21 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8))))) + ((+(arr_3 [i_1]))));
                        arr_17 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */short) ((4294967295U) & (3619368727U)));
                        var_22 *= ((/* implicit */unsigned char) (short)32767);
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */short) (_Bool)1);
                            arr_22 [i_2] = ((/* implicit */int) arr_5 [i_5] [i_0 - 1]);
                        }
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))));
                    }
                }
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) ((9223372036854775807LL) >= (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    /* LoopSeq 1 */
    for (unsigned int i_7 = 1; i_7 < 17; i_7 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_8 = 2; i_8 < 18; i_8 += 4) 
        {
            var_26 -= ((/* implicit */short) (~(((/* implicit */int) (signed char)1))));
            var_27 = ((/* implicit */long long int) ((unsigned short) arr_5 [i_7] [i_8]));
            arr_29 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)4096)) : (((/* implicit */int) (_Bool)1)))))) ? (min((((/* implicit */unsigned int) arr_4 [i_8 + 1] [i_8])), (((unsigned int) var_8)))) : (((/* implicit */unsigned int) ((int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (short)-4166))))))));
        }
        /* vectorizable */
        for (long long int i_9 = 2; i_9 < 16; i_9 += 4) 
        {
            var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_7 + 1] [i_9])) << (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_8)))))));
            arr_33 [i_7] [i_9 + 2] = ((/* implicit */signed char) (~(((unsigned long long int) (_Bool)1))));
        }
        arr_34 [i_7] = ((/* implicit */short) arr_23 [i_7 - 1]);
        var_29 = ((/* implicit */int) ((long long int) ((((/* implicit */int) ((unsigned short) 3619368727U))) * (((/* implicit */int) var_9)))));
    }
}
