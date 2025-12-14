/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35012
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_2 [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_3))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */_Bool) ((short) (unsigned char)50));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3 - 1]);
                                arr_14 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_2] [(unsigned char)10] [i_0] = ((/* implicit */short) arr_4 [i_1] [i_5] [i_1]);
                                arr_20 [i_0] = ((/* implicit */unsigned char) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) arr_0 [i_0]))));
    }
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        for (short i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_7))));
                var_21 = ((/* implicit */signed char) (!(arr_11 [i_7] [i_8] [i_8] [i_8] [i_7])));
            }
        } 
    } 
}
