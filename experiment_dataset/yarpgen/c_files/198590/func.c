/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198590
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
    for (int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) var_7);
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
                    {
                        arr_10 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((860477362U), (((/* implicit */unsigned int) arr_1 [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [14U] [14U]))) : (55466577764499831LL))) << (((((/* implicit */_Bool) 4675663601655386887LL)) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [(_Bool)1] [i_1 - 2] [i_0]))) : (var_1))) : (max((((/* implicit */long long int) (unsigned short)2631)), (var_4)))))));
                        arr_11 [i_0 - 1] [i_1 - 1] [i_1] [i_1] [i_3] [i_0 + 2] = max((((((/* implicit */_Bool) -5534293637167649389LL)) ? (((/* implicit */int) (short)-25889)) : (((/* implicit */int) (short)-1341)))), (((/* implicit */int) ((arr_2 [i_1 - 2] [i_1 + 1] [i_1 + 2]) && (arr_2 [i_1 - 2] [i_1 + 1] [i_1 + 2])))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (_Bool)1))));
                        arr_16 [i_2] [i_1] [2] [(unsigned short)0] = ((/* implicit */long long int) -731561545);
                    }
                    var_18 += ((/* implicit */unsigned char) arr_14 [i_0 + 2] [i_0 + 1] [i_0 + 1]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            {
                var_19 = (~(((unsigned int) arr_21 [(short)2] [i_6] [i_6])));
                arr_22 [i_5] = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)16))) : (arr_21 [(_Bool)1] [i_6] [(short)6])))))) > (max((((/* implicit */long long int) ((((/* implicit */int) var_13)) * (((/* implicit */int) (signed char)-17))))), (((((/* implicit */_Bool) -55466577764499828LL)) ? (10LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-30143)))))))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) (short)4096))))), (max((arr_17 [i_5]), (arr_17 [8])))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65526))) - (var_6)))) ? (((((/* implicit */_Bool) -6798540081902320074LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10))) : (arr_21 [i_5] [i_6] [(unsigned short)22]))) : (((/* implicit */unsigned int) ((arr_18 [i_6]) + (((/* implicit */int) var_15))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_6]))))))))));
            }
        } 
    } 
}
