/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244458
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_1 [i_1] [i_1])), (((((/* implicit */int) (unsigned short)44778)) << (((1936255605U) - (1936255602U)))))));
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1] [i_0]))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (long long int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_0] [i_0] [(_Bool)1]))));
                            arr_11 [(short)4] [(short)9] [(short)9] [(short)9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (min((arr_6 [i_3 - 2] [i_3 - 1] [i_3 - 1]), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0]))) > (arr_5 [i_0] [i_1] [(short)11])))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
                arr_12 [(unsigned short)10] [(_Bool)1] = ((/* implicit */unsigned short) 2358711706U);
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) min((arr_7 [(_Bool)1] [i_1] [i_1] [i_1]), (((var_18) ? (arr_4 [i_1]) : (arr_7 [i_0] [i_0] [i_1] [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned short i_5 = 1; i_5 < 12; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 12; i_7 += 2) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) min((arr_4 [i_5]), (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))));
                                var_24 = ((/* implicit */unsigned long long int) 2358711691U);
                                arr_26 [i_7] [i_5] [(unsigned char)6] [(unsigned short)7] [i_5] [i_5 + 1] [i_5] = (short)-32767;
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [(_Bool)1] [4LL] [i_6] [i_6] [i_5])) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_6] [i_6])) ? (1936255599U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45086)))))), (274877382656LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
}
