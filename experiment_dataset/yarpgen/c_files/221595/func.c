/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221595
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
    for (int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)88))))) : (min((var_7), (((/* implicit */long long int) (short)23532)))))));
                arr_7 [i_1 - 1] [(_Bool)1] = ((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (4503599627370495LL) : (arr_1 [i_1]))) <= (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_1])) : (((/* implicit */int) (short)-4256))))))))));
                var_16 = ((/* implicit */unsigned long long int) max((max((arr_5 [i_0] [i_0]), ((signed char)(-127 - 1)))), (((/* implicit */signed char) arr_4 [21LL] [13ULL] [(signed char)8]))));
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((_Bool) max((((/* implicit */long long int) max(((short)-23522), (((/* implicit */short) arr_4 [i_0] [i_0] [i_0]))))), ((~(-4469113487296342935LL)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 1) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 2; i_4 < 15; i_4 += 1) 
            {
                {
                    arr_15 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] = ((/* implicit */_Bool) var_3);
                    arr_16 [i_2] [i_3 - 1] [i_2] &= ((/* implicit */_Bool) arr_13 [i_2 + 1] [i_3] [i_4] [i_2 - 1]);
                    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3226318786U))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                {
                    var_19 = ((((((/* implicit */_Bool) arr_2 [i_5] [i_7])) ? (((/* implicit */int) arr_2 [i_7] [i_5])) : (((/* implicit */int) arr_2 [i_5] [i_5])))) * (((/* implicit */int) (unsigned char)213)));
                    /* LoopSeq 4 */
                    for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_14 [i_5] [i_6]), (((/* implicit */unsigned int) (signed char)-111))))) ? (max((arr_14 [i_5] [i_8]), (913142405U))) : (((arr_14 [i_5] [i_6]) ^ (arr_14 [i_5] [i_5])))));
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_14 [i_5] [1ULL]) * (arr_14 [i_8] [i_6])))) ? (((((/* implicit */unsigned long long int) ((arr_19 [i_6] [i_6]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_19 [i_6] [i_6]))))) * (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_8])))));
                        var_22 &= arr_3 [i_5];
                        var_23 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) (short)32758)) & (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_14 [1U] [i_6]))), (((/* implicit */unsigned int) arr_26 [i_7] [4U] [i_8]))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31342))))))))) >> ((((~(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))) + (16)))));
                        arr_31 [i_6] [i_6] [4U] [4U] [6ULL] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_14 [i_7] [i_6])) && (((/* implicit */_Bool) arr_14 [i_5] [i_7])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [8ULL] [8ULL]))))))))) : (((((/* implicit */_Bool) (short)31728)) ? (max((((/* implicit */int) (signed char)87)), (-2050706657))) : (((/* implicit */int) arr_4 [i_5] [9LL] [i_7]))))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (7182343009106571121LL))))));
                        arr_34 [i_5] [i_6] [i_6] = ((/* implicit */_Bool) max((((min((var_4), (((/* implicit */unsigned long long int) (short)-4794)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 948000111U)) ? (arr_14 [i_5] [i_6]) : (arr_25 [i_5] [i_5] [i_5] [i_5] [i_5])))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((unsigned int) var_5)))))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_6] [i_6] [i_11] = arr_22 [i_6] [i_6];
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            arr_43 [2U] [i_6] [i_6] [i_11] [i_12] = (!(((/* implicit */_Bool) var_11)));
                            var_26 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_26 [i_6] [i_6] [i_12])) > (((/* implicit */int) arr_26 [i_6] [i_6] [i_7])))))));
                            var_27 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) min((arr_21 [(signed char)4] [i_12]), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6] [i_6]))) : (((((/* implicit */_Bool) arr_26 [i_6] [i_6] [5LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [3ULL]))) : (var_4)))))));
                            var_28 ^= ((/* implicit */unsigned long long int) max((arr_25 [i_5] [i_5] [5LL] [i_5] [i_5]), (min((arr_25 [i_12] [i_11] [(short)7] [i_6] [i_5]), (((/* implicit */unsigned int) arr_33 [i_5] [i_6] [i_7] [i_11]))))));
                        }
                    }
                    arr_44 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_6] [i_6])) | (((/* implicit */int) var_11))));
                }
            } 
        } 
    } 
}
