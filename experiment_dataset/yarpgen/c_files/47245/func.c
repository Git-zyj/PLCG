/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47245
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
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) (-(((var_8) - (var_6)))));
                    arr_9 [(_Bool)1] [i_1] [i_2] [(_Bool)1] = ((/* implicit */short) arr_3 [7ULL] [i_1] [7ULL]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) -8522236260664703238LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((8522236260664703245LL) <= (((/* implicit */long long int) var_13)))))) : (72057594037927935LL))) > (((/* implicit */long long int) max((4095U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4087U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        for (unsigned char i_4 = 3; i_4 < 21; i_4 += 4) 
        {
            for (int i_5 = 3; i_5 < 21; i_5 += 4) 
            {
                {
                    var_22 = ((/* implicit */_Bool) max((3081373034U), (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_4]))))), (((((/* implicit */_Bool) 3726040303U)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_14 [i_3])))))))));
                    arr_16 [i_5] = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_12 [i_5 - 1] [i_4 - 2])) - (((/* implicit */int) (short)8582)))), (((/* implicit */int) arr_12 [i_5 - 2] [i_4 - 1]))));
                    var_23 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) 8522236260664703237LL)))));
                    var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */int) (unsigned short)16384)) + (((/* implicit */int) arr_14 [i_3])))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) 17U)) ? (-4781909788378247771LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9815)))))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 21; i_7 += 4) 
                        {
                            {
                                var_25 = (i_5 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) ((short) var_1))) << (((((((/* implicit */long long int) arr_21 [i_4 - 1] [i_5] [i_7 - 1] [i_7] [i_7 - 1])) ^ (8522236260664703240LL))) - (8522236259363166891LL)))))) : (((/* implicit */_Bool) ((((/* implicit */int) ((short) var_1))) << (((((((((/* implicit */long long int) arr_21 [i_4 - 1] [i_5] [i_7 - 1] [i_7] [i_7 - 1])) ^ (8522236260664703240LL))) - (8522236259363166891LL))) + (277196239LL))))));
                                var_26 = ((/* implicit */short) min((-92052797), ((+(((((/* implicit */_Bool) arr_20 [i_3] [i_6] [i_3])) ? (((/* implicit */int) (short)-17026)) : (((/* implicit */int) (unsigned short)16384))))))));
                                arr_22 [i_3] [i_5] [i_3] [i_6] [i_3] [i_4] = ((/* implicit */unsigned int) 9732787431663335265ULL);
                                arr_23 [i_4] [i_5] [i_4] = arr_13 [i_3];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
    {
        for (int i_9 = 0; i_9 < 14; i_9 += 4) 
        {
            {
                var_27 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)155))));
                arr_28 [i_9] [i_9] = arr_25 [i_8] [i_8];
                /* LoopNest 3 */
                for (short i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 14; i_12 += 2) 
                        {
                            {
                                arr_36 [i_8] [i_9] [i_11] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_0 [i_8] [i_8]))))));
                                arr_37 [i_8] [i_9] [i_10] [i_10] [i_11] [i_10] [i_12] = ((/* implicit */long long int) (+(((/* implicit */int) arr_34 [i_8] [i_8] [i_9] [i_10] [i_11] [i_10] [i_12]))));
                                arr_38 [i_8] [i_9] [i_10] [i_11] [i_12] [i_12] = ((/* implicit */unsigned int) min((((/* implicit */short) ((signed char) (unsigned short)65535))), (arr_30 [i_9] [i_10] [i_12])));
                                arr_39 [i_12] [i_11] [i_10] [i_9] [i_8] = ((/* implicit */_Bool) min(((+(((arr_20 [i_12] [i_10] [i_9]) & (((/* implicit */int) arr_14 [i_10])))))), (((/* implicit */int) arr_19 [i_8] [i_8] [i_11] [i_8]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_13 = 2; i_13 < 13; i_13 += 2) 
                {
                    for (unsigned short i_14 = 0; i_14 < 14; i_14 += 4) 
                    {
                        for (unsigned char i_15 = 2; i_15 < 13; i_15 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned int) var_4);
                                var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) >> (((((/* implicit */int) (short)-3910)) + (3922)))));
                                arr_47 [i_8] [i_9] [i_15 + 1] [i_14] [i_15 - 2] = ((unsigned long long int) (+(((/* implicit */int) arr_32 [i_15] [i_15 + 1] [i_15] [i_15 - 2] [i_15 - 2] [i_15 - 1]))));
                                var_30 ^= ((/* implicit */unsigned short) ((((arr_46 [i_15 - 2] [i_13 + 1] [i_14] [i_14] [i_14] [i_8]) > (((/* implicit */unsigned int) -92052797)))) ? (max((arr_46 [i_15 - 1] [i_13 - 2] [i_9] [i_14] [i_9] [i_13]), (((/* implicit */unsigned int) arr_30 [i_15 + 1] [i_13 - 1] [i_13])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_15 + 1] [i_13 - 2] [i_8])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
