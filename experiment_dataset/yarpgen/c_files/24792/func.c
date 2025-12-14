/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24792
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
    var_12 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */int) ((long long int) (~(((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_3 [i_0] [i_1]) : (((/* implicit */long long int) 275426921)))))));
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_3 [i_0] [i_0]))));
                var_15 = ((/* implicit */short) var_3);
                var_16 = ((/* implicit */unsigned long long int) 2849841367U);
                var_17 = ((unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 + 2])) ? (((/* implicit */long long int) arr_0 [i_0 + 2])) : (arr_2 [i_0 + 2] [i_0 + 2])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_4 = 1; i_4 < 16; i_4 += 3) 
                {
                    var_18 = ((/* implicit */short) var_2);
                    var_19 = ((/* implicit */short) max((((/* implicit */long long int) (-2147483647 - 1))), (5848240327785724977LL)));
                    var_20 = ((/* implicit */int) ((unsigned int) var_1));
                    var_21 = ((/* implicit */unsigned char) arr_11 [i_2] [i_2] [i_3] [i_4 + 1]);
                }
                for (int i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            {
                                var_22 += ((/* implicit */unsigned int) (short)-1);
                                var_23 = ((/* implicit */_Bool) 1664460694U);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 4; i_8 < 15; i_8 += 2) 
                    {
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4)) ? (arr_15 [i_3] [i_3] [i_3] [i_8]) : (max((arr_15 [i_2] [i_3] [i_2] [i_8]), (((/* implicit */unsigned long long int) 1664460694U))))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) min((((/* implicit */int) (short)4)), (0)))) ^ (((((/* implicit */_Bool) arr_18 [i_8 + 1] [i_8 + 2] [i_8] [i_8] [i_8] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : ((+(877297605U)))))));
                        var_26 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4))) : (arr_2 [i_3] [i_3])));
                        var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) ((short) (short)20))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned short) ((int) arr_18 [i_2] [i_2] [i_3] [i_3] [i_3] [i_3]));
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-11366)) ? (arr_4 [i_2] [i_5] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_9])))));
                    }
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_17 [i_2] [i_2] [i_2] [i_2]), (arr_17 [i_2] [i_2] [i_2] [i_2])))) ? (3967005729309152242ULL) : (((/* implicit */unsigned long long int) ((var_8) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_3])) ? (((/* implicit */int) (short)11366)) : (((/* implicit */int) (short)-5))))))))));
                    var_31 = ((/* implicit */unsigned int) (short)-4);
                    var_32 = ((/* implicit */long long int) ((unsigned int) 18446744073709551615ULL));
                }
                /* LoopNest 3 */
                for (unsigned long long int i_10 = 2; i_10 < 16; i_10 += 2) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 17; i_12 += 4) 
                        {
                            {
                                var_33 = ((/* implicit */int) var_10);
                                var_34 = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) (short)1)) ? (arr_25 [i_2] [i_3] [i_10] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) >> (((2630506601U) - (2630506543U))))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)11390)))))))));
                            }
                        } 
                    } 
                } 
                var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (short)-4))));
            }
        } 
    } 
}
