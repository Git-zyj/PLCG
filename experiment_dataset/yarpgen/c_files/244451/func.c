/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244451
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_14 = ((/* implicit */long long int) ((unsigned long long int) 18446744073709551600ULL));
            arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44480)) ? (((/* implicit */int) (short)-12)) : (6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) arr_1 [i_1]))))) : (min((-2), (((/* implicit */int) (unsigned short)60341))))));
            var_15 = ((/* implicit */unsigned short) ((unsigned int) (+(arr_1 [i_1]))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    for (short i_4 = 2; i_4 < 19; i_4 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (max((((((/* implicit */_Bool) 2452720794U)) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_2 + 1] [(_Bool)1] [i_3] [15LL] [i_4 - 2])) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] [i_4])))), (arr_9 [i_0] [i_0]))) : (((/* implicit */int) var_2))));
                            arr_16 [i_1] [i_1] [i_4] [i_3] = ((/* implicit */int) ((max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) arr_14 [i_4] [i_3] [i_1] [i_1] [0])))))) > (((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_2 + 3] [i_2 + 3])))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_5 = 4; i_5 < 17; i_5 += 2) 
        {
            var_17 = arr_18 [i_0] [i_0] [i_0];
            arr_19 [14] [i_5] = ((/* implicit */unsigned long long int) var_0);
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) (short)27)) & ((+(((/* implicit */int) var_10)))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_17 [i_5 - 4] [i_5 - 3]))));
                /* LoopSeq 1 */
                for (int i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    var_20 = ((/* implicit */long long int) ((6) * (((/* implicit */int) (short)34))));
                    var_21 -= ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0]);
                    var_22 = ((/* implicit */unsigned char) arr_21 [i_5] [18LL] [i_7]);
                }
            }
        }
        arr_26 [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 4472787857000221562LL))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65526)))))));
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 23; i_8 += 3) 
    {
        var_23 = ((/* implicit */int) var_10);
        var_24 = arr_27 [i_8] [i_8];
    }
}
