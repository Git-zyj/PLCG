/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224553
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
    var_19 = ((/* implicit */short) var_10);
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? ((~(var_5))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)19617)) ? (var_18) : (((/* implicit */int) var_0))))) : (((((/* implicit */long long int) -134217728)) ^ (var_5)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) (+(((var_11) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) arr_1 [i_0]))))));
        var_22 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_0]))));
        var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_1 [i_0])))) % (((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (unsigned short)19617))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */unsigned int) -134217728)) : (arr_2 [i_1] [i_1])))) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) ((var_11) || (((/* implicit */_Bool) arr_4 [11LL])))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                {
                    var_25 ^= (-(arr_10 [i_1] [i_2]));
                    var_26 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1344910239793717871LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_4 [i_1]))))) && ((!(((/* implicit */_Bool) var_10))))));
                    arr_11 [i_1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) arr_9 [i_1] [(_Bool)1] [i_3]);
                }
            } 
        } 
        var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1])) || (arr_7 [i_1] [i_1] [i_1])));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) arr_4 [i_4])), (arr_6 [i_4] [i_4] [i_4]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) arr_4 [i_4])))))));
        var_29 *= ((/* implicit */signed char) max(((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_4 [i_4]), (((/* implicit */unsigned char) var_8)))))) : (arr_6 [i_4] [i_4] [i_4]))), (((/* implicit */unsigned int) ((int) arr_7 [(unsigned short)3] [(short)2] [5])))));
        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4]))) == (134217727U)))), (((((/* implicit */long long int) var_3)) - (var_5))))) << (((((arr_3 [i_4]) ? (max((var_4), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) var_17)))) - (604532802U))))))));
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((134217727U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)58))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)169))) : (2263815165U)))) || (((/* implicit */_Bool) var_6)))))))))));
        var_32 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -9223372036854775797LL)) || (((/* implicit */_Bool) (signed char)-40))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_13 [i_5])), (-1344910239793717878LL)))) || (((/* implicit */_Bool) arr_13 [i_5]))))) + (((/* implicit */int) ((arr_2 [12U] [i_5]) <= (((/* implicit */unsigned int) var_2)))))));
        var_34 &= ((/* implicit */unsigned char) var_4);
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            var_35 = ((/* implicit */signed char) var_14);
            /* LoopSeq 2 */
            for (unsigned int i_7 = 1; i_7 < 12; i_7 += 1) 
            {
                var_36 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (_Bool)0)), (-1344910239793717880LL)));
                var_37 = ((/* implicit */_Bool) 9223372036854775796LL);
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                /* LoopSeq 4 */
                for (int i_9 = 0; i_9 < 14; i_9 += 2) /* same iter space */
                {
                    arr_29 [i_9] [(unsigned short)10] [i_9] [1U] [3] = ((/* implicit */short) arr_25 [i_8] [i_6]);
                    var_38 ^= ((/* implicit */unsigned short) 262143);
                }
                for (int i_10 = 0; i_10 < 14; i_10 += 2) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned short) var_7);
                    var_40 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */long long int) 4160749557U)) >= (9223372036854775796LL))) && ((!(((/* implicit */_Bool) var_0)))))))) <= (arr_2 [i_10] [(unsigned short)2])));
                    arr_33 [i_5] [i_5] [i_5] [i_5] |= ((/* implicit */unsigned short) (-(min((min((4374586712321199948LL), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)172)))))))));
                }
                for (int i_11 = 0; i_11 < 14; i_11 += 2) /* same iter space */
                {
                    var_41 ^= ((/* implicit */unsigned int) ((unsigned char) (signed char)-71));
                    /* LoopSeq 1 */
                    for (short i_12 = 1; i_12 < 13; i_12 += 4) 
                    {
                        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((2147483647), (((/* implicit */int) var_13)))) >> (((((/* implicit */int) var_16)) - (106)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_12 - 1] [i_12] [i_12] [i_12 + 1] [i_12 - 1])) ? (9223372036854775775LL) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_12] [(unsigned char)3] [i_12] [i_12] [i_12 - 1])))))) : (18446744073709551615ULL)));
                        var_43 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 134217703U))));
                    }
                }
                for (unsigned char i_13 = 4; i_13 < 11; i_13 += 2) 
                {
                    var_44 = ((/* implicit */short) max((((/* implicit */long long int) min((((/* implicit */unsigned int) 1372648859)), (arr_2 [i_13] [(short)10])))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_13 + 2] [i_13] [i_13 - 1] [i_13 + 1]))) : (((((/* implicit */_Bool) -1344910239793717896LL)) ? (9223372036854775776LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29964)))))))));
                    arr_43 [i_5] [(_Bool)1] [i_5] [7] &= ((/* implicit */signed char) max((((((/* implicit */_Bool) 134217712)) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((((/* implicit */_Bool) 134217740U)) && (((/* implicit */_Bool) arr_39 [i_5] [i_5])))) || (((/* implicit */_Bool) min((arr_34 [i_8] [i_6]), (((/* implicit */unsigned int) var_9))))))))));
                    arr_44 [i_5] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-40)) ? (67108864) : (((/* implicit */int) arr_32 [i_5] [(_Bool)1] [i_13] [(_Bool)1])))))))));
                    arr_45 [i_5] [i_6] [i_8] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_22 [i_13 + 1] [i_13] [i_13] [i_8]) | (arr_22 [i_13 + 3] [i_13] [i_13] [i_5])))) || (((/* implicit */_Bool) (~(arr_6 [(_Bool)1] [i_5] [i_5]))))));
                }
                /* LoopSeq 4 */
                for (unsigned char i_14 = 0; i_14 < 14; i_14 += 3) 
                {
                    var_45 = max((((/* implicit */unsigned short) ((((var_4) >> (((605414174U) - (605414165U))))) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)41)))))), ((unsigned short)54606));
                    var_46 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_5] [i_6] [i_8] [i_14] [(_Bool)1])))))));
                    var_47 &= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_4 [i_5]))));
                    /* LoopSeq 1 */
                    for (long long int i_15 = 0; i_15 < 14; i_15 += 3) 
                    {
                        var_48 ^= ((/* implicit */signed char) arr_8 [i_5] [i_5] [(short)5] [i_5]);
                        var_49 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned int) arr_48 [i_5]))), (-1344910239793717888LL)));
                    }
                    arr_51 [i_6] [i_6] [8ULL] [i_14] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) var_16)))));
                }
                /* vectorizable */
                for (unsigned int i_16 = 0; i_16 < 14; i_16 += 3) /* same iter space */
                {
                    arr_55 [i_16] [i_8] = ((/* implicit */short) (((-(((/* implicit */int) var_13)))) != (((/* implicit */int) arr_9 [8U] [i_8] [i_16]))));
                    var_50 = ((/* implicit */unsigned int) max((var_50), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775796LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)75))) : (1344910239793717875LL)))))))));
                }
                for (unsigned int i_17 = 0; i_17 < 14; i_17 += 3) /* same iter space */
                {
                    var_51 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -9223372036854775799LL)) ? (-540541994) : (((/* implicit */int) (_Bool)1))))))) | (((arr_37 [i_5] [i_6] [i_8] [i_17] [i_17]) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) var_11)), ((signed char)-74)))))))));
                    var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_3 [i_5]))) ? ((-(((/* implicit */int) arr_3 [i_6])))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_50 [i_6] [i_6] [(_Bool)1])) : (((/* implicit */int) arr_50 [i_6] [i_6] [i_8])))))))));
                }
                for (signed char i_18 = 1; i_18 < 13; i_18 += 3) 
                {
                    arr_61 [i_8] [(unsigned char)3] [i_8] [9LL] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) min((-2741230850188772638LL), (((/* implicit */long long int) arr_25 [i_6] [i_8]))))) ? (((((/* implicit */int) var_16)) ^ (var_17))) : (((/* implicit */int) min(((unsigned short)0), (arr_5 [i_5] [11])))))));
                    var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) min((((/* implicit */int) arr_14 [i_6])), (((var_17) & (((((/* implicit */int) arr_26 [2] [(_Bool)1] [i_8] [(_Bool)1])) >> (((/* implicit */int) arr_16 [(short)0])))))))))));
                    var_54 -= ((/* implicit */signed char) max((((/* implicit */unsigned int) max((arr_54 [2ULL] [(signed char)6] [i_18 - 1] [i_18 - 1]), (arr_54 [i_8] [(unsigned short)10] [i_18 - 1] [i_18])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_3)))) ? (arr_6 [i_18] [i_18 + 1] [i_18 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) < (arr_2 [(unsigned short)8] [0])))))))));
                }
            }
        }
        var_55 = ((/* implicit */unsigned short) max((var_55), (((/* implicit */unsigned short) ((((/* implicit */int) max(((unsigned short)59703), (((/* implicit */unsigned short) arr_41 [i_5] [i_5]))))) | (((((/* implicit */int) arr_26 [i_5] [i_5] [i_5] [i_5])) ^ (((/* implicit */int) arr_41 [i_5] [(unsigned short)4])))))))));
    }
}
