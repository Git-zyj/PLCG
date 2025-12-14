/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233606
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
    var_20 = ((/* implicit */_Bool) ((unsigned short) var_0));
    var_21 = ((/* implicit */unsigned short) ((_Bool) (~(((((/* implicit */int) (unsigned short)15823)) & (((/* implicit */int) var_3)))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        var_22 = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_0 [4LL])))) : (((((/* implicit */_Bool) (unsigned short)124)) ? (144115188075855871LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))));
        arr_2 [i_0 + 1] = ((/* implicit */unsigned short) ((_Bool) ((_Bool) min((var_7), (((/* implicit */long long int) (unsigned short)11093))))));
        arr_3 [i_0 - 3] = ((/* implicit */unsigned short) min((max((min((-20LL), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65525)) & (((/* implicit */int) (_Bool)1)))))));
        var_23 = var_16;
    }
    var_24 = ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)-26165)) ? (((/* implicit */int) (short)30720)) : (((/* implicit */int) (short)27848)))) != (((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 3 */
    for (short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        for (short i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                {
                    arr_13 [i_3] [i_2] [i_1] = ((/* implicit */unsigned short) min((-2296637445434520520LL), (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-27850)) ? (((/* implicit */int) arr_9 [i_1] [i_2])) : (((/* implicit */int) arr_10 [i_3] [(_Bool)1])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                    /* LoopNest 2 */
                    for (short i_4 = 4; i_4 < 17; i_4 += 4) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_20 [i_5] = ((/* implicit */long long int) (short)-7592);
                                arr_21 [(unsigned short)15] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_4 - 4])) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_18)) : (((((/* implicit */_Bool) (short)0)) ? (((((/* implicit */int) (short)3054)) / (((/* implicit */int) (short)-18066)))) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)18439))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((((_Bool)1) ? (4626744734103612458LL) : (-8026057460370218689LL))), (((/* implicit */long long int) ((((/* implicit */int) (short)3286)) > (((/* implicit */int) arr_19 [14LL] [i_3] [(unsigned short)2] [i_1] [i_3] [(_Bool)1])))))))) ? (((/* implicit */int) (unsigned short)13094)) : (((/* implicit */int) (short)7587))));
                }
            } 
        } 
    } 
}
