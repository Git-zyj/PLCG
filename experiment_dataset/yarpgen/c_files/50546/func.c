/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50546
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((4864839092307717974ULL), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (max((4351198737767429373LL), (((/* implicit */long long int) (signed char)-94)))) : (((/* implicit */long long int) 1624432965))))) ? (((/* implicit */int) (short)-30799)) : (((/* implicit */int) (unsigned char)203))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_15 += ((/* implicit */unsigned int) 4864839092307717959ULL);
                            arr_11 [i_3] [i_1] [(unsigned short)19] = ((/* implicit */short) ((((/* implicit */_Bool) 4351198737767429397LL)) ? (1624432957) : (((/* implicit */int) (signed char)2))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_3 [i_2] [i_3])) ? ((~(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) -1624432941)) ? (1968717079) : (1032399231))))) : ((~(max((((/* implicit */int) var_13)), (1129555416)))))));
                            arr_13 [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned char)76), (((/* implicit */unsigned char) (_Bool)0))))) ? (var_4) : (((/* implicit */int) max(((unsigned char)245), (((/* implicit */unsigned char) (signed char)-18)))))));
                        }
                    } 
                } 
                arr_14 [i_1] &= ((((/* implicit */int) (unsigned char)221)) << (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-73)), ((unsigned short)23)))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        {
                            var_16 *= ((/* implicit */unsigned int) 2623639443550104087LL);
                            arr_20 [i_5] [i_4] = ((/* implicit */unsigned short) (!((_Bool)1)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned char)29)), (11800954348452074712ULL)));
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_4))));
}
