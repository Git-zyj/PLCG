/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37632
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (int i_4 = 4; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) 355926641)) ? (-1948972464) : (((/* implicit */int) (short)-25140)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_4] [i_4 - 1] [i_4] [i_2]))))))))));
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)24488))) ? (min((((/* implicit */int) var_13)), (arr_13 [i_1] [i_1] [i_1 - 1] [i_3] [i_4 - 4] [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41032)) ? (-1948972464) : (((/* implicit */int) var_15))))) ? (min((1948972473), (1948972502))) : (((/* implicit */int) (short)(-32767 - 1)))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1] [i_1]))));
                                var_19 = ((short) ((((/* implicit */_Bool) ((signed char) -1948972448))) ? (((/* implicit */int) ((signed char) (unsigned short)41064))) : (max((((/* implicit */int) (unsigned short)41055)), (var_14)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                arr_21 [i_1] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(-1948972437)))) ? (min((((/* implicit */int) (signed char)106)), (-1948972456))) : ((((_Bool)1) ? (((/* implicit */int) (short)32736)) : (-2034546728)))));
                                var_20 *= ((/* implicit */unsigned short) min((((/* implicit */int) ((short) arr_15 [i_0] [i_1 - 1] [i_2] [i_5]))), (1948972447)));
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (+(((/* implicit */int) ((signed char) min((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_5])), (32512))))))))));
                                arr_22 [i_1] [i_2] [i_5] [i_1] = min((max(((~((-2147483647 - 1)))), (((var_2) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11)))))), ((~(((/* implicit */int) (short)28897)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
    {
        for (int i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    for (short i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 1; i_11 < 20; i_11 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) min((((/* implicit */int) arr_27 [i_7])), (1948972486)))) ? (((int) arr_27 [i_9])) : ((-(-1948972502)))))));
                                arr_35 [i_10] [i_8] [i_8] [i_10] [i_11] = ((/* implicit */short) (!((!(((/* implicit */_Bool) (unsigned short)24475))))));
                                var_24 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_24 [i_7]) : (arr_24 [i_10]))))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
            }
        } 
    } 
}
