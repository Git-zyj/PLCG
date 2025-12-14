/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24654
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
    var_16 = ((/* implicit */unsigned long long int) 6U);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_9))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_17 = ((int) var_1);
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) (((~(var_0))) / (((((/* implicit */int) var_14)) / (((/* implicit */int) var_14))))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) var_1)))));
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        {
                            var_18 = ((((/* implicit */_Bool) (short)15629)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) <= (((/* implicit */int) var_1)))))) : (var_11));
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) ((signed char) var_15));
                            var_19 *= ((/* implicit */int) ((_Bool) arr_3 [(unsigned short)8] [i_1]));
                            var_20 = ((((/* implicit */int) var_9)) | (((/* implicit */int) arr_8 [i_3] [i_2] [i_1])));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_12))))))))));
                        }
                    } 
                } 
                arr_17 [i_0] [(unsigned short)7] [i_2] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
            }
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) var_15)) * (((/* implicit */int) ((var_10) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
            arr_18 [i_1] [10U] [i_0] = (+(var_0));
        }
        for (int i_5 = 1; i_5 < 11; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) -245836186))));
                /* LoopSeq 2 */
                for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    var_24 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) arr_20 [0ULL] [0ULL] [0ULL])) != (2147483647))));
                    var_25 = ((/* implicit */int) var_12);
                    arr_28 [i_0] [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_9)))) | (var_13)));
                    var_26 = ((/* implicit */signed char) var_2);
                }
                for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_6] [i_8]) * (var_6))))))));
                    var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) ? (4294967295U) : (var_6))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) >= (var_2)))))));
                    /* LoopSeq 1 */
                    for (int i_9 = 2; i_9 < 11; i_9 += 3) 
                    {
                        var_29 = arr_21 [i_5 - 1] [i_5] [i_5] [i_5];
                        var_30 = ((/* implicit */signed char) (+((-(var_6)))));
                        var_31 = ((/* implicit */unsigned int) ((int) var_1));
                    }
                }
                var_32 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((((/* implicit */int) var_4)) - (41279)))));
            }
            arr_34 [i_5] = ((((/* implicit */int) (signed char)107)) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_5 - 1] [i_5] [i_5]))))));
        }
        arr_35 [i_0] = (_Bool)1;
        arr_36 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!((_Bool)1))))));
    }
    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */int) ((((/* implicit */int) ((_Bool) var_5))) <= (((/* implicit */int) var_12))))))))));
}
