/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240835
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((var_10), (((unsigned int) 2892981542U))));
                var_21 = ((max((((var_6) << (((var_14) - (314652053U))))), (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-46)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)59781)) - (59758)))))))) | (((arr_1 [i_0 - 1] [i_1]) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)6)) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775780LL))) + (34LL)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 3; i_2 < 20; i_2 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            arr_11 [i_2] = ((/* implicit */signed char) arr_9 [i_3] [i_3]);
            var_22 = ((/* implicit */signed char) 4275138101U);
        }
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                arr_18 [i_5 - 1] [i_5 - 1] [i_5] [i_5] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) + (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5734))) : (((((/* implicit */_Bool) 9223372036854775803LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)82))) : (-9223372036854775799LL))))), (((/* implicit */long long int) 1067006887))));
                var_23 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
            }
            for (unsigned long long int i_6 = 3; i_6 < 20; i_6 += 2) 
            {
                arr_21 [i_2] [i_2] [i_4] [i_6 - 3] |= ((/* implicit */int) max((((/* implicit */unsigned long long int) 9223372036854775799LL)), (((unsigned long long int) arr_7 [i_2 - 3] [i_6 + 1] [i_6 - 1]))));
                /* LoopSeq 2 */
                for (unsigned short i_7 = 1; i_7 < 20; i_7 += 1) /* same iter space */
                {
                    var_24 = ((((unsigned int) var_3)) * (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_2 - 3] [(signed char)13]))));
                    var_25 = arr_6 [i_6 + 1];
                }
                /* vectorizable */
                for (unsigned short i_8 = 1; i_8 < 20; i_8 += 1) /* same iter space */
                {
                    var_26 = var_3;
                    var_27 = ((/* implicit */unsigned int) arr_23 [i_8] [i_4] [i_6 + 1] [i_8]);
                }
                arr_28 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_16 [i_2] [i_6]);
            }
            /* LoopSeq 1 */
            for (int i_9 = 1; i_9 < 21; i_9 += 1) 
            {
                var_28 ^= arr_12 [(_Bool)1] [i_4] [i_9 - 1];
                arr_33 [3U] [i_4] [i_9] &= ((/* implicit */unsigned char) ((arr_32 [i_9 + 1] [i_4] [16U]) * (((((/* implicit */int) (unsigned short)59802)) >> (((9223372036854775799LL) - (9223372036854775768LL)))))));
                /* LoopNest 2 */
                for (unsigned int i_10 = 2; i_10 < 20; i_10 += 3) 
                {
                    for (unsigned char i_11 = 2; i_11 < 21; i_11 += 3) 
                    {
                        {
                            arr_39 [i_2] [4LL] |= ((/* implicit */unsigned int) ((max((((arr_13 [i_10 - 1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))))), (((var_19) ? (6065291686449273965LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)36))))))) << ((((((-(((/* implicit */int) (signed char)16)))) + (52))) - (34)))));
                            arr_40 [(unsigned char)3] [i_10 - 1] [i_9] [i_4] [i_2] = ((/* implicit */_Bool) ((max((((/* implicit */int) arr_17 [i_2 - 3] [i_10 + 1])), (arr_32 [i_10 + 1] [i_9 - 1] [i_4]))) & (((/* implicit */int) (unsigned char)253))));
                            var_29 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_2] [4])) ? (14536788095673139810ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 9223372036854775807LL))))));
                            var_30 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_2] [i_2 - 3] [i_2] [i_2]))) : (((long long int) 10U)))) <= (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))));
                            arr_41 [1LL] [i_4] [i_9 - 1] [i_10] [i_11] = ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)11)))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_2] [i_2] [16LL] [i_2]))) == (arr_24 [i_2] [i_2 + 2] [9U] [i_2 + 2] [i_2]))))))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                for (int i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    {
                        arr_47 [i_13] = ((/* implicit */int) max((var_9), (((/* implicit */unsigned int) var_16))));
                        arr_48 [i_2] [i_4] [(signed char)1] [(_Bool)1] [i_13] = ((/* implicit */_Bool) ((unsigned char) arr_35 [(unsigned char)6] [i_4] [(signed char)9] [i_12]));
                        arr_49 [(signed char)2] [i_4] [i_4] [i_12] [i_13] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_43 [i_2])))) | (var_13)))) ? (1857858216U) : (max((((/* implicit */unsigned int) (_Bool)0)), (3462888915U)))));
                        var_31 = ((/* implicit */unsigned int) ((((((((((/* implicit */_Bool) 3331920998U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_6)))) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-114))))) + (9223372036854775807LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_2] [i_4] [i_2 - 1])))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 22; i_14 += 3) 
        {
            for (long long int i_15 = 1; i_15 < 18; i_15 += 4) 
            {
                {
                    var_32 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned int) ((long long int) (signed char)-38)))), (((((unsigned long long int) (unsigned char)138)) & (((/* implicit */unsigned long long int) arr_46 [i_2] [i_14] [i_15 + 2] [i_15]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 2; i_16 < 21; i_16 += 4) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_60 [i_17] [i_15 + 3] [i_2] = ((/* implicit */unsigned int) arr_51 [i_16 + 1]);
                                var_33 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_17)) >> (((122507958U) - (122507945U)))))))) ? (max((((arr_59 [i_2] [(unsigned char)0] [i_16] [i_17]) & (arr_52 [10LL] [i_14] [i_16]))), (((/* implicit */unsigned int) arr_36 [i_16 - 1])))) : (((((/* implicit */_Bool) (unsigned short)5726)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_34 = arr_26 [i_2] [i_2 + 1] [(_Bool)1] [i_2 - 1] [i_2];
    }
    var_35 += ((/* implicit */signed char) max((var_3), (((/* implicit */unsigned long long int) var_13))));
    var_36 = ((/* implicit */unsigned int) min((var_36), (((((((/* implicit */_Bool) ((13U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59072)))))) ? (max((3760422985U), (((/* implicit */unsigned int) var_17)))) : (((/* implicit */unsigned int) ((int) (_Bool)1))))) ^ (var_7)))));
}
