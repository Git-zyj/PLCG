/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227580
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
    var_11 = var_4;
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_12 *= ((/* implicit */unsigned char) var_10);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1 - 1] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) ((short) (signed char)32)))))) ? ((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-87)))) : (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((short) arr_4 [i_0])))))));
                                var_13 = ((/* implicit */short) ((((((/* implicit */int) (signed char)118)) | (((/* implicit */int) (signed char)-105)))) | (arr_10 [i_2] [(short)4] [i_2] [i_2] [i_2 + 1] [i_3])));
                                var_14 = ((/* implicit */short) arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                                var_15 = ((/* implicit */signed char) var_8);
                            }
                        } 
                    } 
                    arr_14 [i_2] [i_2] [i_2] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-105)) ? (2147450880) : ((~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (short)-22199)) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (arr_10 [i_2] [i_2 - 1] [i_2] [i_1] [i_0] [i_0]))))));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (arr_9 [(short)7] [i_2] [i_1] [i_1 - 1] [i_2 - 2] [i_2]) : (1725397593)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        for (short i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((arr_11 [i_5] [i_5] [i_5] [i_5] [(short)2] [i_5]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((var_7), (((/* implicit */short) var_9))))) : (((/* implicit */int) arr_6 [i_6]))))));
                var_18 -= ((/* implicit */short) ((((/* implicit */int) var_3)) * (((var_8) ? (((/* implicit */int) arr_19 [i_5] [i_5] [i_6])) : (((/* implicit */int) arr_19 [i_5] [i_5] [i_6]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_3);
}
