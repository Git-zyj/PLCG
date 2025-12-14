/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223480
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_10 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) var_1)), (var_7))), (((/* implicit */unsigned int) var_5))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) var_5);
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) min(((~(((/* implicit */int) max((var_8), (var_3)))))), (((/* implicit */int) var_5))));
        /* LoopNest 3 */
        for (short i_2 = 2; i_2 < 23; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    {
                        var_11 = ((/* implicit */int) var_1);
                        var_12 *= ((/* implicit */short) max((((/* implicit */long long int) (-((+(((/* implicit */int) var_3))))))), (var_9)));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 2; i_7 < 22; i_7 += 4) 
                {
                    {
                        arr_22 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)-79)), (896705326))))));
                        var_13 = ((/* implicit */unsigned long long int) var_5);
                        arr_23 [i_1] [i_1] [23] [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
                    }
                } 
            } 
        } 
    }
    var_14 = min((max((((/* implicit */unsigned char) var_1)), (var_6))), (var_0));
    var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
}
