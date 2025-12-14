/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33141
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
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-112)), ((short)10113)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)10117))) + (3827377210U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
    var_12 = ((/* implicit */short) min((((1056964608LL) | (((/* implicit */long long int) 3827377209U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (var_10)))) ? (((/* implicit */int) ((var_8) != (((/* implicit */long long int) ((/* implicit */int) var_6)))))) : (((/* implicit */int) ((unsigned short) var_4))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */int) (short)-10114)) - (((/* implicit */int) var_1))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_14 = ((((/* implicit */_Bool) (unsigned char)60)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_2 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_15 = ((/* implicit */short) var_8);
                    }
                    for (short i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */long long int) ((((/* implicit */int) (short)-963)) | (((/* implicit */int) ((_Bool) -1LL)))));
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1 + 1]))) / (((arr_4 [i_4]) / (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                    }
                    for (short i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
                    {
                        var_18 = arr_9 [i_0] [i_0 + 3] [i_2];
                        var_19 = ((/* implicit */_Bool) ((((((/* implicit */long long int) arr_12 [i_0] [i_1] [i_2] [i_1])) < (arr_11 [i_0] [i_5] [i_5] [i_5] [i_2]))) ? (((((/* implicit */int) (short)511)) | (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)511))));
                        var_20 = ((/* implicit */unsigned short) ((short) arr_11 [i_0] [i_1 + 1] [i_2] [(short)3] [i_5]));
                    }
                    for (short i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_2] [18LL] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_2 [i_1] [i_6])))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 4; i_7 < 21; i_7 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned char) arr_7 [i_0]);
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1 + 1] [i_7 - 4] [i_7 - 4])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_1 + 3] [i_6] [i_1])))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            arr_26 [13U] [i_8] [i_2] [i_6] [i_8] = ((/* implicit */short) (~(arr_21 [i_0] [i_0] [i_0 - 2] [i_1 + 2] [i_1 + 3])));
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_21 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_6] [i_8]))) + (((/* implicit */int) (unsigned short)24576)))))));
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */long long int) var_4)) / (arr_11 [i_0 + 2] [(short)15] [i_2] [i_6] [i_8]))))));
                        }
                    }
                    var_25 += ((/* implicit */unsigned short) arr_17 [i_0] [i_0] [i_1 + 3] [i_1] [i_1]);
                }
            } 
        } 
    }
}
