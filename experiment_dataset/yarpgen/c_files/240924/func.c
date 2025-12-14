/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240924
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_1] [i_1 + 2]);
                            arr_9 [i_3] [12] [i_1] [12] [i_1] [i_0] = (~((~(max((((/* implicit */unsigned long long int) arr_1 [i_1])), (arr_6 [i_0] [i_1] [i_2] [i_2]))))));
                            var_18 = (+(((/* implicit */int) (short)-18242)));
                            var_19 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_12)))) ? (arr_7 [i_3] [i_2] [i_1] [i_0 - 1]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))))));
                        }
                    } 
                } 
                var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [(unsigned short)8] [i_1 + 1])) && ((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0 - 1])))))))));
                var_21 = ((/* implicit */signed char) var_0);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            {
                var_22 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (short)-18214)) ? (((/* implicit */unsigned long long int) -5557540857838459470LL)) : (11854541928498736049ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) ((arr_14 [i_4] [i_4] [i_5]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
                var_23 = ((/* implicit */unsigned short) var_10);
            }
        } 
    } 
}
