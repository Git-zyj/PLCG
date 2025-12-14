/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232262
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_3] [i_3] [i_3] [i_3] = (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) / (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_13 [i_0] [i_1] [i_2] [i_1] [i_1]))))));
                                var_14 = ((/* implicit */unsigned short) (short)-24645);
                                arr_16 [i_3] [i_4] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (-(626857778U)))))) ? (((/* implicit */int) (short)24645)) : (((((/* implicit */_Bool) 3606385393U)) ? (((/* implicit */int) ((arr_10 [i_1] [i_1] [i_3] [i_4]) == (arr_10 [i_0] [i_2] [i_2] [i_4])))) : (((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 1] [i_3]))))));
                                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5505736083692034004LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)98))) : (2507916076U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)24623))) : (max((688581902U), (((/* implicit */unsigned int) 169998381)))))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [(unsigned short)3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) (signed char)-98)))), (((_Bool) arr_1 [i_0]))));
                    var_16 = ((/* implicit */unsigned short) ((int) arr_10 [i_0] [i_1] [i_2] [i_0]));
                    arr_18 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_3 [i_2] [i_2] [i_2]) | (645235381U)))) ? (((((/* implicit */_Bool) 3649731899U)) ? (((((/* implicit */_Bool) arr_4 [i_2])) ? (3682578438U) : (arr_7 [i_0] [i_1] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-25)), ((unsigned short)1117))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_3 [i_0] [i_0] [i_2]))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 1; i_5 < 20; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (unsigned short i_7 = 1; i_7 < 21; i_7 += 4) 
            {
                {
                    arr_26 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 612388858U)) ? (((/* implicit */int) (unsigned short)24957)) : (((/* implicit */int) (signed char)-59))));
                    arr_27 [i_5] [i_5] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 688581928U)) ? ((~(((/* implicit */int) arr_21 [i_5 + 3])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_5 - 1] [i_5]))) <= (221751132U))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)75)), (arr_24 [i_7] [i_7 + 2] [i_7 + 2] [i_7 + 1])))) : (((/* implicit */int) (_Bool)1))));
                    arr_28 [i_5] [(_Bool)1] [i_6] [i_5] = ((/* implicit */signed char) ((unsigned short) ((1246936975) * (((/* implicit */int) (signed char)0)))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 22; i_9 += 1) 
                        {
                            {
                                arr_35 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((arr_25 [i_5 + 1] [i_5 + 1] [i_5 + 1]) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)1248)) >> (((((((/* implicit */_Bool) arr_34 [i_5 + 2] [i_5] [i_7] [i_8] [i_9])) ? (arr_20 [i_5]) : (((/* implicit */long long int) -908913614)))) - (3015967795106829964LL)))))) : (509627087369730547LL)));
                                arr_36 [i_5 + 1] [i_6] [i_7 - 1] [i_5] = ((/* implicit */signed char) (_Bool)1);
                                var_17 = ((/* implicit */int) ((((min((((/* implicit */long long int) 3649731915U)), (arr_31 [i_5] [i_8] [i_7] [i_5] [i_5]))) - (((/* implicit */long long int) arr_34 [i_5 + 1] [i_5] [i_7 + 2] [i_7 + 2] [i_9 + 1])))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_5 + 2] [i_5] [i_7 + 1] [i_5] [i_8])) ? ((-(((/* implicit */int) (unsigned short)255)))) : (((/* implicit */int) arr_22 [i_5] [i_5])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 *= ((/* implicit */unsigned int) ((unsigned char) 1324083304));
}
