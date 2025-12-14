/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42786
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
    var_13 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-4112)))))) ? (((/* implicit */int) var_1)) : (arr_1 [i_0] [i_0]))))));
        var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) 1860484097505984878ULL))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 17; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                {
                    var_16 = ((/* implicit */_Bool) arr_3 [2] [i_3]);
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (int i_5 = 2; i_5 < 15; i_5 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2 - 2] [i_5 + 3])))))));
                                var_18 = ((/* implicit */unsigned int) arr_1 [i_1] [i_1]);
                                var_19 = ((((/* implicit */_Bool) ((short) arr_3 [i_5 - 2] [i_2]))) || (((/* implicit */_Bool) (short)(-32767 - 1))));
                                var_20 ^= ((/* implicit */unsigned char) ((min((arr_13 [i_2] [i_2] [i_2] [i_3] [i_4 - 1] [i_5 + 1]), (arr_13 [i_2] [i_3] [i_3] [i_3] [i_4 - 1] [i_5 + 1]))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_7 [i_5 + 1] [i_4 - 1] [i_2 - 2]))))))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1024))) < ((+(arr_3 [i_2] [i_3])))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) var_1);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_1] [i_6] [i_1] [i_1])) ^ (var_2)));
            var_24 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [10U] [i_6] [i_1])) - (((/* implicit */int) (unsigned short)1024))))), (min((arr_11 [i_1] [16ULL] [i_6] [i_6] [i_6]), (((/* implicit */unsigned int) (unsigned short)64519))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)64526)) : (((/* implicit */int) var_12))))) + (((unsigned int) var_9))));
                var_26 = ((/* implicit */unsigned int) arr_4 [9U] [i_1]);
            }
            var_27 = max((((/* implicit */int) max((arr_8 [i_1] [i_1] [i_6]), (arr_8 [i_6] [i_1] [i_1])))), ((-(((/* implicit */int) arr_8 [i_6] [i_6] [i_1])))));
        }
        var_28 = ((/* implicit */_Bool) ((((int) arr_7 [i_1] [(unsigned char)6] [i_1])) * ((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_12 [i_1])) : (((/* implicit */int) arr_14 [i_1] [i_1]))))))));
    }
    var_29 = ((/* implicit */unsigned int) var_5);
}
