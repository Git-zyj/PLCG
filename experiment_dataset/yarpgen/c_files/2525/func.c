/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2525
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
    var_17 |= ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) ((576460752303390720LL) << (((/* implicit */int) min(((unsigned char)250), ((unsigned char)3)))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_18 ^= max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned char)253))))), (min((((/* implicit */unsigned int) (signed char)-13)), (0U))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (-(var_0)));
        arr_4 [(signed char)11] = ((/* implicit */long long int) (((~((~(arr_0 [i_0 + 4]))))) == (((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) >= (534773760U))))));
    }
    for (unsigned short i_1 = 2; i_1 < 12; i_1 += 1) 
    {
        arr_7 [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned long long int) (unsigned char)0);
        var_19 = ((/* implicit */unsigned short) min((var_19), (var_9)));
    }
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                {
                    arr_17 [i_3] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_11 [(unsigned char)17])), (max((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) | ((-2147483647 - 1))))), (4294967280U)))));
                    var_20 = ((/* implicit */unsigned short) min((2147483647), (0)));
                    /* LoopSeq 2 */
                    for (signed char i_5 = 1; i_5 < 18; i_5 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned int) (unsigned short)2);
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_2] [i_3])) ? ((-(max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (4294967291U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_2]))))))));
                        var_23 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (unsigned char)19))))));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 1; i_6 < 18; i_6 += 1) /* same iter space */
                    {
                        arr_25 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) + (((/* implicit */int) (unsigned char)253))))) || (((/* implicit */_Bool) arr_14 [i_3] [i_3]))));
                        var_24 = ((/* implicit */signed char) (~(4294967295U)));
                        var_25 += ((/* implicit */signed char) (+((-(((/* implicit */int) (unsigned short)6))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            var_26 &= ((/* implicit */signed char) (unsigned short)6);
                            arr_28 [i_3] = (((!(((/* implicit */_Bool) var_0)))) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) -2147483638)));
                        }
                    }
                    arr_29 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((4294967289U) - (((/* implicit */unsigned int) -5))))) / (((((/* implicit */long long int) (+(((/* implicit */int) arr_14 [(signed char)2] [i_3]))))) + (((var_8) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))))));
                }
            } 
        } 
        arr_30 [i_2] [i_2] = ((/* implicit */unsigned long long int) max((2147483647), (((/* implicit */int) (unsigned char)9))));
        arr_31 [i_2] [i_2] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_4))))));
    }
    for (unsigned char i_8 = 3; i_8 < 18; i_8 += 3) 
    {
        var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1U))));
        arr_34 [i_8] [i_8 - 2] = ((/* implicit */signed char) ((var_11) > (((/* implicit */unsigned int) ((/* implicit */int) min((var_15), (((/* implicit */unsigned short) ((var_3) > (((/* implicit */int) var_13)))))))))));
    }
}
