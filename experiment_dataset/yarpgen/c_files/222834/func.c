/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222834
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
    var_17 = ((/* implicit */signed char) (+((+(((/* implicit */int) (short)23392))))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))))));
        arr_2 [i_0] [4] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_13))))))))));
        arr_3 [1ULL] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-19467))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 22; i_2 += 3) 
        {
            for (int i_3 = 2; i_3 < 20; i_3 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) var_7);
                    var_20 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((-(var_4))))))));
                    var_21 = ((/* implicit */signed char) var_10);
                    var_22 |= ((/* implicit */signed char) var_2);
                }
            } 
        } 
        var_23 &= ((/* implicit */int) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) var_3)))))))));
        var_24 *= ((/* implicit */unsigned long long int) (~(var_4)));
    }
    var_25 = (+(var_9));
    var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        for (signed char i_5 = 3; i_5 < 16; i_5 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_6 = 1; i_6 < 16; i_6 += 1) 
                {
                    for (signed char i_7 = 1; i_7 < 16; i_7 += 4) 
                    {
                        {
                            var_27 &= ((/* implicit */int) (!((!(((/* implicit */_Bool) var_0))))));
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (+(((/* implicit */int) var_5)))))));
                            arr_21 [i_4] [i_4] [i_4] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
                        }
                    } 
                } 
                arr_22 [7ULL] [i_4] &= (+((~((+(((/* implicit */int) var_16)))))));
                arr_23 [i_4] [i_4] = ((/* implicit */long long int) var_1);
                var_29 |= var_15;
            }
        } 
    } 
}
