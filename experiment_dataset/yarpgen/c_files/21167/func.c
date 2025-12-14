/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21167
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) var_14);
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(4570270951392808723LL)))) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_2 [i_1 - 2])) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((unsigned short) var_1)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 4; i_3 < 14; i_3 += 3) 
    {
        for (signed char i_4 = 1; i_4 < 13; i_4 += 2) 
        {
            {
                var_18 = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned short)65532)), (var_2)));
                arr_12 [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) ((var_12) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
                /* LoopNest 3 */
                for (long long int i_5 = 3; i_5 < 13; i_5 += 2) 
                {
                    for (short i_6 = 3; i_6 < 12; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            {
                                var_19 = (signed char)100;
                                var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (unsigned short)4))))) % (((((/* implicit */_Bool) (unsigned char)15)) ? (arr_13 [i_5] [i_5] [i_5 - 2] [i_3 + 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) (unsigned short)2)))))))));
                                var_21 = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned char)89));
                                arr_22 [i_3] [i_3] [i_5] [i_6] [i_3] [i_6 - 1] [i_6 - 1] = ((/* implicit */unsigned char) min((arr_10 [(signed char)8]), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-61))))))))));
                            }
                        } 
                    } 
                } 
                arr_23 [i_3] [i_4 - 1] [i_4] &= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)1984))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4 + 2]))) : (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_8 = 0; i_8 < 21; i_8 += 2) 
    {
        for (long long int i_9 = 0; i_9 < 21; i_9 += 3) 
        {
            {
                var_22 = ((/* implicit */signed char) arr_28 [i_8]);
                /* LoopNest 3 */
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        for (short i_12 = 0; i_12 < 21; i_12 += 3) 
                        {
                            {
                                var_23 |= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)0))));
                                arr_38 [i_8] [i_8] [i_12] [i_11] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (unsigned char)128))) == (((/* implicit */int) arr_25 [i_8] [i_12]))));
                                var_24 = ((/* implicit */short) var_10);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    for (unsigned char i_14 = 0; i_14 < 21; i_14 += 2) 
                    {
                        for (unsigned long long int i_15 = 3; i_15 < 19; i_15 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) ((((2002311047) <= (((/* implicit */int) (unsigned short)65532)))) ? (((/* implicit */int) (unsigned short)33446)) : (((/* implicit */int) ((short) (unsigned short)13)))));
                                arr_47 [i_13] [i_9] [(short)16] [i_14] [(signed char)19] [i_9] [i_14] = ((/* implicit */short) 5257939791714967148LL);
                                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)8821)) <= (((/* implicit */int) (unsigned short)65534))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 = ((unsigned short) ((((/* implicit */_Bool) (short)-4093)) ? (68719475712LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)29)))));
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (short)13)))), (((/* implicit */int) var_7))))) ? (3054428845228740321LL) : (((/* implicit */long long int) min((var_3), (((/* implicit */int) ((((/* implicit */unsigned long long int) -1999882842)) <= (var_12)))))))));
}
