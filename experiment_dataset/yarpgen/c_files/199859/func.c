/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199859
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
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_9 [i_0 - 1] [i_1] [i_0 - 1] &= ((/* implicit */signed char) (~(((((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 2])) >> (((/* implicit */int) arr_3 [i_0] [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (((/* implicit */int) ((((-3721212113771151922LL) & (((/* implicit */long long int) ((/* implicit */int) var_8))))) == (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_3])))))))) : ((+(31)))));
                                var_18 -= ((/* implicit */long long int) ((((/* implicit */int) var_0)) + (var_10)));
                            }
                        } 
                    } 
                    arr_16 [i_0] [(unsigned char)12] [i_2] [i_0] = ((/* implicit */short) var_11);
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0 - 3]))))) ? (-2015662175) : (503316480)))) ? (((/* implicit */unsigned long long int) -1602796083)) : ((~(8826547361376098731ULL)))));
                    var_20 &= ((/* implicit */unsigned int) arr_8 [i_2] [i_2] [i_1] [i_0]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 2; i_5 < 13; i_5 += 2) 
    {
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            {
                arr_22 [i_6] [i_6] = (-(((/* implicit */int) var_3)));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((unsigned long long int) ((arr_4 [i_5 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5] [i_7] [i_8] [i_8])))))))));
                            arr_28 [i_5] [i_6] [i_6] [i_7] [7] [i_6] = ((/* implicit */unsigned long long int) arr_3 [i_7] [i_7]);
                            arr_29 [i_5] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_20 [i_5 - 1]))));
                            var_22 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_7)) ? (arr_23 [i_5] [i_5 + 4] [10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_5] [i_5 + 2] [(unsigned char)2] [i_5])))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) 8826547361376098731ULL);
            }
        } 
    } 
}
