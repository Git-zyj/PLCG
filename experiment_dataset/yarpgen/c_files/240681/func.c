/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240681
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
    var_11 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) != (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_13 = (((!(((/* implicit */_Bool) 2147483647)))) ? (((((/* implicit */int) var_10)) - (((/* implicit */int) (short)-1)))) : (((/* implicit */int) var_8)));
                        var_14 = ((/* implicit */signed char) ((unsigned int) ((unsigned short) arr_0 [i_2] [i_3])));
                        var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_4 = 4; i_4 < 22; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 22; i_6 += 2) 
                    {
                        {
                            arr_18 [i_4] &= ((/* implicit */unsigned long long int) var_6);
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_1] [i_0] [i_1] [i_6 + 2] [i_5]))) : (((/* implicit */int) var_0)))))));
                            arr_19 [i_0] [i_0] [5U] [i_5] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) 0U)) ^ (6320394592837332732LL)));
                            arr_20 [i_0] [i_4 - 3] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
                            arr_21 [i_0] [i_0] [i_4] [i_4] [i_6 - 3] [i_0] = ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0] [i_4] [i_6 - 3] [i_1])) ? (var_1) : (((/* implicit */int) var_8)));
                        }
                    } 
                } 
            } 
            arr_22 [i_0] = ((/* implicit */short) var_6);
        }
        arr_23 [i_0] = ((/* implicit */unsigned int) ((unsigned short) arr_6 [i_0] [i_0] [i_0]));
        var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))));
    }
}
