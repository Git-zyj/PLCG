/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222660
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 8; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 |= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [i_0])) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_3] [(short)4])))))) ? ((~(((/* implicit */int) arr_7 [6U] [i_1] [i_1] [i_3])))) : ((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 2] [i_0])))))));
                            arr_9 [i_0] [i_1] [i_2 + 3] [i_0] [i_2 - 2] [(signed char)7] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (unsigned short)14764))));
                            arr_10 [i_0] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */unsigned long long int) max((min((arr_6 [i_0 - 1] [i_0 - 1]), (arr_6 [10ULL] [i_0 - 1]))), (((/* implicit */unsigned int) min(((unsigned short)14748), (((/* implicit */unsigned short) (signed char)-22)))))));
                            var_16 = ((/* implicit */signed char) max((var_16), (var_6)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
    /* LoopNest 3 */
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        for (short i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                {
                    var_18 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_12 [i_6])))) != (((arr_15 [i_6] [i_5]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))))) % (var_11)));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 4; i_7 < 22; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            {
                                arr_22 [i_4] [i_4] [i_4] [i_4] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) arr_16 [i_4] [i_4] [i_4])))))) ? (((/* implicit */int) arr_16 [(_Bool)1] [i_5] [(unsigned char)3])) : ((+(((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (short)-2918)) : (((/* implicit */int) (signed char)33))))))));
                                var_19 *= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-7)), ((unsigned short)32392))))))) < (((/* implicit */int) arr_21 [i_4] [i_8] [i_6] [i_4] [i_4]))));
                                var_20 -= ((/* implicit */long long int) 4193663925U);
                            }
                        } 
                    } 
                    var_21 |= ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_17 [i_4] [i_4] [i_5] [(unsigned short)2] [i_6]))));
                    var_22 ^= ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) arr_15 [i_5] [i_4])) ? (var_7) : (2070554526U)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned short) max((var_23), ((unsigned short)14748)));
                var_24 = ((/* implicit */unsigned short) max((var_24), (arr_24 [i_10])));
                /* LoopNest 2 */
                for (unsigned int i_11 = 1; i_11 < 12; i_11 += 4) 
                {
                    for (unsigned int i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) min((arr_24 [i_11 + 2]), (((/* implicit */unsigned short) ((short) arr_24 [i_11 - 1]))))))));
                            arr_33 [i_12] [i_12] [i_11] [i_12] [i_12] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_9])) ? (((/* implicit */int) arr_24 [i_9])) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)84)) <= (((/* implicit */int) (signed char)-28)))))));
                            arr_34 [i_11] [i_11 + 2] [i_12] = ((/* implicit */unsigned char) (+(((((/* implicit */int) (!(arr_11 [0LL])))) ^ (((((/* implicit */_Bool) arr_17 [i_9] [i_9] [i_10] [i_11 + 1] [i_9])) ? (((/* implicit */int) arr_31 [i_11] [(unsigned char)11] [i_10] [i_11])) : (((/* implicit */int) var_14))))))));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) arr_11 [i_11]))));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((var_3) % (713673306U))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_13 = 1; i_13 < 19; i_13 += 1) 
    {
        for (unsigned char i_14 = 2; i_14 < 20; i_14 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 2; i_15 < 20; i_15 += 3) 
                {
                    for (signed char i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        {
                            var_28 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_16]))))), (((((/* implicit */_Bool) arr_17 [i_13 + 2] [i_14 - 1] [i_15 - 1] [i_13 - 1] [i_14 - 1])) ? (713673319U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50773)))))));
                            var_29 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (+(arr_39 [(unsigned char)0] [i_14 - 2])))) ? (877511989U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)171))))), (((/* implicit */unsigned int) arr_17 [(signed char)18] [(_Bool)0] [(_Bool)1] [i_16] [i_16]))));
                            var_30 ^= ((/* implicit */_Bool) var_6);
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) (unsigned short)46246)) : (((/* implicit */int) (signed char)15))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        {
                            arr_49 [i_18] [i_14 - 2] [i_17] [i_18 - 1] [i_13] = ((/* implicit */_Bool) arr_21 [i_13] [i_13 + 1] [i_13 + 1] [i_13] [i_18]);
                            arr_50 [i_13] [(unsigned char)3] [i_17] [i_18] [i_17] = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) arr_43 [i_13] [i_13 - 1] [i_13 + 1] [i_13] [i_13 - 1] [i_13 + 2])))), (((((/* implicit */int) arr_37 [i_13 + 2] [i_14 + 1] [i_18 - 1])) != (((/* implicit */int) arr_14 [i_13 - 1] [i_14 + 1] [i_18 - 1]))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((min((arr_45 [i_14 + 1] [i_14 - 1] [i_14 - 1] [i_14 + 1]), (arr_45 [i_14] [i_14 - 1] [i_14 - 1] [i_14 + 1]))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)9))))))));
                var_33 *= ((/* implicit */unsigned char) (unsigned short)19284);
            }
        } 
    } 
}
