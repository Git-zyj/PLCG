/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212878
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
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
    var_16 |= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((short) var_12))) ? ((((_Bool)0) ? (((/* implicit */long long int) var_10)) : (-9177223095253260642LL))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (9177223095253260641LL))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */int) -9177223095253260628LL);
                                var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned int) arr_9 [i_0] [(unsigned char)7] [i_3] [i_4])))))) : (((/* implicit */int) arr_14 [i_0] [i_0] [(signed char)10] [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((short) (-(((/* implicit */int) (unsigned short)0))))))));
                                var_20 = ((/* implicit */short) var_8);
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5] [i_1 - 2] [i_0])) ? (arr_7 [i_0] [i_1 + 1] [i_2]) : (arr_7 [i_0] [i_1 - 1] [i_5])))) ? (((((/* implicit */_Bool) var_3)) ? (arr_16 [i_2] [i_1 + 1] [i_6]) : (arr_16 [i_2] [i_2] [i_5]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [17U] [i_2] [(short)9])) ? (((((/* implicit */_Bool) -9177223095253260641LL)) ? (((/* implicit */long long int) var_4)) : (-3910546509946767497LL))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_5] [i_6] [i_5]))))))))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_22 [i_2] [i_1 - 1]))) ? (((((/* implicit */_Bool) 8342439514639667513ULL)) ? (((/* implicit */int) (signed char)113)) : (arr_22 [i_2] [i_1 + 1]))) : (((((/* implicit */_Bool) arr_22 [i_2] [i_1 + 1])) ? (arr_22 [i_2] [i_1 - 2]) : (arr_22 [i_2] [i_1 - 2])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 1; i_8 < 14; i_8 += 1) 
                        {
                            {
                                arr_30 [i_1] [i_1] &= ((/* implicit */unsigned long long int) ((int) var_2));
                                var_23 = ((/* implicit */short) ((max((arr_26 [i_8 + 1] [i_8] [i_8 - 1] [i_8 - 1] [i_2] [i_8 + 2]), (arr_26 [i_8 - 1] [i_8] [i_8 + 1] [i_8 - 1] [i_2] [i_8 + 1]))) && ((!(((/* implicit */_Bool) (short)-20277))))));
                                var_24 = ((/* implicit */unsigned long long int) arr_17 [i_8 + 4] [i_8 + 3]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        for (short i_10 = 3; i_10 < 16; i_10 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned char)253)) ? (arr_22 [i_0] [i_1]) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 - 1])))) : (((/* implicit */int) ((short) ((unsigned long long int) (short)6380)))))))));
                                var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_36 [i_1 - 1] [i_10 - 2] [16U] [i_9]))) ? (((((/* implicit */int) arr_36 [i_1 - 1] [i_10 - 1] [i_2] [i_2])) & (var_10))) : (((int) (unsigned short)65535))));
                                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_35 [i_0] [i_1 + 1] [i_2])) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) (short)6386)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)44))) : (7929241856119442956LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
