/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33234
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((12132397948083232310ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [(unsigned short)1]))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((-621852145) + (((/* implicit */int) var_0)))))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : ((+(var_13)))));
                    arr_8 [i_0] [(unsigned short)2] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) -3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            for (long long int i_4 = 1; i_4 < 11; i_4 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_2))))) ? (var_9) : (((/* implicit */long long int) var_3))));
                    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_4 + 1]))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        var_21 |= ((/* implicit */unsigned short) arr_0 [i_3] [i_5]);
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((2) < (((/* implicit */int) var_4))))) / (((((/* implicit */_Bool) arr_9 [i_0] [i_4] [i_5])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_13 [i_0] [i_4] [(short)6]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_0]))))) : (arr_7 [i_3] [i_4 + 2] [i_4 - 1] [i_4 + 3]))))));
                        var_24 = ((/* implicit */unsigned short) (+(-2)));
                    }
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_8)))) ? (arr_0 [i_4 + 2] [i_0]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_14)))))));
                }
            } 
        } 
        arr_22 [i_0] = ((/* implicit */int) arr_15 [i_0] [(_Bool)1] [i_0] [i_0]);
    }
    var_26 = var_14;
}
