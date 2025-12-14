/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54676
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (_Bool)0);
        arr_4 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) var_14)) ? (var_6) : (((/* implicit */long long int) var_14)))) >> (((((/* implicit */int) var_12)) - (22132)))));
        var_15 = ((/* implicit */signed char) var_13);
    }
    /* vectorizable */
    for (unsigned short i_1 = 4; i_1 < 9; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_16 = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_1 - 4]))));
            arr_10 [i_1] [i_2] = ((/* implicit */short) var_4);
            var_17 = ((/* implicit */int) (signed char)118);
            var_18 *= ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (((((/* implicit */_Bool) var_4)) ? (var_14) : (((/* implicit */unsigned int) -437615335)))));
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
            {
                var_19 *= ((/* implicit */short) var_7);
                arr_14 [i_1] [i_1] [(short)7] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) var_13)) - (((/* implicit */int) (_Bool)1))))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_5 [i_1])));
            }
            for (short i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
            {
                var_21 &= ((/* implicit */signed char) ((((((((/* implicit */int) var_13)) + (2147483647))) >> (((var_0) - (3062099062U))))) >= (((/* implicit */int) arr_13 [i_1 + 1] [i_1 - 1] [4U] [i_1]))));
                arr_19 [i_1] [i_4] [8LL] [i_1] &= ((/* implicit */unsigned char) var_8);
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_22 [i_1 - 3] [i_1 - 3] [i_4] [i_2] [(unsigned char)1] [i_1] = (((_Bool)1) ? (((/* implicit */long long int) var_1)) : (arr_5 [i_1]));
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        arr_26 [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483629)) ? ((-(((/* implicit */int) (unsigned short)46957)))) : (((/* implicit */int) ((_Bool) var_6)))));
                        var_22 *= ((/* implicit */unsigned char) (+(((((/* implicit */int) (short)-31079)) * (((/* implicit */int) (_Bool)1))))));
                    }
                    for (short i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        var_23 ^= ((/* implicit */signed char) var_12);
                        arr_29 [i_2] [(short)3] [i_4] [i_1] [i_7] = ((/* implicit */signed char) ((2576757264U) >> (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_10)))))));
                        arr_30 [i_1] [i_1] [i_1] [i_1] [i_5] [(short)6] = ((/* implicit */unsigned int) (((((_Bool)0) || (((/* implicit */_Bool) (signed char)101)))) && (((/* implicit */_Bool) 2147483635))));
                    }
                }
            }
        }
        var_24 &= ((((((/* implicit */_Bool) (unsigned short)12950)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (2739113128U))) >> (((var_14) - (3799644537U))));
        var_25 |= ((/* implicit */_Bool) ((unsigned short) (signed char)101));
    }
    var_26 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (var_3)))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_5)) - (101))))))));
    var_27 = ((/* implicit */unsigned int) max((((((/* implicit */int) var_5)) - (((/* implicit */int) var_12)))), (-2147483640)));
}
