/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40956
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
    var_18 = 2777917163104790490ULL;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_10 [i_0] = max((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))));
                                arr_11 [i_0] [i_0] [i_1] [i_2 - 1] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)24783);
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */_Bool) max(((unsigned short)386), (((/* implicit */unsigned short) (_Bool)1))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_19 = max((min((arr_16 [i_5]), (((/* implicit */unsigned long long int) (unsigned short)65534)))), (((/* implicit */unsigned long long int) arr_19 [i_7] [i_7] [i_6] [3])));
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) arr_19 [i_5] [i_5] [i_5] [i_5]))));
                    arr_21 [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) arr_16 [i_5]);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_2)))) ? (7644689199823572937ULL) : (var_4)));
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (~(var_16))))));
}
