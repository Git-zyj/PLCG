/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208520
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_10 ^= var_2;
                                var_11 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-1))))))), (max((((/* implicit */unsigned long long int) arr_8 [i_4] [i_4] [i_4] [i_4])), (((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4])))))))));
                                var_12 = ((/* implicit */short) ((unsigned short) arr_2 [(unsigned char)19]));
                            }
                        } 
                    } 
                } 
                var_13 -= ((/* implicit */_Bool) ((int) ((((/* implicit */long long int) 3861280066U)) & (var_2))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_5 = 2; i_5 < 22; i_5 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 3; i_6 < 24; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            {
                                var_14 -= ((/* implicit */unsigned short) ((short) (short)3));
                                var_15 -= ((/* implicit */unsigned char) ((((/* implicit */int) (!(var_9)))) != ((+(((/* implicit */int) (unsigned short)17))))));
                                var_16 = ((/* implicit */unsigned int) ((((var_6) ? (var_1) : (((/* implicit */unsigned long long int) var_8)))) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5]))) % (var_2))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) (-(var_2)));
                }
                for (signed char i_8 = 2; i_8 < 22; i_8 += 3) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)47913)) ? (14LL) : (-15LL))))))));
                    var_19 = ((/* implicit */unsigned long long int) arr_7 [(unsigned short)22] [1LL] [(_Bool)1]);
                }
                /* vectorizable */
                for (unsigned short i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    arr_24 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(6517733761431522732LL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_1] [i_1] [i_9])) ? (var_2) : (((/* implicit */long long int) 1073741808U))))));
                    var_20 ^= ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [(_Bool)1] [(signed char)16] [i_1] [i_9]);
                }
                var_21 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) * (-1092409667)))) * (((((17118890677090772686ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) * (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1])))));
                var_22 -= ((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) var_7)))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_3))));
    /* LoopSeq 1 */
    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 1) 
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) -4857836940546635556LL)), (16591187758918882695ULL)))))) ? (max((((((/* implicit */_Bool) arr_4 [i_10] [(_Bool)1])) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_10] [(short)24] [i_10] [i_10] [i_10]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [(_Bool)1])) - (((/* implicit */int) var_5))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-29731), (((/* implicit */short) (signed char)1))))))));
        var_25 ^= ((/* implicit */signed char) arr_8 [i_10] [i_10] [i_10] [i_10]);
        arr_27 [i_10] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_2))), (((/* implicit */long long int) ((unsigned char) 2767342502U))))))));
    }
    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) var_4))));
}
