/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50938
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
    var_16 = (+((~((+(((/* implicit */int) var_10)))))));
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) var_1)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) (~((+((+(((/* implicit */int) (signed char)8))))))));
                                var_19 = ((/* implicit */short) (!((!((!(((/* implicit */_Bool) var_1))))))));
                                var_20 = ((/* implicit */_Bool) (~((+((+(((/* implicit */int) var_14))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (+((+(137469460U))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) var_2)))))))));
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                {
                    arr_27 [i_7] [i_7] [i_6] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) 137469459U)))))))));
                    arr_28 [i_5] [i_6] [i_6] [i_7] = ((/* implicit */int) (-(4157497825U)));
                }
            } 
        } 
    } 
}
