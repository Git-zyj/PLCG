/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217872
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
    var_13 = ((/* implicit */unsigned char) (unsigned short)63098);
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (var_11)));
    var_15 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)224)) + ((-2147483647 - 1))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            arr_7 [i_0 + 1] [i_0 + 1] = ((/* implicit */long long int) (unsigned short)2437);
            var_16 = (!(((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (~(((/* implicit */int) var_2))))))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_3 = 2; i_3 < 21; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (!(var_3))))));
                            var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_10))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_5 = 3; i_5 < 20; i_5 += 4) 
                {
                    var_19 = ((/* implicit */short) ((unsigned long long int) 1333268693));
                    var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) (-(arr_18 [i_5] [i_0 + 1] [i_0 + 1] [i_5])))) ? (((((/* implicit */int) (short)-18724)) - (((/* implicit */int) (unsigned char)171)))) : (1058947321)))));
                    var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-18724)))))));
                    var_22 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_5 [i_5 + 1])))) ^ (((/* implicit */int) (unsigned short)0))));
                }
                arr_20 [i_0] [i_1] [(signed char)20] [i_0] = ((/* implicit */_Bool) ((signed char) (-2147483647 - 1)));
                var_23 = (~(2651881704U));
                var_24 = ((/* implicit */_Bool) 1058947323);
            }
        }
        for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) var_0))));
            var_26 = ((/* implicit */short) 8466430696747997056LL);
            var_27 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_11 [(signed char)5] [i_0 + 1] [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) (unsigned char)101))))));
        }
        var_28 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((unsigned int) arr_8 [i_0] [i_0] [i_0] [i_0]))), (((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0 + 1] [i_0 + 1] [(short)18])))));
        var_29 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 17545346091427921399ULL)) ? (((/* implicit */int) ((var_12) < (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) : ((~(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
    }
}
