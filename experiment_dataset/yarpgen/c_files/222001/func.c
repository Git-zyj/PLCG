/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222001
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) max((2046994006U), (((/* implicit */unsigned int) ((1511271021) & (((/* implicit */int) (short)10481)))))))) ? (((/* implicit */int) (short)10493)) : ((((_Bool)1) ? (((/* implicit */int) (short)10486)) : (((/* implicit */int) (unsigned char)167))))));
                                var_14 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_8 [i_0] [(short)14] [i_3] [(short)14] [i_2 + 2] [i_4 + 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [(unsigned short)12] [i_0] [i_0] [i_2 + 1] [i_4 + 1])))))));
                                var_15 = ((/* implicit */long long int) var_3);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 15; i_6 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_5] &= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((var_10), (((/* implicit */int) (short)10481))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_7 [i_2] [i_6])) ^ (((/* implicit */int) var_11))))))));
                                var_16 = ((/* implicit */int) max((var_16), ((+(((/* implicit */int) (short)-10487))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            {
                                var_17 &= max(((-(((((/* implicit */_Bool) (short)-10482)) ? (((/* implicit */int) (short)10513)) : (((/* implicit */int) arr_17 [i_2 + 3] [i_1] [i_8] [i_7] [i_2 + 3])))))), (((/* implicit */int) max(((short)32767), (arr_2 [i_2 - 1] [i_2 + 2] [i_2 + 1])))));
                                var_18 = ((/* implicit */unsigned long long int) (short)-10477);
                                arr_21 [i_7] [i_7] [i_2 - 1] [i_1] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) max((arr_14 [i_8] [i_8] [i_2 + 2] [i_2 + 2]), (arr_3 [i_2] [i_2 + 2] [i_2 + 2])))) % (max((arr_15 [i_2 - 1] [i_2 - 3] [i_2 - 1] [i_2 - 1] [i_2 - 3]), ((~(((/* implicit */int) (short)32767))))))));
                                arr_22 [i_7] = ((/* implicit */signed char) (+(((((/* implicit */int) arr_0 [i_2 + 3])) | (((/* implicit */int) (short)-10487))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        for (short i_10 = 0; i_10 < 19; i_10 += 4) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) max((var_0), (arr_3 [i_9] [i_2] [i_1])))))));
                                arr_28 [i_9] [i_9] [i_2] [i_1] [i_9] = ((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (short)10495))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_11 = 1; i_11 < 17; i_11 += 2) 
                    {
                        for (signed char i_12 = 0; i_12 < 19; i_12 += 3) 
                        {
                            {
                                var_20 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-10487)) ? (((/* implicit */int) (short)30231)) : (((/* implicit */int) (signed char)87))))) | (((unsigned int) arr_25 [i_2] [i_11] [i_11 + 1] [(_Bool)1] [i_11 - 1] [i_12]))));
                                arr_35 [i_1] [i_11] = ((/* implicit */signed char) (~(((((/* implicit */int) arr_33 [i_1] [i_1] [i_11 - 1])) ^ (((/* implicit */int) arr_33 [(short)11] [i_2] [i_11 + 2]))))));
                                var_21 = ((/* implicit */int) max(((-(var_5))), (((/* implicit */unsigned int) (+(max((((/* implicit */int) var_7)), (var_12))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
    {
        for (unsigned int i_14 = 0; i_14 < 12; i_14 += 3) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 10; i_16 += 3) 
                    {
                        for (long long int i_17 = 0; i_17 < 12; i_17 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (~(((/* implicit */int) ((unsigned char) arr_40 [i_17] [i_13 + 1] [i_16 + 2]))))))));
                                arr_50 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_11 [i_13] [i_14] [i_14] [(unsigned char)12] [i_16] [(short)6])), (arr_15 [i_13 + 1] [i_14] [i_15] [i_14] [i_17])))) ? (((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-56))) : (arr_6 [i_13 + 1] [i_14] [i_15] [i_16] [i_13 + 1] [i_17]))) : (((/* implicit */unsigned long long int) (~(822342574))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)10521))) : ((((+(0U))) | (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)-1)), ((short)32767)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                    {
                        for (short i_19 = 1; i_19 < 9; i_19 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (+(-1637524700))))));
                                var_24 |= ((/* implicit */signed char) (~((+(((/* implicit */int) (short)32767))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        for (unsigned long long int i_21 = 0; i_21 < 12; i_21 += 4) 
                        {
                            {
                                arr_63 [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 4294967295U))));
                                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_51 [i_13] [i_21] [(_Bool)1] [i_13] [i_13] [i_21])))))))));
                                arr_64 [i_15] [9U] [i_13] [i_15] [9U] [8LL] = 1998162269;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
