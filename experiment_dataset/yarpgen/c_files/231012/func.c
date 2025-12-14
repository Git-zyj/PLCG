/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231012
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
    var_10 = ((/* implicit */signed char) max(((~(max((var_2), (var_2))))), (((/* implicit */long long int) var_8))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    var_11 = ((((/* implicit */_Bool) (+(((((var_0) + (9223372036854775807LL))) >> (((-8968723000451502097LL) + (8968723000451502139LL)))))))) ? ((~(arr_6 [i_2 - 1] [i_1 - 2] [i_1] [i_1 - 4]))) : (((((/* implicit */long long int) var_1)) - (8968723000451502107LL))));
                    arr_8 [i_0] [13] [i_2] = min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_7 [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 3])) : (var_0))), (var_7));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_12 = var_9;
                        arr_12 [(short)17] [i_0] [(short)17] [i_3] = ((/* implicit */unsigned int) ((int) arr_4 [i_2 + 2] [i_2 - 1] [i_2 - 1]));
                        arr_13 [i_0] [i_0] [i_0] [i_3] [i_1] = ((/* implicit */signed char) (~(var_2)));
                    }
                    for (unsigned char i_4 = 1; i_4 < 22; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_5 = 2; i_5 < 22; i_5 += 4) 
                        {
                            var_13 = ((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_1 + 3]);
                            var_14 = ((/* implicit */long long int) min((var_14), ((+(var_5)))));
                            var_15 = ((/* implicit */long long int) arr_19 [i_0]);
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_2 - 2] [i_5 + 1] [7LL] [i_2])))));
                        }
                        var_17 = ((/* implicit */unsigned char) ((434550722196301564LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-54)))));
                    }
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) var_6);
                            var_19 &= (~(max((var_2), (((/* implicit */long long int) arr_23 [(unsigned char)6] [i_1 + 2] [i_1] [i_1 - 4] [i_2 - 1])))));
                            var_20 = ((/* implicit */unsigned char) var_1);
                            arr_24 [i_0] [i_1] [i_2] [i_0] [0LL] = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8968723000451502116LL))))), (arr_7 [i_0] [i_2 - 2] [i_2] [i_6])))), (((((/* implicit */_Bool) (unsigned char)248)) ? (max((((/* implicit */long long int) var_4)), (var_0))) : (arr_16 [i_0] [i_1 + 1] [i_2] [i_0] [i_7])))));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_7) / (-9223372036854775807LL)))) && (((/* implicit */_Bool) min((((/* implicit */short) (signed char)-50)), (arr_19 [i_0]))))));
                        }
                        arr_25 [i_0] [i_1 - 3] [i_6] = ((/* implicit */long long int) ((var_1) << (((arr_4 [i_0] [i_0] [i_0]) - (5927820426135757505LL)))));
                        var_22 = ((/* implicit */unsigned char) (~(arr_2 [i_0])));
                        var_23 = ((/* implicit */long long int) var_1);
                        var_24 = ((/* implicit */long long int) (signed char)16);
                    }
                }
                arr_26 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
                arr_27 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)54))));
            }
        } 
    } 
}
