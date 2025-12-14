/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228434
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */int) ((long long int) (+(((((/* implicit */_Bool) 4181179340U)) ? (3710664776U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */long long int) (((+(((/* implicit */int) ((short) 584302519U))))) >= (((/* implicit */int) ((unsigned char) arr_2 [i_0])))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (long long int i_4 = 1; i_4 < 13; i_4 += 4) 
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) 3710664769U);
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_3] [i_0] = ((/* implicit */unsigned short) (~(3710664755U)));
                                arr_15 [i_3] [i_4] |= ((/* implicit */_Bool) arr_3 [i_2]);
                                var_14 ^= ((/* implicit */int) ((449138641600320406LL) ^ (((/* implicit */long long int) (+(3710664776U))))));
                                arr_16 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */int) arr_1 [i_4 - 1])) : (((/* implicit */int) arr_1 [i_4 - 1]))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
                            {
                                arr_20 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_18 [i_0]))) ? (((((/* implicit */_Bool) ((584302519U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0])))))) ? (((((/* implicit */_Bool) 2290343077U)) ? (arr_6 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                                arr_21 [i_3] [i_1] [i_3] [i_3] [i_5] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) (+((~(((/* implicit */int) var_1))))))) % (((long long int) var_0))));
                            }
                            var_15 -= ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) | ((+(-1LL))));
                            arr_22 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) (((((-(((/* implicit */int) (unsigned short)62425)))) + (2147483647))) >> ((((-(((/* implicit */int) arr_1 [i_2])))) - (27699)))));
                        }
                    } 
                } 
                arr_23 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((long long int) ((unsigned char) 2147483647)));
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    arr_27 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_1);
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        var_16 += ((/* implicit */unsigned int) arr_1 [i_0]);
                        var_17 ^= ((/* implicit */short) (~((-(var_7)))));
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (~(((/* implicit */int) arr_3 [i_7])))))));
                        arr_30 [i_0] [i_0] [i_7] [i_0] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_0] [13] [i_0] [i_0] [i_0] [i_0]))))), ((~(arr_0 [i_0])))))) || (((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned char)120)))))))));
                        /* LoopSeq 1 */
                        for (short i_8 = 1; i_8 < 13; i_8 += 1) 
                        {
                            arr_33 [i_0] [i_0] [i_6] [i_7] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_0] [i_0])) ? ((+(((/* implicit */int) arr_17 [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1] [i_7])))) : ((-(((/* implicit */int) arr_29 [i_1] [i_6] [i_0]))))));
                            arr_34 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned short)20881)) ? ((+(((/* implicit */int) arr_18 [i_0])))) : ((-(var_4)))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 2; i_9 < 10; i_9 += 2) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 14; i_10 += 1) 
                        {
                            {
                                arr_40 [i_9] [i_9] [i_6] [(unsigned char)0] [i_9] |= ((/* implicit */unsigned char) (~(((/* implicit */int) var_11))));
                                arr_41 [i_0] [i_9] = ((/* implicit */unsigned char) arr_0 [i_0]);
                                var_19 ^= ((/* implicit */unsigned char) arr_31 [i_0] [i_1] [i_6] [i_1] [i_9]);
                                arr_42 [i_9] [i_9] [i_0] [i_9] [i_6] [i_6] [i_9] |= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_12 [i_9 + 4] [i_9] [i_9 - 2] [(short)4] [i_9])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_12 [i_9 + 1] [i_9] [i_9 - 2] [(_Bool)1] [i_9])))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) != ((-(-9223372036854775799LL))))))));
    var_21 |= ((/* implicit */unsigned int) var_12);
}
