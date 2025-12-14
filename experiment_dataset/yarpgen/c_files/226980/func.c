/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226980
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
    var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) ((var_2) ? (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))), (var_9))) : (((max((((/* implicit */unsigned long long int) var_1)), (36026597995708416ULL))) + (max((18410717475713843199ULL), (36026597995708416ULL))))))))));
    var_11 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) ((0ULL) <= (((/* implicit */unsigned long long int) var_6)))))) : (var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((18410717475713843172ULL), (((/* implicit */unsigned long long int) var_6)))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_7), (var_7))))) > (var_9))))));
    var_12 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_1)))))) * (((((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_2))))) << (((/* implicit */int) min((var_4), (var_3))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) max((18410717475713843208ULL), (((/* implicit */unsigned long long int) (signed char)0))))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 2]))))));
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) -795064992);
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_5)) > (14079911255414243185ULL)))), (((((/* implicit */_Bool) 1955691329U)) ? (18208256879543571165ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)208)))))))) ? (((/* implicit */long long int) var_8)) : (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))) % (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))))));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_1))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_4))));
                    var_16 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -795064992)) ? (((/* implicit */unsigned long long int) 3967580464U)) : (18410717475713843172ULL))) * (((/* implicit */unsigned long long int) ((int) 7U)))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    var_17 -= ((/* implicit */int) max((((unsigned int) ((((/* implicit */_Bool) 374727036U)) && (((/* implicit */_Bool) arr_13 [i_0] [i_0]))))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)190)))), (((/* implicit */int) (_Bool)1)))))));
                    var_18 = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) 18446744073709551607ULL)) ? (393469585469386531ULL) : (((/* implicit */unsigned long long int) 0U)))), (((/* implicit */unsigned long long int) ((var_2) ? (arr_2 [i_4] [i_4]) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))) <= (((/* implicit */unsigned long long int) ((var_8) << (((((((((/* implicit */int) arr_12 [i_0])) + (2147483647))) << (((((/* implicit */int) var_3)) - (69))))) - (2147483516))))))))) : (((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) 18446744073709551607ULL)) ? (393469585469386531ULL) : (((/* implicit */unsigned long long int) 0U)))), (((/* implicit */unsigned long long int) ((var_2) ? (arr_2 [i_4] [i_4]) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))) <= (((/* implicit */unsigned long long int) ((var_8) << (((((((((((((/* implicit */int) arr_12 [i_0])) - (2147483647))) + (2147483647))) << (((((/* implicit */int) var_3)) - (69))))) - (2147483516))) + (2147483443)))))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_19 = ((/* implicit */unsigned long long int) (unsigned char)63);
                    var_20 = ((/* implicit */long long int) 16843704621148891681ULL);
                    var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -2121645604)) | (var_8)))) : ((-(arr_8 [i_0] [i_0] [i_0]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) == (var_0))))) >= (var_1)))))));
                }
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_6 = 4; i_6 < 11; i_6 += 4) 
    {
        for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned int) min((var_23), (var_6)));
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        {
                            var_24 &= ((/* implicit */long long int) (unsigned char)0);
                            var_25 ^= ((/* implicit */unsigned long long int) 3920240260U);
                            arr_24 [i_7] [i_6] [i_6] [i_6] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 25ULL)))) ? (((/* implicit */int) arr_19 [i_7])) : (((((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_6])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_3))))))), ((~(((((/* implicit */_Bool) -6439813750520866128LL)) ? (238487194165980451ULL) : (((/* implicit */unsigned long long int) 1920724729308500456LL))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
