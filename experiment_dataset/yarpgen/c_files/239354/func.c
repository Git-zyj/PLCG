/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239354
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
    var_17 -= ((/* implicit */int) var_3);
    var_18 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 3 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) max((4052865083U), (((/* implicit */unsigned int) var_12))));
        arr_3 [i_0] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0 - 2]) : (((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)3042)), (-1784751385)));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((11107490879144478497ULL), (((/* implicit */unsigned long long int) -175869862)))), ((-(arr_1 [i_0 + 2])))))) ? (((((-458392920) ^ (-591762602))) & (((/* implicit */int) (unsigned char)229)))) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (((unsigned char) 13526968186418405495ULL)))))));
                    var_22 ^= ((int) ((int) (unsigned char)230));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 1) 
            {
                {
                    var_23 = max((((((/* implicit */_Bool) 12124731911971719668ULL)) ? (1551424207) : (((/* implicit */int) (_Bool)0)))), (arr_14 [(unsigned char)16] [i_3] [i_4 + 4] [i_0]));
                    arr_15 [i_0] [i_0 + 1] [i_3] [i_0] = ((/* implicit */int) ((unsigned short) (((_Bool)1) ? (4725350732552827335ULL) : (((/* implicit */unsigned long long int) 1126143889)))));
                    var_24 = var_7;
                    var_25 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_5 [i_0 + 1] [i_0 - 2] [i_0]))) ? ((-(arr_2 [i_0] [i_0]))) : (((/* implicit */int) ((unsigned char) var_3)))))) || (((/* implicit */_Bool) (unsigned short)24557)));
                }
            } 
        } 
    }
    for (long long int i_5 = 4; i_5 < 19; i_5 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */long long int) (unsigned char)140);
        var_27 |= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) -1332787390))) ? (((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_5] [i_5] [i_5])) / (((/* implicit */int) arr_4 [i_5] [i_5] [i_5]))))) | (((long long int) (unsigned char)23)))) : (((/* implicit */long long int) ((((unsigned int) arr_1 [i_5])) & (((/* implicit */unsigned int) ((arr_12 [i_5] [i_5] [i_5] [14ULL]) & (arr_16 [i_5])))))))));
    }
    for (long long int i_6 = 4; i_6 < 19; i_6 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) == (((/* implicit */int) arr_4 [i_6] [i_6] [i_6 - 2]))))), (max((var_10), (var_4))))))));
        var_29 = ((/* implicit */unsigned long long int) ((int) ((var_9) <= (((/* implicit */int) arr_13 [i_6] [i_6] [i_6 - 3])))));
        var_30 = ((int) ((long long int) arr_19 [i_6 - 2] [i_6 - 1]));
    }
}
