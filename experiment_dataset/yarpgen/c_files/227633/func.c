/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227633
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)55662)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21362))) : (((unsigned int) arr_10 [i_1] [i_4] [i_4] [i_4 - 2] [i_4 - 1]))));
                                arr_15 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((max((((/* implicit */int) ((_Bool) (short)-21364))), (((((/* implicit */_Bool) 7756867503995433442LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))))) != (((/* implicit */int) arr_1 [i_2] [i_4]))));
                                var_21 = ((/* implicit */signed char) ((int) min((((/* implicit */int) (unsigned short)52943)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (unsigned short)52943)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) arr_17 [i_2 - 1] [i_1] [i_2 + 1] [i_5] [i_5 - 1] [i_2 - 1]);
                                var_22 = ((/* implicit */short) (+(((((/* implicit */int) (unsigned short)52940)) + (((/* implicit */int) (_Bool)0))))));
                                var_23 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)13408)) || (((/* implicit */_Bool) max((arr_7 [i_0] [i_1] [i_5 + 1] [i_6]), (((/* implicit */long long int) var_15))))))) ? ((+(((/* implicit */int) arr_8 [i_2 - 1] [i_2 + 1] [i_2 - 1])))) : (((/* implicit */int) var_9))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            {
                                var_24 -= ((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */int) (short)21362)), (arr_14 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) max((((((arr_3 [i_2 - 1] [i_2 - 1] [i_2 + 1]) + (9223372036854775807LL))) << (((((/* implicit */int) var_0)) - (45940))))), (((/* implicit */long long int) ((((/* implicit */int) (short)25558)) >= (((/* implicit */int) (_Bool)0))))))))));
                                var_26 -= ((/* implicit */short) max((max(((_Bool)1), (arr_13 [i_7] [i_2 + 1] [i_7] [i_8]))), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_2 + 1] [i_8]))))) != (((/* implicit */int) ((unsigned short) 2146435072U)))))));
                                var_27 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_7 [i_0] [i_1] [i_2] [i_8]), (((/* implicit */long long int) arr_5 [i_0] [i_8]))))) ? (((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_2 + 1] [i_2] [i_7] [i_8] [i_0]))) : (((int) 2303141740U))))) | (var_3)));
                                var_28 = arr_9 [i_0] [i_1] [i_2 + 1] [i_7] [i_8] [i_1];
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned int) var_5);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 0; i_9 < 20; i_9 += 2) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                arr_30 [i_9] [i_9] [i_10] = ((/* implicit */short) arr_25 [i_9] [i_10]);
                arr_31 [i_9] [i_10] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_26 [i_9]))))))));
                var_30 = ((/* implicit */long long int) ((int) (~(arr_27 [i_9]))));
                arr_32 [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 503316480U))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned int) var_11);
    var_32 = (short)-25559;
    var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */unsigned long long int) max((((unsigned int) var_1)), (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))))) >= (((unsigned long long int) (+(((/* implicit */int) var_9))))))))));
}
