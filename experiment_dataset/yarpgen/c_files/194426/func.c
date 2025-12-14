/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194426
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_17 ^= ((/* implicit */signed char) ((_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17911))) : (arr_10 [i_0] [i_0])))));
                            var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_2] [i_3])) : (((/* implicit */int) arr_7 [i_1 + 1] [4ULL] [i_3] [i_3]))))) ? ((-(((/* implicit */int) arr_7 [i_1 + 1] [i_1] [i_3] [i_3])))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_2] [i_0])) <= (((/* implicit */int) arr_7 [i_1 + 1] [i_3] [i_0] [i_1])))))));
                        }
                    } 
                } 
                var_19 = (~(1091543236640287408LL));
            }
        } 
    } 
    var_20 ^= ((/* implicit */unsigned short) ((signed char) (((!(((/* implicit */_Bool) 1091543236640287408LL)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((unsigned char) -1091543236640287408LL))))));
    var_21 = ((/* implicit */signed char) max((((/* implicit */long long int) var_14)), (((-1091543236640287408LL) - (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                {
                    arr_20 [i_4] [i_4] [i_5] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(-1091543236640287408LL))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 13; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 13; i_8 += 2) 
                        {
                            {
                                arr_27 [i_4] [i_4] [i_6] [i_7 - 1] [i_5] = ((/* implicit */unsigned short) (~((~((~(-1091543236640287408LL)))))));
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) max((-238608198), (((/* implicit */int) (signed char)-19)))))));
                                var_23 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_7 - 1])) ? ((-(-1091543236640287405LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1091543236640287404LL)) && (((/* implicit */_Bool) 1091543236640287404LL)))))))));
                                arr_28 [i_5] [i_5] = ((/* implicit */unsigned short) (-(8192)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) (+(var_6)));
}
