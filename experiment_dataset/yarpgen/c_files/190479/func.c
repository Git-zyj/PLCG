/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190479
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
    var_17 = ((/* implicit */signed char) min(((~(((/* implicit */int) var_15)))), (((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_4 = 4; i_4 < 15; i_4 += 4) 
                            {
                                var_18 = ((/* implicit */int) arr_4 [7LL] [i_0] [i_0]);
                                var_19 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_4 - 1]);
                            }
                            arr_13 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2]))) & ((-(((unsigned long long int) arr_10 [i_0]))))));
                            var_20 = ((/* implicit */unsigned short) arr_3 [i_2] [i_0]);
                            var_21 = ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_0]))));
                            var_22 *= ((/* implicit */signed char) arr_3 [i_1] [i_3]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 3; i_5 < 15; i_5 += 4) 
                {
                    for (signed char i_6 = 3; i_6 < 16; i_6 += 3) 
                    {
                        {
                            arr_20 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [(short)1] [i_0]);
                            var_23 = arr_9 [i_0];
                            arr_21 [i_0] [i_0] [i_5] [i_6 - 1] [i_0] [(_Bool)1] = ((((/* implicit */_Bool) (short)0)) ? (8792204895347195241ULL) : (8792204895347195247ULL));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) arr_1 [i_0]);
                            var_25 = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_7] [i_0]);
                        }
                    } 
                } 
                arr_28 [i_0] [i_0] = ((/* implicit */unsigned int) var_10);
            }
        } 
    } 
    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (-(((/* implicit */int) (signed char)49)))))));
}
