/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204706
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_3)) : (var_0)))) ? ((~(((((/* implicit */_Bool) 4515511277169566051ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (7073382214965264356ULL))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)0)), (349915726507099533ULL)))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
    var_13 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_14 -= ((/* implicit */_Bool) var_2);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [(_Bool)1] [i_2] [i_1] = var_0;
                            arr_10 [i_0] [i_1] [(short)19] [i_1] = (((!(arr_3 [4LL] [i_1] [i_1]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (arr_7 [i_2] [i_1] [i_3 - 1] [i_3] [i_3] [i_3])))) : ((-((-(8375554882815448758LL))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        for (short i_5 = 3; i_5 < 15; i_5 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_8 = 0; i_8 < 16; i_8 += 4) 
                            {
                                var_15 = ((/* implicit */unsigned char) var_11);
                                var_16 = ((/* implicit */unsigned long long int) 8375554882815448762LL);
                                arr_23 [i_4] [i_5] [(short)8] [i_7] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_22 [i_7] [i_5 + 1] [i_4] [i_5] [14ULL] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4968))) : (-8078427961078951048LL)));
                            }
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~(((/* implicit */int) (short)-32766)))))));
                            /* LoopSeq 1 */
                            for (short i_9 = 0; i_9 < 16; i_9 += 2) 
                            {
                                var_18 &= ((/* implicit */unsigned int) arr_12 [i_9]);
                                arr_26 [i_4] [i_9] [i_6] [i_7] [i_5] [6U] = ((/* implicit */unsigned short) (unsigned char)236);
                                var_19 = var_2;
                            }
                            var_20 &= arr_18 [i_4] [i_4] [i_4] [i_4];
                            var_21 = ((/* implicit */short) (+(min((arr_22 [i_4] [i_5] [i_5] [i_5] [i_5 - 1] [i_4]), (((/* implicit */unsigned long long int) arr_25 [i_4] [i_4] [i_6] [i_5] [i_5 - 1] [i_4]))))));
                        }
                    } 
                } 
                var_22 *= max((max((10699126645433312886ULL), (((/* implicit */unsigned long long int) (signed char)-20)))), (((/* implicit */unsigned long long int) var_9)));
                var_23 = ((/* implicit */int) 18096828347202452097ULL);
                /* LoopNest 3 */
                for (short i_10 = 1; i_10 < 12; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        for (short i_12 = 2; i_12 < 14; i_12 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) arr_3 [i_5] [i_4] [i_5]);
                                var_25 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(arr_21 [i_4] [i_5] [i_10] [i_10] [i_4] [i_10])))), (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)0))))) ? (max((var_5), (((/* implicit */unsigned long long int) arr_15 [i_12] [i_12])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-10)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
