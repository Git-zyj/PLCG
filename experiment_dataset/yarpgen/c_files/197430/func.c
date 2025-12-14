/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197430
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
    var_14 = var_7;
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_10 [i_3] [i_0] [i_1] = ((/* implicit */long long int) arr_1 [i_2] [i_2]);
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)181))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 8446337195925536798LL)) && (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) arr_9 [i_3] [i_3] [i_3]))))))));
                            var_16 |= ((((arr_2 [i_2] [i_3]) ? (((/* implicit */int) arr_9 [i_1] [i_2] [i_2])) : (((/* implicit */int) min((((/* implicit */unsigned char) var_4)), ((unsigned char)21)))))) & (((/* implicit */int) (unsigned char)235)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */short) var_12);
                            var_18 ^= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)235))));
                        }
                    } 
                } 
                arr_17 [i_0] = var_2;
            }
        } 
    } 
    var_19 |= -1LL;
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (short i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            {
                var_20 = ((/* implicit */short) (~(11LL)));
                arr_22 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_15 [i_6] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_8 [i_7] [i_7] [i_6] [i_7])) : (((/* implicit */int) (unsigned char)234)))) < (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_6])) : (((/* implicit */int) (_Bool)1))))))) - (var_7)));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) arr_9 [i_6] [i_6] [i_6]);
                            var_22 ^= arr_27 [i_8];
                            var_23 ^= arr_6 [i_6] [i_7] [4U] [i_6];
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) % (arr_27 [4ULL])))) ? (((var_13) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (var_4)))))))))));
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) arr_15 [i_6] [i_7] [i_7] [i_10] [i_11] [i_11]);
                            arr_33 [i_6] = ((((((/* implicit */int) (!(var_1)))) >= (((-1840677625) ^ (((/* implicit */int) var_13)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_3))))))) : (((((/* implicit */_Bool) var_2)) ? (var_9) : (((((/* implicit */int) var_0)) * (((/* implicit */int) (unsigned char)234)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
    {
        for (int i_13 = 0; i_13 < 12; i_13 += 1) 
        {
            for (unsigned short i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned short i_16 = 2; i_16 < 9; i_16 += 4) 
                        {
                            {
                                var_26 += ((/* implicit */unsigned char) (((-(((/* implicit */int) var_8)))) | (min((1840677625), ((+(arr_43 [4LL] [4LL])))))));
                                arr_48 [i_12] [7] [9] [i_12] [i_16] [i_15] [5ULL] = var_10;
                                var_27 |= ((/* implicit */unsigned long long int) ((348658217U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_14] [i_14] [i_16])))));
                                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_12 + 1])) ? (arr_45 [i_12 + 1] [i_16 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_16 + 3] [i_16 + 2])))))) ? (((var_13) ? (((/* implicit */int) arr_38 [i_12 + 1] [i_15])) : (((/* implicit */int) arr_38 [i_12 + 1] [i_14])))) : (arr_46 [i_13] [i_13] [i_13] [i_12] [(unsigned short)2])));
                                arr_49 [i_14] [i_14] [i_12] [i_15] [i_16] = ((/* implicit */short) var_13);
                            }
                        } 
                    } 
                    arr_50 [i_14] [i_12] [i_12] = ((/* implicit */unsigned char) ((unsigned long long int) arr_46 [4] [4ULL] [i_14] [i_12] [i_14]));
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 12; i_17 += 2) 
                    {
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            {
                                var_29 += ((/* implicit */unsigned char) arr_34 [i_13]);
                                var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -3578160786136425736LL)) ? (((/* implicit */int) arr_41 [i_12] [i_12 + 1] [i_12 + 1] [i_12 + 1])) : (((/* implicit */int) arr_51 [i_12] [i_12 + 1] [i_12] [i_12 + 1] [i_12 + 1] [(unsigned char)3])))) >= ((+(((/* implicit */int) arr_51 [i_12] [i_12 + 1] [i_12] [i_12 + 1] [i_12 + 1] [i_18]))))));
                                arr_56 [i_12] [5] [5] [i_14] [i_12] [i_18] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((16563456879136337427ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
