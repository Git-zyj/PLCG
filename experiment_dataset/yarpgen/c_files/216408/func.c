/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216408
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (var_1) : (max((((/* implicit */long long int) (unsigned char)130)), (-4928164942245691524LL)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_15))));
                    var_21 ^= ((/* implicit */_Bool) (+(596122952)));
                }
                for (signed char i_3 = 2; i_3 < 19; i_3 += 1) 
                {
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (-2147483647 - 1)))));
                    var_23 *= ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((3941530687U), (((/* implicit */unsigned int) (short)-32748))))) ? (((/* implicit */int) var_4)) : (((int) (short)-2985))))));
                }
                var_24 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
                var_25 = ((/* implicit */signed char) ((short) ((int) arr_3 [i_0 + 1] [11U] [i_1])));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    var_26 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0))));
                    var_27 ^= ((/* implicit */signed char) ((unsigned int) 1048458901U));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 4; i_5 < 21; i_5 += 1) 
                    {
                        for (signed char i_6 = 1; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_28 = arr_15 [i_6 - 1] [i_6 + 2] [(short)10] [i_0] [i_0];
                                arr_17 [i_1] [i_1] [i_4] [i_1] [i_5] [i_6] = ((/* implicit */unsigned int) var_17);
                                var_29 = ((/* implicit */short) (((-(((/* implicit */int) var_18)))) != (65535)));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
