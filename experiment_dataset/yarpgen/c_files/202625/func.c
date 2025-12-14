/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202625
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_1) : (min((16185748242332973987ULL), (2260995831376577639ULL)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_2] [i_3] [i_4] = ((_Bool) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3] [i_2] [i_0]))));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */long long int) min(((~(((arr_6 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4]) << (((var_1) - (5438303129404644911ULL))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */long long int) arr_12 [i_4] [i_3] [i_1] [i_0])))))));
                                arr_15 [i_0 + 1] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */long long int) var_2);
                            }
                        } 
                    } 
                    var_11 = ((/* implicit */unsigned short) 2260995831376577628ULL);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                arr_22 [i_6] = ((/* implicit */short) (~((((!(((/* implicit */_Bool) arr_21 [i_6] [i_5])))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2260995831376577647ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-55)))))))));
                arr_23 [i_6] = ((/* implicit */unsigned short) 2260995831376577626ULL);
            }
        } 
    } 
}
