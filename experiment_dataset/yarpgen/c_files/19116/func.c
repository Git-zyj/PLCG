/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19116
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2]);
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((((((_Bool) var_6)) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (var_11) : (7935640908964702543ULL))) : (((/* implicit */unsigned long long int) ((var_4) ^ (arr_3 [i_2] [i_1])))))), (((/* implicit */unsigned long long int) arr_1 [i_2]))));
                    var_13 = ((/* implicit */unsigned short) arr_1 [i_1 + 1]);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((long long int) ((((/* implicit */int) (unsigned short)35813)) % (((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231)))));
    /* LoopNest 2 */
    for (signed char i_3 = 2; i_3 < 17; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            {
                arr_13 [i_3] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [i_4] [i_3])) <= (((/* implicit */int) arr_8 [i_3]))))) : ((+(((/* implicit */int) var_8))))))));
                var_15 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (-(var_10)))))) ? (max((((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) arr_10 [i_3] [i_3] [i_3])) : (var_4))), (((arr_11 [i_3] [i_3]) * (((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (10511103164744849081ULL)))) ? (((/* implicit */int) ((short) arr_7 [i_3]))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))))));
                arr_14 [i_3] [i_3] = ((/* implicit */_Bool) var_3);
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 2) 
                {
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_5] [i_3])) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_16 [i_3 - 2] [i_3 - 1] [i_3] [i_3]))) : ((~(((((/* implicit */_Bool) arr_10 [i_3] [i_4] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_11)))))));
                    var_17 = ((/* implicit */unsigned short) arr_11 [i_3] [i_3]);
                }
                /* vectorizable */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_8] [i_3] [i_6] [i_3] [i_3])) ^ (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_20 [i_3] [i_4] [i_7] [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)16320)))) : (((/* implicit */int) arr_16 [i_4] [i_6] [i_3] [i_8]))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_7)));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_3 - 2] [i_3] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_3)) ? (var_11) : (var_11)))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            arr_27 [i_9] [i_7] [i_3] [i_3] [i_4] [i_3] = (~(var_11));
                            arr_28 [i_3] [i_3] [i_4] [i_6] [i_7] [i_9] = ((/* implicit */unsigned long long int) ((arr_26 [i_3 - 1] [i_6 - 1] [i_6 - 1] [i_7] [i_9] [i_9]) > (var_7)));
                            var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_18 [i_3] [i_7] [i_3])) : (((/* implicit */int) arr_18 [i_3] [i_6] [i_3]))))) ? (((((/* implicit */_Bool) (unsigned short)65518)) ? (6301846361952526000ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) var_1)));
                        }
                        for (unsigned short i_10 = 3; i_10 < 17; i_10 += 2) 
                        {
                            arr_31 [i_3] [i_7] [i_6] [i_4] [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(var_0)));
                            arr_32 [i_3] [i_3] [i_6] [i_4] [i_10] = ((/* implicit */unsigned long long int) arr_10 [i_3] [i_4] [i_3]);
                            var_22 = ((/* implicit */signed char) var_10);
                        }
                        /* LoopSeq 1 */
                        for (long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                        {
                            var_23 = ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (var_7)));
                            arr_36 [i_3] [i_4] [i_3] [i_7] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) arr_35 [i_6 - 1] [i_6 - 1] [i_3])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16384))) : (10511103164744849073ULL)))));
                            arr_37 [i_3] [i_3] [i_6] [i_7] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_20 [i_3 - 1] [i_6 - 1] [i_6 - 1] [i_3])) : (((/* implicit */int) arr_20 [i_3 + 1] [i_6 - 1] [i_6 - 1] [i_3]))));
                            arr_38 [i_3] [i_4] [i_6] [i_3] = ((/* implicit */unsigned long long int) var_1);
                        }
                        var_24 = ((/* implicit */_Bool) ((signed char) var_2));
                    }
                    /* LoopNest 2 */
                    for (short i_12 = 3; i_12 < 17; i_12 += 2) 
                    {
                        for (long long int i_13 = 0; i_13 < 18; i_13 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) ((arr_40 [i_3 - 2]) ? (((/* implicit */int) arr_40 [i_3 + 1])) : (var_4)));
                                arr_45 [i_13] [i_3] [i_6] [i_6] [i_3] [i_3] = ((/* implicit */int) ((var_0) && (((/* implicit */_Bool) ((unsigned char) var_0)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
