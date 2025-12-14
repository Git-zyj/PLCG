/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51551
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_17 = arr_2 [(unsigned char)12];
                    var_18 = arr_1 [i_2];
                }
            } 
        } 
    } 
    var_19 = (unsigned char)230;
    var_20 = min(((unsigned char)1), ((unsigned char)82));
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    var_21 = max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)163))))), (arr_12 [i_3] [i_5] [i_5] [i_5]));
                    var_22 = (unsigned char)0;
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_6 = 4; i_6 < 23; i_6 += 1) 
    {
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 1; i_9 < 23; i_9 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [(unsigned char)10])) > (((/* implicit */int) var_4))));
                        arr_24 [(unsigned char)2] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] = min((min((var_9), (arr_14 [i_6]))), ((unsigned char)222));
                        var_24 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_23 [i_6 - 2] [i_6 - 2] [i_6 - 4] [i_6 - 1]))))));
                    }
                    var_25 = var_6;
                    var_26 = ((unsigned char) ((((/* implicit */_Bool) arr_17 [i_6 - 2] [i_7] [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_17 [i_6 - 1] [i_7] [i_8]))));
                }
            } 
        } 
    } 
}
