/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243893
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
    var_16 = ((/* implicit */unsigned char) var_14);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (arr_0 [i_0] [i_0 + 1])));
        var_18 &= ((var_15) != (arr_1 [6U]));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_12 [10LL] = ((/* implicit */unsigned short) ((arr_3 [i_0 + 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                                var_19 = ((/* implicit */unsigned int) var_10);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) arr_1 [i_2]);
                    arr_13 [i_0] [i_0] [i_2] = ((/* implicit */signed char) arr_6 [2] [i_1] [3U]);
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */int) var_12)) * (((/* implicit */int) arr_4 [i_0] [i_0] [(unsigned short)1])))) : (((/* implicit */int) var_13))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        arr_18 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0] [i_0])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                        var_22 |= ((var_6) % (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]))));
                        var_23 = arr_16 [i_1] [i_2] [i_5];
                        arr_19 [(_Bool)1] [i_1] [i_2] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_13))) | (var_8)));
                        var_24 = ((/* implicit */_Bool) arr_11 [1] [i_0 - 2] [4U] [i_5] [i_5]);
                    }
                }
            } 
        } 
        arr_20 [i_0 - 1] = ((arr_6 [i_0 + 1] [i_0 + 1] [i_0]) * (var_7));
    }
    for (unsigned short i_6 = 2; i_6 < 19; i_6 += 3) 
    {
        arr_24 [i_6] [9ULL] = ((/* implicit */int) arr_22 [i_6 - 1] [i_6 - 1]);
        var_25 = ((/* implicit */int) ((var_2) < (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) / (((/* implicit */int) var_3)))))));
        arr_25 [i_6] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_23 [i_6] [i_6])) >> (((((/* implicit */int) var_10)) + (86))))) << (((((/* implicit */int) var_14)) - (29198)))));
    }
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
}
