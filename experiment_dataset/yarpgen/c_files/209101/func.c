/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209101
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
    var_10 = (-(((/* implicit */int) (!(((/* implicit */_Bool) 7239781016684085571LL))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_11 -= ((/* implicit */int) min((((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 2])) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0]))))))), (((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_0] [i_0 + 1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] [i_0] [i_2] = ((/* implicit */unsigned char) arr_11 [i_0 + 1] [i_1] [i_0 - 1] [i_1] [i_4]);
                                arr_15 [6U] [i_1] [i_2] [i_1] [6U] = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0 - 1]))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */short) var_1);
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */unsigned long long int) ((long long int) -2928955501777626613LL))) : (18446744073709551611ULL)))) || (((/* implicit */_Bool) (~(min((((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_0] [i_2] [i_2])), (347844251))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) 1095077732U);
    var_15 -= ((/* implicit */int) var_4);
}
