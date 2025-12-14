/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225226
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
    var_18 ^= ((/* implicit */unsigned char) ((((_Bool) ((var_6) ? (((/* implicit */int) (short)8190)) : (((/* implicit */int) (unsigned char)235))))) && (((/* implicit */_Bool) var_10))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (2147483647))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */int) (((+(((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) arr_4 [i_0] [i_1]))))))) != (((/* implicit */int) (_Bool)0))));
                        var_21 &= ((/* implicit */short) arr_5 [(_Bool)1]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */_Bool) ((unsigned short) arr_5 [i_0]));
                        var_23 = ((/* implicit */int) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (11643197144522251130ULL)));
                    }
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        arr_18 [i_2 + 1] [1] [i_2] [i_0] = ((/* implicit */unsigned long long int) var_2);
                        var_24 = ((/* implicit */short) ((unsigned short) ((2987376408335585489ULL) & (((/* implicit */unsigned long long int) 536870912U)))));
                        arr_19 [i_0] [i_2 + 1] [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((~(5755708162421578824LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
                        var_25 &= ((/* implicit */unsigned int) ((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */unsigned long long int) (-(arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])))) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_2 + 1] [i_1] [i_0]))))), (max((((/* implicit */unsigned long long int) arr_10 [i_0] [(short)2] [i_1] [i_2] [i_5])), (var_17)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_0] [i_0] [(unsigned short)10] [i_0] [i_6] = ((/* implicit */short) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_17 [i_2 + 1] [i_1] [i_1] [i_1])) : ((-(((/* implicit */int) (_Bool)1))))))));
                            var_26 = ((/* implicit */short) (((+(((/* implicit */int) (unsigned char)112)))) * (((/* implicit */int) arr_7 [i_2] [(_Bool)1] [(_Bool)1] [i_2 + 1]))));
                            arr_23 [i_0] [i_0] [i_2] [4U] [4U] = ((/* implicit */int) arr_17 [0ULL] [i_1] [i_2 + 1] [i_2 + 1]);
                        }
                    }
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            {
                                var_27 += ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3498))) | (((arr_25 [i_0] [i_1] [i_0] [i_0] [i_7] [i_8]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_17))))) != (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_25 [i_0] [i_0] [i_1] [i_0] [i_7] [i_1]))))) * (arr_12 [i_2 + 1] [i_2 + 1] [(_Bool)1] [i_0] [i_0] [i_0]))))));
                                arr_29 [(short)10] [0] [i_2 + 1] [(short)10] [i_2] [i_1] [(short)10] |= ((/* implicit */unsigned long long int) ((arr_16 [i_0] [i_1]) | (((/* implicit */int) (_Bool)0))));
                                arr_30 [i_0] [i_0] [i_2] [i_0] [i_7] = ((/* implicit */unsigned char) ((unsigned int) (short)-3498));
                                var_28 = ((/* implicit */unsigned char) arr_25 [0] [0] [i_7] [i_7] [i_7] [i_7]);
                                var_29 = ((/* implicit */_Bool) (short)-3498);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_30 = ((/* implicit */_Bool) arr_11 [i_0] [i_0]);
    }
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        var_31 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_32 [i_9] [i_9 - 1])) ? (((/* implicit */int) arr_32 [i_9] [i_9 - 1])) : (((/* implicit */int) arr_32 [i_9 - 1] [i_9 - 1])))), (((/* implicit */int) arr_32 [i_9 - 1] [i_9 - 1]))));
        var_32 = ((/* implicit */int) var_14);
    }
    for (signed char i_10 = 1; i_10 < 10; i_10 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            var_33 = ((/* implicit */_Bool) (-(((/* implicit */int) ((var_3) <= (((/* implicit */int) (short)3498)))))));
            arr_38 [i_10] [i_10] [(short)1] = arr_33 [i_10] [i_10 + 4];
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_11] [i_10 + 3])) ? (((/* implicit */unsigned int) var_11)) : ((~(1265695117U)))));
            var_35 = (i_10 % 2 == zero) ? (((/* implicit */signed char) ((3029272178U) << (((((/* implicit */int) arr_33 [i_10] [i_11])) - (37307)))))) : (((/* implicit */signed char) ((3029272178U) << (((((((/* implicit */int) arr_33 [i_10] [i_11])) - (37307))) + (14272))))));
            var_36 = ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3511))) & (16052103285483471548ULL)))));
        }
        arr_39 [i_10] = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_13)), (arr_35 [i_10])))) ? (var_9) : (((/* implicit */int) arr_36 [i_10 + 1] [i_10 + 1] [i_10])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)25783))) >= (arr_37 [i_10 + 1]))))));
        var_37 = ((/* implicit */_Bool) min((var_37), (var_0)));
    }
    for (int i_12 = 0; i_12 < 17; i_12 += 4) 
    {
        var_38 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)73)) ? (2147483647) : (((/* implicit */int) (short)-23377))))));
        arr_43 [2ULL] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_33 [i_12] [i_12]))));
        arr_44 [i_12] = ((/* implicit */unsigned char) ((8846770259481748954ULL) - (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), ((+(209935497))))))));
        arr_45 [i_12] = ((/* implicit */short) (((+(((/* implicit */int) arr_40 [i_12] [i_12])))) | (((/* implicit */int) max((arr_31 [i_12] [i_12]), (((/* implicit */unsigned short) arr_41 [i_12])))))));
    }
}
