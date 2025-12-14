/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245937
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_3) : (var_3))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) var_6);
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (((+(arr_6 [i_0] [i_3] [i_4 + 1]))) * (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 - 2] [i_2 - 4] [i_2 - 1] [i_2 - 4])))))) ? (max((((/* implicit */long long int) arr_12 [i_4 - 1] [i_4] [i_4 + 1] [i_4] [i_2 - 1])), (((((/* implicit */_Bool) 3621115066759023331LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (5387554730946980935LL))))) : ((+((+(-5387554730946980952LL)))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */int) (unsigned char)206)) : (((/* implicit */int) arr_8 [i_2 - 2] [i_1] [i_0] [i_0] [i_0])))), ((-(((/* implicit */int) var_10))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            {
                arr_18 [i_5] [i_5] = ((/* implicit */long long int) arr_17 [i_5] [i_6]);
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (short)5096))));
            }
        } 
    } 
}
