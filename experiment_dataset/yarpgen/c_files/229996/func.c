/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229996
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((((/* implicit */int) var_5)) - (110))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        var_12 -= ((/* implicit */long long int) ((((/* implicit */int) var_7)) != (((/* implicit */int) (short)29720))));
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 1; i_4 < 17; i_4 += 1) /* same iter space */
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_2] [(unsigned short)10] [i_4 + 1] [i_1] = ((/* implicit */unsigned short) (unsigned char)2);
                            arr_13 [i_0] [(signed char)11] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)4657)) : (((/* implicit */int) (short)21680))));
                            arr_14 [i_0] [(signed char)3] [i_2] [i_3] [i_4 + 1] = (unsigned short)18066;
                        }
                        for (unsigned char i_5 = 1; i_5 < 17; i_5 += 1) /* same iter space */
                        {
                            var_13 = ((/* implicit */unsigned char) var_6);
                            var_14 = ((/* implicit */unsigned short) 4992149482461386150LL);
                            var_15 ^= ((/* implicit */_Bool) (unsigned short)63821);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_21 [i_6] [i_6] [i_6] [(signed char)0] [i_6] = ((/* implicit */unsigned long long int) ((((((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) var_9))))) + (9223372036854775807LL))) >> (((/* implicit */int) (unsigned char)2))));
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1705)) ? (((/* implicit */int) (unsigned short)1715)) : (((/* implicit */int) (unsigned char)2))));
                            var_17 = ((/* implicit */unsigned int) (short)-26051);
                        }
                        arr_22 [i_3] = ((/* implicit */_Bool) 3096362249U);
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (short)-21674)) ? (((/* implicit */int) (unsigned short)44127)) : (((/* implicit */int) (unsigned char)212)))))))));
                        arr_23 [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_3) ? (6520589502001925538LL) : (((/* implicit */long long int) var_1))))) ? (3129647038U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30055)))));
                    }
                    arr_24 [12ULL] = ((/* implicit */unsigned char) (unsigned short)1699);
                    var_19 *= ((/* implicit */_Bool) (unsigned short)26404);
                    var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned short)63821)), ((~(1014576732U)))));
                }
            } 
        } 
    } 
}
