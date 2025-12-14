/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24341
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max(((~(((/* implicit */int) var_1)))), (((/* implicit */int) arr_0 [i_0])))))));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (short i_3 = 2; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_1))));
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_11))));
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_0] [i_1] [i_1 - 1] [i_3 - 1])))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        for (int i_5 = 2; i_5 < 14; i_5 += 4) 
        {
            for (short i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_11 [i_6]))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 4; i_7 < 11; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 4; i_8 < 14; i_8 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((unsigned char) var_1)))));
                                var_22 = ((/* implicit */short) min((var_22), (arr_11 [14])));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_15 [(short)11] [i_5] [i_5] [(short)11]))));
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_14 [i_5] [(unsigned char)12] [i_5 - 2] [i_5 + 1]))) ? (((var_13) >> (((((/* implicit */int) arr_3 [i_5] [i_5 + 1] [i_5 - 2])) - (7063))))) : (var_13))))));
                }
            } 
        } 
    } 
}
