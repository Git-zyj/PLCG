/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43243
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
    var_20 *= max((((((/* implicit */_Bool) var_17)) ? (min((((/* implicit */unsigned int) (unsigned short)13684)), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))), (((/* implicit */unsigned int) (-(((((((/* implicit */int) var_2)) + (2147483647))) >> (((var_7) + (1350153741)))))))));
    var_21 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((int) min((22U), (((/* implicit */unsigned int) (unsigned short)0))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35476)) ? (((int) 1297377852U)) : (((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_2] [i_0])))))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_12 [i_1 - 1] [i_1 + 1] [i_2]))))) >= ((((!((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1511453958U)) && (((/* implicit */_Bool) (unsigned char)83)))))) : (max((((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_0] [i_0])), (3479338069U)))))));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned char) var_13);
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] [i_4] = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) var_9)))))) || (((/* implicit */_Bool) arr_17 [i_4]))));
        /* LoopNest 3 */
        for (unsigned int i_5 = 4; i_5 < 21; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (unsigned char)254))))));
                        var_26 = ((/* implicit */unsigned short) (_Bool)0);
                        var_27 = ((/* implicit */short) min((((/* implicit */unsigned char) ((arr_22 [i_4] [i_5 - 4] [i_4]) <= (arr_22 [i_5] [i_5 - 4] [i_4])))), (arr_4 [i_4] [i_5 - 1] [i_5 + 3])));
                    }
                } 
            } 
        } 
    }
}
