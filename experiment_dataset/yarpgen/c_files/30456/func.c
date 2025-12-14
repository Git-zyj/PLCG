/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30456
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        arr_10 [5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                        arr_11 [i_0] [i_1] [i_3] [(short)10] [i_3] [i_3] |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_0]) || (((/* implicit */_Bool) (+(((/* implicit */int) var_16))))))))) & (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) -1703988415)) : (-3369369936242965355LL)))));
                        var_20 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)173)), (4294967295U)));
                        /* LoopSeq 4 */
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) min((1872956537U), (((/* implicit */unsigned int) ((unsigned short) arr_12 [i_0] [i_0] [i_2] [i_3] [i_3])))));
                            var_22 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-90)) ? ((~(arr_13 [i_0]))) : (((/* implicit */unsigned long long int) max((arr_4 [i_2]), (arr_4 [i_2]))))));
                            var_23 = var_5;
                        }
                        for (short i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            var_24 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((_Bool) var_3)))) || (((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) arr_8 [i_5] [i_3] [i_0] [i_1] [i_0]))))))));
                            var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_1] [i_0])) == (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                            var_26 = ((/* implicit */unsigned long long int) arr_15 [i_2] [i_1] [i_2] [i_3] [i_0]);
                        }
                        for (signed char i_6 = 1; i_6 < 16; i_6 += 2) 
                        {
                            var_27 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-75))));
                            var_28 ^= ((/* implicit */unsigned long long int) var_15);
                            var_29 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_12 [i_6 + 1] [i_6] [i_6] [i_6 - 1] [i_6])), (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)60))) : (3U)));
                            var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_16 [i_2] [i_6 + 1] [i_6 + 1] [i_6] [(signed char)6])))))));
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 1) 
                        {
                            var_31 &= ((/* implicit */signed char) var_15);
                            var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) 2508540923U)), (-8660455574643843821LL))))));
                            var_33 ^= ((/* implicit */unsigned short) 3611409726U);
                        }
                    }
                    var_34 = ((/* implicit */unsigned long long int) ((int) (+(arr_14 [i_0] [i_1] [i_2] [i_1] [i_2]))));
                }
            } 
        } 
    } 
    var_35 ^= ((/* implicit */unsigned long long int) (-(min((var_7), (((((/* implicit */int) (unsigned short)15450)) + (((/* implicit */int) var_1))))))));
    var_36 -= ((/* implicit */short) ((unsigned long long int) max(((unsigned short)65535), (var_1))));
    /* LoopNest 3 */
    for (unsigned long long int i_8 = 2; i_8 < 9; i_8 += 4) 
    {
        for (unsigned long long int i_9 = 4; i_9 < 8; i_9 += 2) 
        {
            for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_11 = 3; i_11 < 11; i_11 += 2) 
                    {
                        for (int i_12 = 1; i_12 < 11; i_12 += 3) 
                        {
                            {
                                arr_36 [i_8] [i_8] [i_10] [i_8] [i_8] = min((((((/* implicit */_Bool) arr_31 [i_11 - 3] [i_11 - 3] [i_10] [i_11 - 2] [i_11])) ? (arr_22 [i_11 - 3] [i_11 - 3] [i_11 - 1] [i_10] [i_11 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_11 - 3] [i_11 - 3] [i_11 - 1] [i_11 - 2] [i_10]))))), (((arr_22 [i_11 - 3] [i_11 - 3] [i_11 - 1] [i_10] [i_11 - 1]) | (((/* implicit */unsigned long long int) arr_29 [i_11 - 3] [i_11 - 3] [i_11 - 1] [i_11 - 2])))));
                                var_37 = ((/* implicit */unsigned int) -114947972);
                                var_38 *= ((/* implicit */signed char) (!(((((((/* implicit */int) var_14)) + (((/* implicit */int) (signed char)0)))) != (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) (signed char)102)))))))));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */unsigned int) max((-5988009779358789115LL), (((/* implicit */long long int) (unsigned char)252))));
                }
            } 
        } 
    } 
}
