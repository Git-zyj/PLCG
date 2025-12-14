/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4419
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
    var_16 = var_15;
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1367258415))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_0 [i_0]))))))) > (-1367258415)));
                                arr_18 [i_0] [i_2] [i_2] [i_1 - 2] [i_0] [i_0] = ((/* implicit */short) arr_14 [i_0 - 1] [i_1 - 2] [i_0 - 1] [i_3 - 1] [i_3 + 1]);
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min((arr_12 [i_2] [i_2] [i_2] [i_1 + 1]), (((/* implicit */long long int) ((((/* implicit */_Bool) -1367258414)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)215))) : (4294967295U)))))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((var_7) / (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))));
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)32))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) : (3166832228U)));
                                arr_27 [i_0] [i_1 - 1] [i_0] [(short)15] [i_7] = ((/* implicit */_Bool) arr_25 [9] [i_0 + 1] [i_1 + 2] [i_7 + 1] [i_7]);
                                arr_28 [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned int) var_10);
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) & (1367258391)))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_8 = 1; i_8 < 9; i_8 += 3) 
    {
        for (short i_9 = 1; i_9 < 7; i_9 += 4) 
        {
            {
                arr_33 [i_8 + 1] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (short)15914)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3798))) : (6363309132847891321ULL)));
                var_22 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) arr_7 [(signed char)7] [i_8]))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) max(((signed char)64), ((signed char)64)))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)5997))))))) : (((unsigned int) 9223372036854775807LL))));
                /* LoopSeq 1 */
                for (int i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    var_23 += arr_3 [6U];
                    arr_38 [i_8] [i_8] [i_9] [(short)4] = ((/* implicit */short) var_14);
                    var_24 = ((/* implicit */unsigned char) var_9);
                    var_25 &= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_12)) ? (0) : (((/* implicit */int) (unsigned short)42404)))) : (((/* implicit */int) var_5))))), (((long long int) 3166832228U))));
                }
                var_26 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)38))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) (signed char)-41);
}
