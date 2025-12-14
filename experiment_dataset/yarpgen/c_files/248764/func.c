/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248764
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned int) -5083863609358820546LL);
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) 4095ULL))));
        arr_2 [(short)12] = (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (arr_0 [(unsigned char)3])))) + (((((/* implicit */_Bool) arr_0 [i_0])) ? (-1) : (((/* implicit */int) (short)-1740))))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                arr_11 [i_2] [i_1] = ((/* implicit */short) ((signed char) arr_7 [i_1] [i_3 + 1] [i_3]));
                var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)9163))))) <= (((unsigned int) 5083863609358820563LL))));
                var_14 ^= ((/* implicit */unsigned char) ((arr_1 [i_1]) ? (((/* implicit */int) (short)26488)) : (((/* implicit */int) (signed char)127))));
                arr_12 [(_Bool)1] [(_Bool)1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_1] [i_3 + 1]))));
            }
            for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 2) 
            {
                arr_15 [i_1] [i_2] [i_1] = ((/* implicit */short) (+(max((((arr_7 [i_1] [i_2] [i_4 - 1]) ? (17505265U) : (var_2))), (((((/* implicit */_Bool) 839653590U)) ? (arr_13 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                /* LoopSeq 2 */
                for (unsigned int i_5 = 1; i_5 < 9; i_5 += 2) /* same iter space */
                {
                    arr_19 [i_1] [i_2] [i_1] [i_5] [i_2] = ((/* implicit */short) (+((~(((/* implicit */int) var_6))))));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((unsigned char) (+(arr_10 [(short)2] [i_1] [(short)2])))))));
                    arr_20 [i_1] [i_2] = ((/* implicit */int) ((signed char) ((signed char) -1)));
                }
                for (unsigned int i_6 = 1; i_6 < 9; i_6 += 2) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned short) 5194297652803562322LL);
                    arr_23 [(unsigned short)10] [(unsigned short)10] [i_6] [8] [i_6] [i_6 + 1] |= ((/* implicit */short) arr_17 [2] [i_2] [i_2] [0LL] [i_2]);
                }
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_26 [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) min(((short)25354), (((/* implicit */short) (_Bool)1))))) ? (max((1833470947200682805ULL), (arr_4 [1U] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_2]))))), (((/* implicit */unsigned long long int) ((4343802971352479213LL) < (((/* implicit */long long int) max((((/* implicit */int) (short)-32755)), (-10)))))))));
                var_17 = ((/* implicit */unsigned int) ((12106302830511229874ULL) + (((/* implicit */unsigned long long int) 839653583U))));
            }
            var_18 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 5194297652803562325LL)) ? (0) : (-4)))));
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((min((5194297652803562322LL), (((/* implicit */long long int) (signed char)19)))) * (((/* implicit */long long int) 1950636449U))))) ? (8784797270740340419ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65535))))), (((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [2U] [i_2]))) | ((-9223372036854775807LL - 1LL)))))))));
        }
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))));
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (short i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned long long int) (signed char)-54);
                            var_22 = ((/* implicit */short) -1785046788510496586LL);
                        }
                        for (int i_12 = 0; i_12 < 11; i_12 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_12] [i_10] [2LL] [i_8] [i_1])) ? (-8333259533435169641LL) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_1] [i_8] [i_1]))))))));
                            arr_41 [i_1] = ((/* implicit */short) (-(var_0)));
                        }
                        var_24 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)33))));
                        var_25 = (-9223372036854775807LL - 1LL);
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (long long int i_13 = 1; i_13 < 8; i_13 += 2) /* same iter space */
        {
            arr_44 [i_1] [(signed char)10] = ((/* implicit */short) (+(((unsigned long long int) (+((-9223372036854775807LL - 1LL)))))));
            arr_45 [i_13] [i_1] [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) (signed char)-97)))));
        }
        for (long long int i_14 = 1; i_14 < 8; i_14 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 8333259533435169620LL))))))))));
            arr_50 [7LL] [i_1] [7LL] = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_9 [i_1] [i_1]) >> (((((/* implicit */int) arr_46 [i_1])) + (18860)))))) ? (((/* implicit */long long int) ((int) (_Bool)1))) : (((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */long long int) 3766068069U)) : ((-9223372036854775807LL - 1LL))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_9 [i_1] [i_1]) >> (((((((/* implicit */int) arr_46 [i_1])) + (18860))) - (33647)))))) ? (((/* implicit */long long int) ((int) (_Bool)1))) : (((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */long long int) 3766068069U)) : ((-9223372036854775807LL - 1LL)))))));
        }
    }
    var_27 = ((/* implicit */unsigned int) (short)32759);
    /* LoopNest 2 */
    for (unsigned short i_15 = 2; i_15 < 9; i_15 += 1) 
    {
        for (unsigned char i_16 = 0; i_16 < 10; i_16 += 3) 
        {
            {
                arr_56 [i_15] &= ((/* implicit */unsigned short) (_Bool)0);
                arr_57 [i_15] [i_15 + 1] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((~(var_0))) * (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_4)));
            }
        } 
    } 
}
