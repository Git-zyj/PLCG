/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212249
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 17; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))));
                                arr_14 [i_4] = ((/* implicit */unsigned char) ((((unsigned int) arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(0U))))))))));
                                var_18 = ((/* implicit */short) 5U);
                                var_19 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51968))))) << (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)12))) <= (4294967290U))))) & (4294967295U)))));
                                var_20 = ((/* implicit */short) ((_Bool) (+((+(arr_7 [i_0] [i_0] [7LL] [i_0]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((5U) != (1716748304U)));
                            arr_22 [i_0] [i_0] [i_5] [i_6] = ((/* implicit */long long int) (+(((((/* implicit */int) (!(((/* implicit */_Bool) 1716748298U))))) >> (((((/* implicit */int) ((signed char) arr_0 [i_0]))) - (86)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
    {
        for (short i_8 = 2; i_8 < 16; i_8 += 3) 
        {
            {
                var_21 = ((((/* implicit */long long int) (-(2578218979U)))) / (((long long int) 4294967277U)));
                arr_30 [i_7] [i_8] = ((/* implicit */unsigned char) arr_28 [i_7]);
            }
        } 
    } 
}
