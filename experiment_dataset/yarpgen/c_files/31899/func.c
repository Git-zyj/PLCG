/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31899
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
    var_11 = ((/* implicit */short) (~(((/* implicit */int) min((((/* implicit */unsigned char) ((signed char) (unsigned short)11))), (((unsigned char) (_Bool)1)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_12 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_1 [4]), (((/* implicit */long long int) 0U))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1] [i_1] [i_2] [9]))))))))) < (((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */long long int) (~(-478669510)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114))) : (var_10)))))));
                    var_13 += ((/* implicit */unsigned int) ((int) var_1));
                    arr_6 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_0]))))));
                }
                for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_1] [(_Bool)0] [i_1]))))) ^ (min((arr_1 [i_0]), (((/* implicit */long long int) (unsigned char)226))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 3) 
                        {
                            {
                                arr_14 [i_1] [i_5] [i_0] [i_3] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) var_9);
                                arr_15 [i_0] [i_1] [i_1] [i_4] [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_7)) ? (var_4) : (((((/* implicit */_Bool) (unsigned short)3774)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (9190972566934495121ULL))))), (((/* implicit */unsigned long long int) max((arr_9 [i_1] [(short)9] [i_3] [i_4 - 2] [i_5] [i_5 - 3]), (((/* implicit */unsigned char) arr_11 [i_5 - 2] [i_4 - 2] [i_4 - 2] [i_3])))))));
                                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 458752U))) ? ((-(((/* implicit */int) (unsigned char)12)))) : (((/* implicit */int) arr_3 [i_1]))))) ? ((~(((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)25744)) && (((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (var_0)))))))));
                                arr_16 [i_1] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (1772817210) : (((/* implicit */int) (unsigned char)24)))), (((/* implicit */int) (signed char)104))))) ? (((unsigned long long int) arr_5 [i_1] [i_3] [i_1] [i_1])) : (arr_12 [i_1] [i_1]));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_8 [4U] [i_1] [i_3])))))) > (max((arr_12 [i_0] [i_0]), (((/* implicit */unsigned long long int) (-(var_6)))))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            {
                                var_17 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_6])) : (((/* implicit */int) (unsigned char)62))));
                                var_18 = ((/* implicit */long long int) ((short) ((((/* implicit */int) var_9)) << (((((/* implicit */int) (unsigned short)61752)) - (61748))))));
                                var_19 -= ((/* implicit */short) ((((((/* implicit */int) arr_11 [i_1] [i_1] [i_6] [i_7])) + (2147483647))) << (((195188769U) - (195188769U)))));
                                var_20 = ((/* implicit */unsigned int) ((unsigned char) var_8));
                            }
                        } 
                    } 
                    arr_24 [i_6] |= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) arr_0 [i_0] [i_1]))))) ^ ((-(((/* implicit */int) (unsigned char)0))))));
                    var_21 |= ((/* implicit */_Bool) var_9);
                }
                for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    var_22 = ((/* implicit */signed char) max((((/* implicit */long long int) (~(arr_10 [i_0])))), (((((/* implicit */_Bool) arr_2 [10U])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))) : (var_10)))));
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_22 [i_9] [i_1] [i_1] [i_1] [i_1] [i_0]))));
                }
                arr_27 [i_0] [i_1] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_20 [i_1] [i_0] [(short)3] [(signed char)5])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_1] [i_1] [(_Bool)1]))))) : ((-(arr_10 [i_0]))))) - ((-(3716621033U)))));
                arr_28 [i_0] [(_Bool)1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [(_Bool)1] [i_1]))) <= (arr_12 [2LL] [2LL])))), (max((((/* implicit */int) (unsigned char)226)), (arr_17 [i_0] [i_1] [i_1] [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (min((var_0), (((/* implicit */long long int) arr_5 [i_1] [(unsigned short)9] [i_0] [i_1]))))));
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (short)-23526))));
                var_25 += ((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
}
