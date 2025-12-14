/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232316
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
    var_13 = var_5;
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [(short)0] [i_0] = ((/* implicit */unsigned short) (short)-28266);
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [i_4 + 2] &= ((/* implicit */long long int) min(((unsigned short)55592), (((/* implicit */unsigned short) (short)32767))));
                                var_14 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) var_7))) + (((/* implicit */int) var_9))));
                                arr_15 [i_3] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)8133)))), (max(((+(((/* implicit */int) (short)11020)))), (((/* implicit */int) min(((short)-8133), (arr_3 [i_1] [(short)19]))))))));
                                var_15 -= ((/* implicit */unsigned short) var_11);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        for (short i_6 = 2; i_6 < 18; i_6 += 3) 
        {
            for (long long int i_7 = 1; i_7 < 20; i_7 += 3) 
            {
                {
                    var_16 = var_10;
                    var_17 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((short) 4037509645300439877LL))))) ? (((/* implicit */int) (short)6844)) : ((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-16537)) : (((/* implicit */int) var_6))))))));
                    arr_23 [i_6] [(short)20] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_5), ((short)-13693)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)6829))))) : (((arr_21 [i_5]) - (arr_21 [i_6 + 3])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_3);
}
