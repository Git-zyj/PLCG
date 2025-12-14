/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218911
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_10))));
    var_20 *= ((/* implicit */signed char) ((max((((var_5) + (((/* implicit */int) var_7)))), (((/* implicit */int) var_15)))) >= (((/* implicit */int) ((((unsigned long long int) 1132629584)) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_12)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_21 = max(((+(((/* implicit */int) var_14)))), (-1190564356));
                    arr_6 [i_0] [i_1] [i_1] [i_2] |= ((/* implicit */unsigned long long int) (~(var_9)));
                    arr_7 [i_2] [i_1] = ((/* implicit */unsigned long long int) (~(536870912)));
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) 1190564356)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15))) : (9223372036854775807LL))))));
        arr_8 [i_0] = (unsigned short)37308;
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 4; i_3 < 20; i_3 += 1) 
        {
            for (short i_4 = 3; i_4 < 21; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        for (long long int i_6 = 1; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(1ULL))))));
                                var_24 *= ((/* implicit */unsigned long long int) var_15);
                                var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) ((unsigned short) -536870912))))));
                                var_26 = ((/* implicit */unsigned long long int) arr_21 [i_0] [i_3] [i_4] [i_6]);
                            }
                        } 
                    } 
                    arr_24 [i_4] [i_4] = 766362682U;
                    var_27 += ((/* implicit */signed char) (+(((/* implicit */int) (short)-8933))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (!(((((/* implicit */unsigned int) 0)) == (766362682U))))))));
                        var_29 = ((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) arr_20 [i_7] [i_4] [i_3] [i_0] [i_0])))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        arr_30 [i_8] [i_4] [i_3] [i_4] [i_0] = ((/* implicit */_Bool) var_2);
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) max(((~((-(((/* implicit */int) var_15)))))), (((/* implicit */int) var_15)))))));
                    }
                    var_31 = ((/* implicit */unsigned char) arr_17 [i_4] [i_4] [i_4] [i_0]);
                }
            } 
        } 
    }
}
