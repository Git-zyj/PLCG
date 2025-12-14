/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243653
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_11)) | (((/* implicit */int) var_0)))))) * (((/* implicit */int) var_15))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned short i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) max((var_21), (var_6)));
                                var_22 = var_7;
                                arr_12 [i_0] [i_1] [i_2] [i_3 - 2] [(unsigned short)18] &= ((/* implicit */unsigned short) (((+(((((/* implicit */int) (unsigned short)39014)) * (((/* implicit */int) var_15)))))) <= (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) arr_7 [i_0] [i_1]))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_3 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1] [i_4])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)63377))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) min((((unsigned short) var_0)), (((unsigned short) var_13)))))));
            }
        } 
    } 
    var_24 = ((unsigned short) (~(((/* implicit */int) var_16))));
    var_25 = ((/* implicit */unsigned short) ((min((((((/* implicit */int) (unsigned short)2160)) >> (((((/* implicit */int) var_7)) - (24082))))), (((/* implicit */int) ((unsigned short) var_2))))) + (((/* implicit */int) min(((unsigned short)0), (var_8))))));
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) + (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11)))), (((((/* implicit */int) var_19)) - (((/* implicit */int) var_2))))))));
}
