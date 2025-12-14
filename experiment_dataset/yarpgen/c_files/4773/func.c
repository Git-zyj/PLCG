/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4773
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) var_2)) & (var_7)))))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)178))))), (min((((/* implicit */int) (unsigned char)105)), (var_7))))) : (max(((~(((/* implicit */int) var_12)))), (((/* implicit */int) var_8)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) (unsigned short)6176)))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 - 1])) ? (arr_6 [i_0 - 2] [i_0 - 1]) : (arr_6 [i_0 - 1] [i_0 - 2])));
            arr_7 [i_0] = ((/* implicit */long long int) var_7);
            var_18 = ((/* implicit */long long int) ((short) (unsigned char)247));
        }
        for (long long int i_2 = 3; i_2 < 18; i_2 += 3) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((short) var_4)))))) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6176))) : (var_10)))));
            arr_11 [i_2] [i_0 + 1] [i_2] = ((/* implicit */short) ((((((/* implicit */long long int) var_7)) + (arr_6 [i_0 + 1] [i_2 - 1]))) + (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_0 + 1] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
            var_20 = ((/* implicit */long long int) (-(max(((~(((/* implicit */int) var_12)))), ((-(((/* implicit */int) arr_0 [i_0] [i_0]))))))));
            var_21 = ((/* implicit */unsigned char) arr_1 [i_2]);
        }
        for (unsigned short i_3 = 2; i_3 < 19; i_3 += 1) 
        {
            var_22 ^= ((/* implicit */long long int) ((unsigned short) (unsigned char)77));
            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)59362)))))));
            var_24 ^= ((/* implicit */unsigned short) max((max((((/* implicit */int) var_5)), (var_11))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) 2933433046U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))))));
        }
        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                arr_20 [i_0] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned char)198)), (1421526906U)));
                arr_21 [i_0] [i_0] = ((/* implicit */unsigned int) min((9223372036854775807LL), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) var_13)))))));
                /* LoopSeq 4 */
                for (short i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                {
                    arr_24 [i_0] [i_0 - 2] [i_0 + 1] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_14 [i_0 - 2] [i_0 - 3])) ^ (((/* implicit */int) arr_15 [i_6] [i_6]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 4; i_7 < 18; i_7 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min(((-(((/* implicit */int) var_14)))), (((/* implicit */int) var_6))))), ((-(arr_1 [i_0 - 1])))));
                        var_26 |= ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) ((9223372036854775779LL) <= (((/* implicit */long long int) var_9)))))) % (2048U)))));
                        var_27 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned short)6176)) ? (((/* implicit */long long int) min((((/* implicit */int) var_2)), (var_11)))) : ((~(-9223372036854775777LL))))), (((/* implicit */long long int) (((-(arr_19 [i_7] [i_6] [i_4]))) < (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_4)), ((unsigned char)54))))))))));
                        var_28 &= ((/* implicit */unsigned char) arr_14 [i_5] [i_7 - 4]);
                    }
                    var_29 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned char)180)))) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)4095)), ((unsigned short)63733))))))), (2933433077U)));
                }
                for (short i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
                {
                    arr_32 [i_0] [i_5] [i_4] [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32767))) == (3509674382144805240LL)));
                    var_30 &= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((2276391044U) == (((/* implicit */unsigned int) ((/* implicit */int) ((-9223372036854775791LL) != (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))))))), (((long long int) min((var_13), (((/* implicit */unsigned short) (signed char)81)))))));
                }
                for (unsigned char i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) : (max((((/* implicit */unsigned int) (unsigned char)1)), (var_10)))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-23903)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (579887289U))) % (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))))));
                    arr_35 [i_9] [i_4] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-32755))));
                    var_32 = ((/* implicit */int) ((arr_13 [i_0] [i_5] [i_9]) == ((~(((((/* implicit */int) (unsigned char)180)) >> (((((/* implicit */int) var_14)) + (22)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_10 = 4; i_10 < 18; i_10 += 1) 
                    {
                        var_33 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)178)) != (var_7)));
                        arr_39 [i_0] [i_9] [i_5] [i_9] [i_9] [i_10 - 1] [i_10 - 1] = ((/* implicit */short) ((arr_13 [i_5] [i_9] [i_10]) < (((/* implicit */int) (unsigned short)35829))));
                    }
                    var_34 = ((/* implicit */signed char) min((864691128455135232LL), (((/* implicit */long long int) (unsigned char)78))));
                }
                for (short i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    var_35 |= ((/* implicit */long long int) max(((short)-132), ((short)32760)));
                    var_36 |= ((/* implicit */unsigned char) var_12);
                }
                var_37 = ((/* implicit */int) max(((-(1430292543U))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)0)), (var_13))))));
                var_38 -= ((/* implicit */long long int) var_12);
            }
            var_39 = ((/* implicit */signed char) ((long long int) min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */int) var_3)) == (var_9)))))));
            var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((unsigned short) var_6)))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_12 = 3; i_12 < 18; i_12 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_13 = 2; i_13 < 19; i_13 += 3) 
            {
                arr_46 [i_0] [i_0] [i_13 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 3910884853U)) : (((((/* implicit */_Bool) (short)9668)) ? (9223372036854775779LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                arr_47 [i_0 - 2] [i_12] [i_13] = ((/* implicit */unsigned short) ((-9223372036854775793LL) + (((/* implicit */long long int) arr_1 [i_0 - 1]))));
            }
            for (long long int i_14 = 0; i_14 < 20; i_14 += 1) 
            {
                var_41 = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) var_5)))));
                var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_26 [0LL] [i_14] [i_12] [0LL])) : (var_7))))));
            }
            arr_50 [i_0] [i_0 - 2] [i_12] = ((/* implicit */unsigned short) -1333984032);
        }
        arr_51 [i_0 - 1] [i_0] &= ((/* implicit */_Bool) ((short) ((unsigned char) (_Bool)1)));
    }
    var_43 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_0)) ? (2510956620U) : (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))))) != (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
    /* LoopSeq 1 */
    for (unsigned char i_15 = 0; i_15 < 10; i_15 += 3) 
    {
        arr_54 [i_15] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) > (max((((/* implicit */long long int) (~(((/* implicit */int) var_4))))), (min((arr_41 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]), (((/* implicit */long long int) var_9))))))));
        arr_55 [i_15] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) max((2721996297U), (((/* implicit */unsigned int) var_9))))), (-9223372036854775793LL))), (((/* implicit */long long int) min((var_9), (((/* implicit */int) (short)9655)))))));
    }
}
