/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210342
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) (((+(var_3))) << (((/* implicit */int) (signed char)0))));
                            var_15 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_6 [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)13))) : ((-(((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (246995882U)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    for (long long int i_5 = 2; i_5 < 23; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 23; i_6 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_0))));
                                arr_22 [i_6] [i_6] = ((/* implicit */short) arr_16 [i_0] [i_1] [(unsigned short)8] [i_6]);
                                arr_23 [(unsigned short)11] [i_1] [i_1 + 1] [(_Bool)1] [i_5] [i_6] [i_6] = ((/* implicit */unsigned int) max((778592804), (((/* implicit */int) (signed char)-115))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 1) 
    {
        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            {
                var_17 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4047971434U))));
                var_18 = ((((int) (short)7545)) == (((/* implicit */int) (signed char)112)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_9 = 1; i_9 < 17; i_9 += 4) 
    {
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1105101215U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-7555)))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) -5)) : (0ULL))) : (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */unsigned long long int) max((min((var_9), (((/* implicit */unsigned int) (short)-22524)))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)46078)))))))) : ((+(((unsigned long long int) (unsigned char)26)))))))));
                /* LoopNest 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 18; i_13 += 3) 
                        {
                            {
                                arr_45 [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-13451)) || (((/* implicit */_Bool) min((arr_18 [i_9 + 1] [i_9 + 1] [i_10] [i_10 - 1]), ((-(((/* implicit */int) var_1)))))))));
                                arr_46 [i_9 - 1] [i_9] [i_9 - 1] [i_11] [(short)6] [i_9] = ((/* implicit */signed char) ((((((/* implicit */int) (short)-604)) + (2147483647))) << ((((~(arr_44 [i_11] [i_10 - 1] [i_10] [i_10] [15LL] [i_9 + 1] [i_12]))) - (450429455U)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
