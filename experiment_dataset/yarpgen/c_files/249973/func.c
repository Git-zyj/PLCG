/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249973
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_9))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (((-(((unsigned int) arr_3 [i_0] [i_1] [i_1])))) >> (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_3)))) : (min((((/* implicit */unsigned int) arr_2 [i_1] [i_0])), (559325288U)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 19; i_5 += 3) 
                    {
                        for (short i_6 = 3; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) (+((-(((/* implicit */int) arr_12 [i_2] [i_3]))))));
                                arr_21 [i_2] [i_3] [i_3] [i_6] = ((/* implicit */int) (!(var_11)));
                                var_16 |= ((/* implicit */unsigned short) (+(max((-5607086287177485089LL), (((/* implicit */long long int) 2282716731U))))));
                                arr_22 [i_2] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) var_10);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        for (short i_8 = 1; i_8 < 17; i_8 += 2) 
                        {
                            {
                                arr_29 [i_8 - 1] [i_3] [i_4] [i_8 - 1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16383)) ? (((/* implicit */int) (unsigned short)16404)) : (((/* implicit */int) var_9))))) ? ((+(((/* implicit */int) arr_20 [i_8 + 3] [i_8 - 1] [i_8] [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_8 + 2])))) : (((/* implicit */int) ((((/* implicit */int) arr_28 [i_8 - 1] [i_8 + 2] [i_8 + 2] [i_8 + 3] [i_8 - 1] [i_8 + 3])) <= (((/* implicit */int) arr_28 [i_8 + 3] [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8 + 3])))))));
                                var_17 |= ((/* implicit */long long int) var_8);
                                var_18 &= (-(arr_9 [0] [0] [i_4]));
                            }
                        } 
                    } 
                    var_19 &= ((/* implicit */signed char) var_7);
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            {
                                arr_38 [i_2] [(signed char)19] [i_10] [i_9] [i_3] = ((/* implicit */long long int) ((unsigned short) (unsigned short)16404));
                                arr_39 [i_2] [i_3] [i_4] [i_4] [i_3] [i_4] = ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_13 [(_Bool)1] [i_4])) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_16 [i_3])) : ((-(((/* implicit */int) arr_34 [i_2] [i_2] [i_4] [i_9] [i_10]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
