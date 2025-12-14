/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208764
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [(_Bool)1] = ((/* implicit */short) arr_1 [i_0]);
                var_17 = ((/* implicit */signed char) max((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), (arr_2 [(unsigned char)12] [i_1] [i_1])))), ((-(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_13))))))));
                var_18 |= ((/* implicit */int) (unsigned short)2403);
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)992)))) - (((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                {
                    arr_13 [i_2] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_4] [i_4] [i_4])) && ((_Bool)1))) ? (((/* implicit */int) (unsigned char)235)) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (short)-989)) : (((/* implicit */int) arr_0 [i_2]))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned char) arr_7 [i_3] [i_3]);
                                arr_19 [i_6] = (_Bool)1;
                                var_21 *= ((/* implicit */signed char) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) (-(((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    for (short i_10 = 1; i_10 < 22; i_10 += 2) 
                    {
                        for (int i_11 = 0; i_11 < 25; i_11 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) (_Bool)1);
                                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) min((max((((/* implicit */int) arr_31 [i_8])), (-120819854))), ((+(((/* implicit */int) arr_26 [i_7] [i_11])))))))));
                            }
                        } 
                    } 
                } 
                arr_35 [i_7] [i_7] = ((/* implicit */unsigned char) arr_28 [i_8] [i_8] [i_7] [i_7]);
                arr_36 [i_7] [9] = ((/* implicit */unsigned short) (-(((/* implicit */int) max(((unsigned char)128), (((/* implicit */unsigned char) arr_25 [i_8] [(short)21] [i_7])))))));
                var_25 += (~(((/* implicit */int) ((((/* implicit */_Bool) max((3940649673949184ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) && (((/* implicit */_Bool) 2147483637))))));
            }
        } 
    } 
}
