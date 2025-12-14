/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27694
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) var_15);
        var_19 = ((/* implicit */int) max((var_19), (((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 13; i_2 += 2) 
        {
            for (unsigned char i_3 = 3; i_3 < 15; i_3 += 2) 
            {
                {
                    var_20 *= ((/* implicit */short) (_Bool)1);
                    arr_14 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((9247757665643368894ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))))));
                }
            } 
        } 
        arr_15 [i_1] = ((/* implicit */signed char) var_6);
        var_21 = ((/* implicit */unsigned int) arr_8 [i_1]);
        var_22 += ((/* implicit */unsigned char) ((((/* implicit */int) var_17)) + (((/* implicit */int) var_4))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 3; i_4 < 14; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) (short)12564);
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 12; i_6 += 2) 
                    {
                        for (int i_7 = 1; i_7 < 15; i_7 += 3) 
                        {
                            {
                                var_24 &= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_6 - 1])) : (((/* implicit */int) (_Bool)1))));
                                var_25 = ((/* implicit */long long int) ((unsigned int) arr_8 [i_6 - 1]));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */long long int) ((((/* implicit */int) var_14)) % (((/* implicit */int) arr_17 [i_1] [i_1] [i_1]))));
                }
            } 
        } 
    }
    var_27 = ((/* implicit */long long int) var_6);
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (var_8)))) ? (max((max((var_6), (((/* implicit */unsigned int) var_15)))), (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    var_29 = var_10;
}
