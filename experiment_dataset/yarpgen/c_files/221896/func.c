/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221896
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */_Bool) var_3);
                arr_6 [i_1] = ((/* implicit */unsigned short) arr_5 [i_1]);
                arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)21945))) + (max((-9223372036854775801LL), (-9223372036854775787LL)))));
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
                {
                    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1]))));
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) && ((_Bool)1)));
                    var_13 = ((/* implicit */short) max(((~(((((/* implicit */int) var_1)) * (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) 4201582941U)) > (arr_3 [i_0] [i_0] [i_0]))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 8; i_3 += 3) /* same iter space */
                    {
                        arr_14 [i_1] [i_1] = ((/* implicit */long long int) arr_5 [i_1]);
                        var_14 = ((/* implicit */int) (-(max((((/* implicit */unsigned int) (_Bool)1)), (min((4294963200U), (((/* implicit */unsigned int) (short)-16943))))))));
                    }
                    for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 3) /* same iter space */
                    {
                        var_15 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((((/* implicit */_Bool) arr_10 [i_0] [i_1])) || (arr_2 [i_4]))))))));
                        var_16 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) var_7)), (arr_16 [i_0] [i_0] [i_1])))) != ((-(((/* implicit */int) (_Bool)1))))))), ((+(((/* implicit */int) arr_5 [i_1]))))));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_4))));
                        var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_5)), (arr_9 [i_0] [i_1])))) ? (((/* implicit */int) max((var_5), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) (-(4070U)))) ? ((+(4069U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_3)))))))));
                    }
                }
                for (long long int i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
                {
                    var_19 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((4294963206U) << (((((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (var_3)))) - (136)))))) ^ ((+(-9223372036854775803LL)))));
                    var_20 = ((/* implicit */short) (-((+(arr_3 [i_5] [i_1] [i_0])))));
                    arr_20 [i_0] [i_0] [i_5] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)83))))) : (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_0))))));
                }
                for (unsigned char i_6 = 1; i_6 < 8; i_6 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [3] [i_0] [3] [i_0] [i_0] [i_6 + 4]))) - (arr_4 [i_1] [i_6 + 4] [i_6 + 2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4090U))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (max((var_6), (var_1))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 2; i_8 < 11; i_8 += 2) 
                        {
                            {
                                var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) arr_27 [i_7] [i_1] [i_1] [i_1] [i_1])) : (max(((-(4294963174U))), (((/* implicit */unsigned int) ((arr_24 [i_7] [i_7] [i_7]) - (((/* implicit */int) (short)5273)))))))));
                                var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned char)177)), (4294963174U)));
                            }
                        } 
                    } 
                }
                for (unsigned char i_9 = 1; i_9 < 8; i_9 += 4) /* same iter space */
                {
                    arr_32 [i_0] [i_1] [i_1] [i_9] = ((/* implicit */_Bool) min((min((var_3), (((/* implicit */unsigned char) var_8)))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 16775701427852303941ULL)))))));
                    var_24 = ((/* implicit */unsigned short) max((var_24), (max((var_4), (arr_8 [i_0] [i_1] [(unsigned short)11])))));
                    arr_33 [i_0] [i_1] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((4090U) + (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                }
            }
        } 
    } 
    var_25 |= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-20686)), (4123U)))))))));
}
