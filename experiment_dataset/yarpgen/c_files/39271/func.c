/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39271
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
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] [4U] = ((short) (!(((/* implicit */_Bool) min((arr_4 [i_0] [i_0] [(_Bool)1]), (((/* implicit */int) arr_3 [i_0] [i_1])))))));
                arr_6 [i_0] [6U] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (arr_4 [i_0] [i_1] [i_1]) : (arr_4 [i_0] [i_0] [i_1])))));
                var_16 |= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 536870912)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0])))));
                arr_7 [i_1] = ((/* implicit */unsigned int) ((short) var_13));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 6; i_2 += 1) 
    {
        for (int i_3 = 1; i_3 < 8; i_3 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    var_17 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_4))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 8; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 8; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) arr_14 [2ULL] [i_4] [2ULL]);
                                arr_20 [i_2] [8] [i_4] [(short)8] [i_6] [i_5] &= arr_10 [i_4];
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [3LL] [i_3 + 2] [i_3])))))));
                }
                /* LoopSeq 3 */
                for (short i_7 = 1; i_7 < 8; i_7 += 2) 
                {
                    arr_25 [4U] [i_3] [i_3] [i_7 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) arr_0 [i_7 + 2])), ((short)11771)))) ? (-536870917) : ((~(((((/* implicit */int) arr_0 [9U])) + (((/* implicit */int) arr_14 [i_2] [i_3] [i_7]))))))));
                    arr_26 [i_2] [i_2] [1ULL] [i_3] = ((/* implicit */short) arr_8 [(_Bool)1] [i_3]);
                    var_20 = var_6;
                }
                for (int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_7))) ? (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))))), (((unsigned int) arr_13 [6] [(short)0] [i_8])))) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_5)) ? (-536870917) : (var_0))))))));
                    arr_29 [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) max((arr_28 [(_Bool)1] [(short)9] [i_8] [i_8]), (((/* implicit */int) arr_23 [i_2] [i_3] [i_3] [i_8]))));
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        for (int i_10 = 1; i_10 < 9; i_10 += 1) 
                        {
                            {
                                arr_34 [i_2] [i_3] [i_8] [(unsigned char)2] [i_9] [i_2] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_3) & (((/* implicit */int) arr_27 [i_10 + 1] [i_3 - 1]))))) ? (((/* implicit */int) var_8)) : (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_2] [i_3] [i_3]))))), (((((/* implicit */int) (unsigned char)184)) / (var_3)))))));
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */int) ((short) (signed char)(-127 - 1)))) : (((/* implicit */int) arr_9 [i_2 + 4] [9]))))))))));
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_22 [i_3 + 1] [0ULL] [0ULL] [i_2 + 1])) ? (arr_22 [i_3 + 1] [(short)8] [(short)8] [i_2 + 1]) : (arr_22 [i_3 + 1] [(signed char)4] [(signed char)4] [i_2 + 1]))) < (((/* implicit */unsigned int) var_0)))))));
                                arr_35 [i_2] [i_2 + 2] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) -536870912)) * ((+(552502741U))))))));
                            }
                        } 
                    } 
                }
                for (int i_11 = 1; i_11 < 8; i_11 += 3) 
                {
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_4))));
                    var_25 = ((((/* implicit */_Bool) arr_1 [i_2 + 2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_3] [i_3] [i_3] [i_3]))) : (max(((~(var_6))), (((/* implicit */unsigned long long int) ((unsigned short) (signed char)17))))));
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (-(((/* implicit */int) var_11)))))));
                }
                arr_39 [i_3] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_31 [i_3] [i_3 - 1] [i_3 + 2] [6] [i_3])) ? (max((((/* implicit */int) arr_18 [i_2] [i_3])), (-536870906))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (3925390393U))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) 511U)) ? (-1493996883) : (-536870921)));
}
