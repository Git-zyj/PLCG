/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27572
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_11)))) ? ((-(arr_1 [i_0] [i_0]))) : (((/* implicit */int) ((unsigned short) arr_1 [5U] [i_0])))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (-(0U)));
    }
    for (int i_1 = 4; i_1 < 10; i_1 += 3) 
    {
        var_17 = arr_2 [i_1 - 3];
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) arr_9 [(_Bool)1] [4U] [i_2] [i_4]))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_15))))))) ? ((~(var_9))) : (((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_5 [i_1])))), (((/* implicit */int) arr_10 [i_1])))))));
                    }
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1]))))));
                        var_21 -= ((/* implicit */_Bool) max((((/* implicit */unsigned char) max((arr_13 [i_2 - 2]), (arr_13 [i_2 + 1])))), (max((var_5), (((/* implicit */unsigned char) ((_Bool) var_5)))))));
                    }
                    for (int i_6 = 4; i_6 < 8; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max(((~(((/* implicit */int) arr_7 [i_6 - 3] [i_1 - 1] [10ULL])))), ((-(((/* implicit */int) arr_11 [i_6] [i_6 - 1] [10])))))))));
                        var_23 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_3] [(short)1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_9 [i_3] [i_2 + 1] [(_Bool)1] [i_6]))))) ? (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3 + 1] [i_6] [i_6]))))), (((/* implicit */unsigned int) ((unsigned short) arr_8 [i_1 - 1] [i_2] [i_6])))));
                        var_24 = (signed char)127;
                    }
                    arr_20 [(unsigned short)2] [i_1] = ((/* implicit */unsigned int) arr_19 [i_1] [i_2] [i_3] [i_3] [i_3]);
                    var_25 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (arr_18 [i_1] [i_1] [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_0 [i_1] [i_1])))) : ((+(5641966528577851983ULL))))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) (~(4294967295U)));
    }
    for (int i_7 = 0; i_7 < 16; i_7 += 3) 
    {
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_7])) ? (4226333951U) : (min((max((68633345U), (arr_23 [i_7]))), (((/* implicit */unsigned int) min((arr_1 [i_7] [i_7]), (((/* implicit */int) var_12)))))))));
        arr_24 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) 14454674656353315854ULL)) ? (min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-3543))))), (max((arr_23 [i_7]), (arr_23 [i_7]))))) : (((/* implicit */unsigned int) arr_1 [i_7] [i_7]))));
        /* LoopSeq 1 */
        for (short i_8 = 4; i_8 < 15; i_8 += 3) 
        {
            var_28 *= ((/* implicit */signed char) min((((long long int) ((unsigned short) arr_23 [i_8]))), (((/* implicit */long long int) arr_26 [i_7] [i_8 - 2] [i_8]))));
            var_29 = ((/* implicit */unsigned long long int) (signed char)-33);
        }
        arr_29 [i_7] [i_7] = ((/* implicit */unsigned short) arr_1 [i_7] [i_7]);
        var_30 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_25 [i_7])))), (((/* implicit */int) arr_25 [i_7]))));
    }
    var_31 = ((/* implicit */unsigned int) (~(var_14)));
    var_32 = ((/* implicit */signed char) var_8);
    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_8))) ? (((int) (-(((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_1)) ? (min((2110359744), (((/* implicit */int) (signed char)-126)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
}
