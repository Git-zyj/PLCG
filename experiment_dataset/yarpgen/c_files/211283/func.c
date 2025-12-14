/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211283
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */unsigned char) var_9);
        arr_3 [i_0 + 1] &= ((/* implicit */unsigned int) -540344574);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_1])))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1729634963U)) ? (-1324754883) : (2147483647)));
    }
    for (int i_2 = 2; i_2 < 13; i_2 += 4) 
    {
        var_13 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 + 3])) ? (((/* implicit */int) arr_6 [i_2 - 2])) : (((/* implicit */int) arr_6 [i_2 + 3])))))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_2 + 3])) ? (((/* implicit */unsigned long long int) (-(4294967289U)))) : (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_8 [i_2]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5)))))))));
        var_15 = ((/* implicit */unsigned char) 2565332327U);
        var_16 = ((/* implicit */unsigned char) max((((/* implicit */int) var_2)), ((~(((/* implicit */int) min(((unsigned char)45), (((/* implicit */unsigned char) arr_6 [i_2])))))))));
        arr_11 [i_2] = ((/* implicit */unsigned int) arr_6 [i_2]);
    }
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) var_1);
                /* LoopSeq 3 */
                for (signed char i_5 = 2; i_5 < 10; i_5 += 2) 
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned int) (unsigned char)255)))))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2565332327U)) && (((/* implicit */_Bool) 2147483625))));
                }
                for (int i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    /* LoopSeq 3 */
                    for (int i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) var_6);
                        arr_26 [i_3] [i_3] [i_3] [i_3] [(signed char)7] [i_3] = ((/* implicit */int) 15009158056734869345ULL);
                        arr_27 [i_6] [i_6] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) (unsigned char)85))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) 3437586016974682270ULL);
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) 49171754)))))));
                    }
                    for (int i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
                    {
                        var_23 ^= ((/* implicit */unsigned long long int) (~(var_11)));
                        /* LoopSeq 3 */
                        for (unsigned char i_10 = 2; i_10 < 9; i_10 += 3) 
                        {
                            var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1729634969U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) 3437586016974682271ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22)))))))) ? ((~(((unsigned int) var_3)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) 4294967284U)))))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 10147801183279298110ULL)))))));
                            arr_35 [i_3] [(signed char)3] [i_9] [i_9] [i_10] [i_4] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) arr_23 [i_10] [i_10] [i_10 - 1] [i_10 + 2] [i_10 + 1])))));
                            var_26 = ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-913086651) : (((/* implicit */int) (signed char)62))))) ? (((/* implicit */int) min(((unsigned short)53763), (((/* implicit */unsigned short) var_4))))) : (((((/* implicit */int) (unsigned char)250)) ^ (((/* implicit */int) (unsigned char)14))))));
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 10; i_11 += 2) 
                        {
                            arr_38 [i_4] [i_9] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (unsigned short)53780);
                            var_27 = ((/* implicit */unsigned short) max((arr_5 [i_3] [i_9]), (min((var_11), (((/* implicit */unsigned int) (signed char)8))))));
                            var_28 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)248)), (arr_25 [i_3] [i_6] [i_9] [i_11 - 1]))))))) ? (min((min((arr_37 [i_3] [i_4] [i_6]), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), (2565332336U)))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_6 [i_3])), (min((7916506217260732154LL), (((/* implicit */long long int) arr_10 [i_4])))))))));
                            var_29 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((2006564290U) >= (((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (((/* implicit */unsigned char) arr_28 [i_11 - 1] [i_9] [i_6] [i_6] [i_9] [i_3]))))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 467110407U)) ? (-17297955) : (((/* implicit */int) (unsigned short)65528))))), (((15009158056734869367ULL) - (arr_19 [i_11 - 1] [i_9] [i_6] [i_4])))))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 11; i_12 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned char) ((signed char) ((unsigned int) 4294967295U)));
                            var_31 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_10 [i_4]), (((/* implicit */int) arr_21 [i_4])))))));
                        }
                        var_32 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned short) 4294967277U))), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_40 [i_9] [i_6] [i_4] [i_3] [i_3] [i_3]))))), (min((((/* implicit */unsigned long long int) (unsigned char)14)), (17890778288979185123ULL)))))));
                    }
                    arr_41 [i_3] [i_4] [i_6] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_40 [i_6] [i_4] [i_4] [i_4] [i_4] [i_3])) <= (((/* implicit */int) ((((/* implicit */int) var_0)) > (((((/* implicit */int) var_1)) % (((/* implicit */int) (unsigned char)7)))))))));
                    arr_42 [i_6] [i_4] [i_3] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned char)4))))));
                }
                for (unsigned int i_13 = 4; i_13 < 9; i_13 += 3) 
                {
                    arr_45 [i_4] [i_13] [i_13] [i_4] = ((unsigned char) arr_19 [i_3] [i_3] [i_3] [i_3]);
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        arr_50 [4] [i_13] [i_13] [i_13] [i_4] = ((/* implicit */unsigned int) max((max((min(((unsigned short)11772), (arr_24 [i_3] [i_4] [i_4] [i_14]))), (((/* implicit */unsigned short) (unsigned char)4)))), (((/* implicit */unsigned short) var_0))));
                        arr_51 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_47 [i_3] [i_4] [i_13] [i_13] [i_3]))));
                        arr_52 [i_3] [i_4] [i_13] [i_4] [i_13 + 1] [i_14] = ((/* implicit */unsigned long long int) ((int) min(((-(((/* implicit */int) var_6)))), (((/* implicit */int) ((unsigned char) var_2))))));
                        var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((0U) / (((/* implicit */unsigned int) var_5))))) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_3] [i_3] [i_3] [i_3] [i_13] [i_3]))) : (9223372036854775786LL))))))));
                    }
                }
                var_34 -= ((/* implicit */unsigned long long int) (unsigned char)0);
            }
        } 
    } 
    var_35 = max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) ((long long int) var_2))) ? (((((/* implicit */_Bool) 411950569)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)37)))) : (((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (unsigned char)152)))))));
}
