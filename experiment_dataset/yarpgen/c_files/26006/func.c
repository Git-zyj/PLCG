/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26006
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_3))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_5)))) / (((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_11)))))) : (min((((/* implicit */long long int) ((var_3) == (((/* implicit */unsigned long long int) var_12))))), (((long long int) var_7))))));
    var_15 -= ((/* implicit */short) (~(var_6)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_16 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)32752)), (var_7)))) ? (max((var_3), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) var_11))))) ? (((long long int) max((var_11), (((/* implicit */unsigned int) arr_1 [i_0]))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */long long int) -767588206)), (-769580256731080876LL)))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    var_17 ^= ((/* implicit */unsigned char) (unsigned short)65535);
                    var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_2] [i_2])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_2] [i_2])))) << (((((((/* implicit */_Bool) 1195682106676714380LL)) ? (2147483647) : (((/* implicit */int) (_Bool)1)))) - (2147483630)))));
                    var_19 = ((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_2] [i_2] [i_2] [i_2]))));
                }
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((~(arr_6 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]))) >> ((((~(((/* implicit */int) (_Bool)1)))) + (30)))));
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 2) /* same iter space */
                {
                    var_20 ^= (+((+(((/* implicit */int) arr_8 [i_3 - 1] [i_1] [0ULL])))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 18; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_11)), (var_5)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_0] [i_0] [i_3] [i_4 + 2])))) ? (((/* implicit */unsigned long long int) var_5)) : ((-(var_3))))) : (((((/* implicit */unsigned long long int) var_6)) + (((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_3] [i_1 - 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_2)))))));
                                var_22 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_3 [i_3 - 1] [i_1 + 1])))) && (((/* implicit */_Bool) var_7))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((arr_9 [i_0] [i_1 - 1]) + (2147483647))) << (((((((/* implicit */int) arr_15 [i_0] [i_1] [i_3] [i_0])) + (22232))) - (28)))))) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [(_Bool)1] [i_3])) : (var_0))), (((/* implicit */unsigned long long int) min((((var_6) & (arr_13 [i_0] [i_1] [i_1] [(unsigned char)9]))), (((/* implicit */unsigned int) ((17ULL) != (var_2)))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 2) /* same iter space */
                {
                    arr_20 [(unsigned short)11] [i_0] = ((/* implicit */int) ((unsigned long long int) var_5));
                    var_24 = ((/* implicit */unsigned short) ((var_8) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (arr_13 [i_0] [i_0] [4ULL] [i_0])))) : (((/* implicit */int) arr_18 [i_6] [i_6] [i_6 + 1] [i_1 + 1]))));
                    arr_21 [i_0] [i_1 + 1] [i_6 + 1] [4U] &= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_11)) : (var_2))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        for (int i_8 = 2; i_8 < 20; i_8 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) -2147483633);
                                arr_26 [i_0] = ((/* implicit */long long int) arr_8 [i_0] [i_1] [i_0]);
                                var_26 -= ((/* implicit */_Bool) ((arr_24 [i_1] [i_6 + 1] [(unsigned char)20] [i_8 - 1]) & (arr_10 [i_1 - 1] [i_1] [i_7] [i_8])));
                                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_6 - 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) arr_3 [i_6 + 1] [i_1 + 1])) : (var_3)));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_13 [i_0] [i_1 + 1] [i_1] [i_0])))) ? (((/* implicit */unsigned int) arr_9 [2U] [2U])) : ((+(arr_6 [i_0] [i_1] [i_6 - 1] [i_0])))));
                }
            }
        } 
    } 
}
