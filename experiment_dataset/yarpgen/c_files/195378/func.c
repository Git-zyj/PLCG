/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195378
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_19 ^= ((/* implicit */short) ((int) arr_2 [i_0]));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0 + 1] [i_1] [i_2] [i_3 - 1])))))));
                        arr_11 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned char) 603466279);
                    }
                } 
            } 
        } 
        var_21 = (+(((/* implicit */int) ((unsigned short) var_14))));
        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_12))))));
        var_23 = ((/* implicit */long long int) (-(-603466279)));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    {
                        var_24 = ((/* implicit */int) arr_13 [i_5]);
                        var_25 = ((/* implicit */short) (+(((/* implicit */int) arr_19 [i_4] [i_5]))));
                    }
                } 
            } 
            var_26 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_17 [i_5] [i_5] [i_4])))) | (((((/* implicit */_Bool) -603466282)) ? (((/* implicit */int) arr_16 [i_4] [i_5])) : (603466298)))));
            arr_23 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((arr_21 [i_4] [i_4] [i_5] [i_4]) ? (((/* implicit */int) arr_19 [i_4] [i_5])) : (-603466295)));
        }
        var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13))));
        var_28 = ((/* implicit */unsigned long long int) var_10);
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 2; i_8 < 7; i_8 += 4) 
    {
        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_17)))))))));
        arr_27 [i_8] [i_8] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned int) (signed char)-35)));
    }
    var_30 = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (var_8))) < (((/* implicit */unsigned long long int) var_18))))) << (((min(((~(var_2))), (((/* implicit */int) var_5)))) + (127)))));
}
