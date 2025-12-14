/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26666
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
    for (short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0 - 2] [i_0] [i_1] [i_2] [i_2] [i_4 - 1] |= ((/* implicit */int) (!(((/* implicit */_Bool) ((short) ((unsigned long long int) arr_3 [i_1] [i_2]))))));
                                arr_14 [i_4] = ((/* implicit */unsigned char) arr_4 [i_1] [i_2] [i_4]);
                                arr_15 [i_0 + 2] [i_4] [i_0] [i_0] [i_0] [i_0 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_0)))) ? ((~(((/* implicit */int) ((_Bool) var_8))))) : (((/* implicit */int) arr_2 [i_0 + 2] [i_0] [i_0 + 2]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            {
                                arr_21 [i_0 + 3] [i_0] [i_5] [(unsigned short)4] [i_0] = ((/* implicit */unsigned int) arr_11 [i_0]);
                                arr_22 [i_5] = ((/* implicit */signed char) (+((-(arr_9 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 2])))));
                                arr_23 [i_0] [i_1] [i_2] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_17 [i_0 + 3] [i_1] [(unsigned char)12] [i_5])))) ? ((+((-(var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 2])) ? (((/* implicit */long long int) ((arr_1 [i_0]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (9200519824460027897LL))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            {
                arr_29 [i_7] [8U] = ((/* implicit */int) ((_Bool) (-(arr_9 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]))));
                arr_30 [i_8 - 1] [i_7] = ((/* implicit */long long int) ((signed char) (~((+(((/* implicit */int) arr_8 [i_7] [i_7] [i_8 - 1] [i_7])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
    var_20 = ((/* implicit */int) var_4);
    var_21 = ((/* implicit */unsigned int) var_13);
}
