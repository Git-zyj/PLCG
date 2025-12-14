/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243733
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
    var_19 = ((/* implicit */unsigned char) (_Bool)1);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 24; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) var_0);
                                arr_17 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((8536692921697828319ULL), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) (unsigned char)202)) : ((+(673841089)))));
                                var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)21620)) ? (7717512876500410021ULL) : (10376550139158507186ULL)))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)27979)) - (((/* implicit */int) arr_10 [i_3 + 1] [i_3] [i_4] [i_4]))))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (3674630856U) : (((/* implicit */unsigned int) 2147483647)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)20268)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 2) 
                        {
                            {
                                arr_23 [i_2] [i_1] [(signed char)3] [(signed char)3] [(signed char)7] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_5] [i_5] [(unsigned char)15] [(unsigned char)15] [i_0])) != (((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_6] [i_2] [i_2] [12]))))) ? (((/* implicit */int) (unsigned short)15047)) : (min((-2147483642), (((/* implicit */int) (short)-26331))))))));
                                arr_24 [i_0] [(short)17] [(short)15] [i_5] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-32550)) - (((/* implicit */int) (unsigned short)31639))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -673841090)) ? (((/* implicit */int) (unsigned char)0)) : ((+(var_13)))));
}
