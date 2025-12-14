/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24816
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
    for (long long int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) 1191931229))));
                            arr_11 [i_0 - 1] [i_0] [i_2 + 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 416696940)) ? (416696940) : (((/* implicit */int) (_Bool)1))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 4; i_5 < 15; i_5 += 2) 
                    {
                        {
                            arr_16 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) (signed char)(-127 - 1))), ((-(((/* implicit */int) (signed char)-126))))));
                            arr_17 [i_0] [i_4] [i_5 - 3] = ((/* implicit */_Bool) (-(min(((-(0U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)728)))))))));
                            arr_18 [i_0] [i_1 - 3] [i_4] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54423)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (unsigned char)140))))) ? ((-(((/* implicit */int) (short)-729)))) : (((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)3628))))))), ((-(8719149786762556120LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-17458)), (2553526257U)))) ? (min((-5469613714500938207LL), (((/* implicit */long long int) (_Bool)0)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32759)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (1403479678U))))));
}
