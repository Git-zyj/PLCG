/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30430
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = (+((-((~(((/* implicit */int) arr_2 [13U] [6U] [(signed char)0])))))));
                                var_21 = ((/* implicit */unsigned short) max((0ULL), (((/* implicit */unsigned long long int) 1732895623))));
                                var_22 ^= ((/* implicit */unsigned short) max((0ULL), (((/* implicit */unsigned long long int) (signed char)75))));
                                var_23 -= ((/* implicit */signed char) (~(((/* implicit */int) arr_5 [1LL] [(_Bool)1]))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [5]))) * (max((0ULL), (((/* implicit */unsigned long long int) var_17))))))));
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    var_25 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(0ULL))))))) < (((/* implicit */int) var_14))));
                    var_26 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)75)))));
                }
                /* vectorizable */
                for (short i_6 = 2; i_6 < 13; i_6 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_7 = 3; i_7 < 14; i_7 += 1) 
                    {
                        arr_20 [i_6] [i_6] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
                        arr_21 [(unsigned char)7] [i_6] = ((/* implicit */long long int) ((short) (signed char)(-127 - 1)));
                        arr_22 [(short)3] [(signed char)10] [(unsigned char)12] [(_Bool)1] [i_6] [6ULL] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-76))));
                        arr_23 [(_Bool)1] [(_Bool)1] [4U] [i_6] [(_Bool)1] = ((/* implicit */unsigned int) (unsigned char)0);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) arr_15 [(unsigned char)0] [3LL] [2U]))));
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)149)) + (((/* implicit */int) var_11)))) * (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_18)))))))));
                        var_29 = ((/* implicit */int) var_15);
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_29 [13LL] [3] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) arr_26 [(signed char)4] [14LL] [(unsigned short)10] [7LL] [14U])) * ((-(((/* implicit */int) var_18))))));
                        var_30 += ((/* implicit */_Bool) (~(((unsigned int) (-2147483647 - 1)))));
                        var_31 = ((/* implicit */unsigned int) ((unsigned short) var_10));
                        var_32 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned char)187)) / (((/* implicit */int) (unsigned char)69))))));
                    }
                    var_33 = ((/* implicit */long long int) ((((arr_16 [1] [i_6] [i_6] [(short)3]) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                    arr_30 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) 2147483647)) - (((unsigned int) (unsigned char)255))));
                    var_34 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) != (((((/* implicit */int) arr_14 [(signed char)14] [(_Bool)1] [(_Bool)1])) & (((/* implicit */int) arr_5 [(_Bool)1] [9LL]))))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (signed char i_11 = 0; i_11 < 15; i_11 += 2) 
                        {
                            {
                                arr_38 [i_6] [(_Bool)1] = ((/* implicit */int) ((((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) var_17))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) (short)0))))))));
                                arr_39 [i_6] [(short)8] [6U] [4U] [(short)1] [(_Bool)1] [i_6] = ((/* implicit */int) arr_2 [2LL] [(short)3] [(signed char)1]);
                            }
                        } 
                    } 
                }
                var_35 ^= ((/* implicit */short) (~(max((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))))));
            }
        } 
    } 
    var_36 = ((/* implicit */signed char) max((((/* implicit */int) (((~(((/* implicit */int) var_6)))) != (((((/* implicit */int) (signed char)-76)) & (((/* implicit */int) var_6))))))), ((~(((-1409532366) | (((/* implicit */int) var_17))))))));
    var_37 = ((/* implicit */int) (unsigned short)65535);
}
