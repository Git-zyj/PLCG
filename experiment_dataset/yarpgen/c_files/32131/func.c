/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32131
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
    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) ((((((((/* implicit */int) var_8)) * (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_7)))))) * (((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        var_11 -= ((/* implicit */signed char) min((((unsigned int) arr_1 [i_0])), (((unsigned int) ((signed char) 559751328)))));
        var_12 = ((/* implicit */short) max((min((((unsigned long long int) (short)-26893)), (((/* implicit */unsigned long long int) ((-1LL) * (((/* implicit */long long int) ((/* implicit */int) var_2)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (((/* implicit */int) (short)16383)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            arr_7 [i_0] = ((/* implicit */long long int) var_8);
            /* LoopSeq 4 */
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_4))));
                var_13 = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)61)) | (1529224718))) | (((/* implicit */int) (signed char)(-127 - 1)))));
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((long long int) arr_8 [i_0 - 3] [i_0 + 2] [i_0 - 3])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_8))) ? (((arr_4 [i_0 - 2] [i_2] [i_4]) << (((((/* implicit */int) arr_0 [i_1])) - (46586))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_13 [i_0] [i_1] [i_2] [i_3] [i_1])))))))));
                        var_16 = ((/* implicit */int) ((arr_4 [i_2] [i_2] [i_0]) + (((/* implicit */unsigned long long int) arr_12 [i_0 + 1] [i_0] [i_1] [i_3]))));
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_4] [i_2])) ? (var_9) : (((/* implicit */long long int) arr_8 [i_4] [i_3] [i_1]))));
                    }
                }
                var_18 = ((/* implicit */int) var_7);
            }
            for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    var_19 = ((/* implicit */signed char) ((unsigned int) arr_18 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 - 3]));
                    arr_21 [i_0] [i_0] [7] [i_1] [i_0] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) arr_11 [i_0 - 2] [i_1] [i_5] [i_5] [i_5] [i_6])) ? (((/* implicit */int) arr_17 [i_6] [i_5] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_5]))))));
                }
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (signed char)10)) + (var_1)))))));
                var_21 -= ((/* implicit */short) ((var_6) / (((/* implicit */unsigned int) ((((/* implicit */int) (short)255)) << (((var_6) - (3710558622U))))))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 3; i_8 < 12; i_8 += 2) 
                    {
                        {
                            var_22 *= arr_3 [i_7] [4U] [i_7];
                            arr_28 [i_0] [i_0] [i_0] [i_0] [9] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */long long int) var_1)) | (-301797615438009242LL))));
                        }
                    } 
                } 
            }
            for (int i_9 = 3; i_9 < 14; i_9 += 1) 
            {
                var_23 *= ((/* implicit */unsigned long long int) ((int) 1337359032));
                var_24 = ((/* implicit */long long int) ((((unsigned int) -1767970002)) << (((((((/* implicit */_Bool) -707935004)) ? (((/* implicit */int) (short)-8457)) : (((/* implicit */int) (signed char)0)))) + (8482)))));
            }
            for (short i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (short i_11 = 2; i_11 < 15; i_11 += 1) 
                {
                    for (short i_12 = 2; i_12 < 15; i_12 += 3) 
                    {
                        {
                            arr_40 [i_0] [i_1] [i_10] [i_11] [i_12 - 1] = ((/* implicit */unsigned char) var_3);
                            var_25 -= ((/* implicit */long long int) ((((((/* implicit */int) arr_34 [i_0 + 1] [i_1])) / (((/* implicit */int) arr_1 [i_0])))) << (((((/* implicit */int) arr_3 [i_1] [i_0] [8ULL])) + (53)))));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_11 - 2]))) | (var_9)));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_12 + 1] [i_1] [i_0 - 2]))) | (var_6)))));
                            var_28 = ((/* implicit */long long int) (+((((_Bool)1) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)55)))))));
                        }
                    } 
                } 
                var_29 &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54))) / (((unsigned int) 2147483647))));
            }
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((-7405731057651951108LL) + (((/* implicit */long long int) ((/* implicit */int) var_7))))) | (((/* implicit */long long int) max((((((/* implicit */int) (unsigned char)171)) / (((/* implicit */int) arr_32 [2U] [2U])))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)76))) != (var_3))))))))))));
            var_31 = ((max((31LL), (((/* implicit */long long int) (signed char)-110)))) + (var_4));
        }
        var_32 ^= ((/* implicit */long long int) (signed char)1);
        var_33 *= ((/* implicit */short) max((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18156193329674891681ULL))))), ((-(562932773552128ULL))))), (((/* implicit */unsigned long long int) ((unsigned int) ((((var_0) + (9223372036854775807LL))) << (((var_6) - (3710558632U)))))))));
    }
    for (unsigned char i_14 = 1; i_14 < 9; i_14 += 1) 
    {
        var_34 = ((/* implicit */short) ((max((((/* implicit */long long int) (signed char)127)), (var_0))) << (((((((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [(unsigned short)8])), (var_2)))) << (((var_9) - (2905169928162216152LL))))) - (362521)))));
        var_35 ^= ((/* implicit */signed char) (+(((/* implicit */int) (short)0))));
    }
}
