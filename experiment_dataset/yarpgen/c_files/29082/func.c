/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29082
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
    for (long long int i_0 = 4; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_19 &= ((/* implicit */int) (_Bool)0);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_6 [1U] = ((/* implicit */short) var_11);
            var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_1]))) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))))) : (min(((-(var_16))), (((unsigned int) 11226811783600979739ULL))))));
        }
        for (int i_2 = 2; i_2 < 8; i_2 += 2) 
        {
            arr_10 [i_2 - 1] = ((/* implicit */short) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-26806)) : (((/* implicit */int) (_Bool)1)))));
            arr_11 [0U] [i_0] [i_2 - 1] &= ((/* implicit */int) var_16);
        }
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+(((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_5 [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
        arr_12 [(unsigned char)1] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        arr_13 [(unsigned char)6] [i_0] = arr_9 [i_0];
    }
    for (long long int i_3 = 4; i_3 < 10; i_3 += 4) /* same iter space */
    {
        arr_16 [i_3] = ((/* implicit */unsigned int) max((((long long int) (signed char)40)), (((/* implicit */long long int) var_7))));
        var_22 = ((/* implicit */short) var_4);
        arr_17 [i_3] = ((/* implicit */unsigned char) ((unsigned long long int) var_0));
    }
    for (long long int i_4 = 4; i_4 < 10; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
        {
            var_23 = (((~(((int) (unsigned short)0)))) >= (((/* implicit */int) ((_Bool) arr_20 [i_4 - 3] [i_4 - 3]))));
            arr_23 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((9691965192818748800ULL) ^ (12239131669187466582ULL)));
            arr_24 [i_5] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_22 [i_5])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_15 [i_4])))) : ((+(-637087302))))) >> (((((/* implicit */int) arr_14 [i_4])) - (25671)))));
        }
        for (long long int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 9691965192818748798ULL)) ? (1015145845144207223LL) : (((/* implicit */long long int) -990317348)))), (((/* implicit */long long int) arr_25 [i_6]))));
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 4) 
            {
                var_25 &= ((((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((4294967292U) - (4294967263U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(unsigned char)5] [i_6] [(unsigned char)5]))) : (arr_5 [i_7 - 1] [i_4 + 1]))) : (((/* implicit */unsigned int) (~(((int) (_Bool)1))))));
                arr_33 [i_6] [(_Bool)1] [i_6] [(unsigned char)7] = ((/* implicit */short) ((arr_4 [i_4] [i_4] [2]) << ((((((_Bool)0) ? (((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))))) - (156)))));
            }
            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_14)) * (arr_18 [i_4 - 3])))) ^ (min((((/* implicit */unsigned long long int) arr_18 [i_4 - 1])), (var_8)))));
                arr_38 [i_6] [i_6] [(signed char)9] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned char) arr_31 [i_4])), ((unsigned char)14))))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_4 - 4])), (var_1))))));
                var_27 = ((/* implicit */signed char) (-((~(((var_16) + (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                /* LoopSeq 2 */
                for (signed char i_9 = 1; i_9 < 10; i_9 += 2) 
                {
                    var_28 ^= ((/* implicit */signed char) var_3);
                    var_29 = ((/* implicit */_Bool) 1073741760U);
                    arr_43 [i_6] [i_6] = ((/* implicit */unsigned int) var_18);
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_30 = ((/* implicit */unsigned char) max((((arr_37 [i_4 - 4] [i_6] [i_4 - 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-87))) : (3399479754U))), (((/* implicit */unsigned int) min((arr_14 [i_4 - 4]), (((/* implicit */short) (_Bool)1)))))));
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned char) arr_37 [i_4] [i_6] [(signed char)3])), (var_6))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-25))) : (var_15))))) : (((/* implicit */int) ((short) var_0)))));
                }
                arr_48 [i_6] [i_6] [i_6] [i_8] = ((/* implicit */unsigned int) max((((int) var_0)), (((/* implicit */int) ((unsigned short) arr_32 [0ULL] [0ULL] [i_4 - 3] [(unsigned char)7])))));
            }
            arr_49 [i_6] [i_6] = min((((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) arr_32 [i_4] [i_6] [i_4] [i_6])))) + (((/* implicit */int) (signed char)-22)))), (((/* implicit */int) arr_8 [i_4] [i_4] [i_4])));
            arr_50 [i_6] = ((/* implicit */unsigned int) max((arr_0 [i_4] [i_6]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_6] [i_6] [(short)9] [i_4] [i_6])) ? (((/* implicit */int) arr_35 [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) var_3)))))));
        }
        arr_51 [i_4 - 1] = ((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned long long int) arr_40 [i_4])), (max((var_9), (((/* implicit */unsigned long long int) arr_20 [6] [6])))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_11 = 0; i_11 < 22; i_11 += 1) 
    {
        for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 3) 
        {
            for (unsigned char i_13 = 0; i_13 < 22; i_13 += 4) 
            {
                {
                    var_32 = ((/* implicit */_Bool) arr_53 [i_11]);
                    var_33 = ((/* implicit */short) min((var_33), (((short) min((((signed char) (_Bool)1)), (((signed char) var_2)))))));
                    arr_59 [i_12] [i_12] [(unsigned short)20] [(unsigned short)20] = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned int) (unsigned char)33))) ? (((/* implicit */unsigned long long int) var_7)) : ((~(var_10))))) & (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_53 [i_11])) ? (((/* implicit */int) (unsigned char)241)) : (var_4)))), (((((/* implicit */_Bool) arr_58 [i_11] [i_11] [i_11])) ? (arr_55 [i_11] [i_12]) : (((/* implicit */unsigned long long int) var_12))))))));
                    /* LoopSeq 1 */
                    for (signed char i_14 = 3; i_14 < 21; i_14 += 2) 
                    {
                        var_34 -= ((/* implicit */long long int) ((((/* implicit */int) (signed char)-1)) >= (((/* implicit */int) (signed char)6))));
                        arr_63 [i_11] [i_11] [i_11] [i_12] [i_11] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)21))));
                        var_35 += ((/* implicit */short) var_6);
                        var_36 -= ((/* implicit */unsigned int) var_9);
                    }
                }
            } 
        } 
    } 
}
