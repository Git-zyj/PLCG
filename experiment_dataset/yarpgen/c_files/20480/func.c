/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20480
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
    var_20 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) min((((short) arr_4 [i_2 - 1] [i_2 + 2] [i_4])), (((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                                var_22 = ((/* implicit */short) var_12);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */int) arr_11 [i_2 + 1] [i_1] [i_0] [i_0] [11ULL] [i_0])) == (((/* implicit */int) (short)6611))))) - (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_13 [i_2] [i_2] [i_0] [i_0] [i_0] [i_0])))))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 - 1] [i_0])) || (((/* implicit */_Bool) arr_3 [i_2] [i_2 + 2] [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            {
                                arr_28 [i_5] [i_5] [i_7] [(unsigned short)13] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) 3168580533774454026ULL)) ? (3168580533774454026ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113)))));
                                var_24 = ((/* implicit */_Bool) var_3);
                                var_25 = ((/* implicit */short) arr_19 [i_5] [i_5] [i_5]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            {
                                arr_33 [i_11] [i_11] [i_7] [1] = ((/* implicit */signed char) arr_18 [i_5]);
                                arr_34 [(short)0] [i_7] [i_7] [i_10] [i_11] = ((/* implicit */unsigned short) var_10);
                                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_5] [i_11])) ? (((/* implicit */unsigned long long int) ((int) max((arr_19 [i_6] [(short)12] [i_10]), (((/* implicit */unsigned long long int) arr_22 [i_6] [18ULL] [i_7] [i_11])))))) : (((((unsigned long long int) arr_30 [i_7])) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_11])))))));
                            }
                        } 
                    } 
                    arr_35 [i_7] = ((/* implicit */signed char) min((((((/* implicit */_Bool) 15278163539935097580ULL)) ? (15278163539935097575ULL) : (15278163539935097580ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14)))))));
                }
            } 
        } 
    } 
}
