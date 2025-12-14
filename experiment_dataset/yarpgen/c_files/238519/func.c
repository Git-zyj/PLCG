/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238519
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_6)))))) ? (((/* implicit */unsigned long long int) var_0)) : (var_4)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_18 = ((((/* implicit */_Bool) min((var_15), (arr_1 [i_0 + 1])))) ? (((4294967295U) | (4294967295U))) : (arr_1 [i_0 + 1]));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_19 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) arr_6 [i_3] [i_2 + 2] [i_2 + 1])))));
                                var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_7), (var_9)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (var_15))) : (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0])) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64))))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 24; i_6 += 2) 
                        {
                            {
                                var_21 -= ((/* implicit */unsigned short) max((4294967295U), (((/* implicit */unsigned int) (unsigned char)217))));
                                arr_19 [11ULL] [19U] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) var_15)) | (((((/* implicit */_Bool) 9U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_9 [i_1])))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) (~(((arr_12 [i_0 + 1]) + ((~(2147483648U)))))));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 2; i_8 < 24; i_8 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */short) (~(((((/* implicit */unsigned int) ((((/* implicit */int) (short)29480)) & (((/* implicit */int) (unsigned char)28))))) ^ (arr_15 [i_2] [i_2] [i_2 - 1] [i_2 + 3] [i_2 + 2])))));
                                var_24 ^= arr_24 [i_0 - 1] [i_0] [i_0 + 1] [17U] [(unsigned char)23] [24U];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
