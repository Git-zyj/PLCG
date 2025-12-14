/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27598
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
    for (signed char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_10 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (((-(2069421281))) - (-2069421281)));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 20; i_3 += 1) 
            {
                {
                    var_11 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_1] [i_3 - 1]))));
                    arr_12 [i_1] = ((/* implicit */long long int) (+(-2069421280)));
                }
            } 
        } 
        arr_13 [i_1] [i_1] = ((/* implicit */short) arr_7 [i_1] [i_1]);
    }
    for (int i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) min(((~(2069421266))), (((/* implicit */int) ((((1160387070) >> (((((/* implicit */int) arr_9 [i_4] [i_4])) + (24002))))) == (((((/* implicit */_Bool) (unsigned short)42400)) ? (-2069421275) : (((/* implicit */int) (short)-22431))))))))))));
        arr_17 [i_4] = ((/* implicit */short) -2069421259);
        var_13 = ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
    }
    var_14 = ((/* implicit */short) max(((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_5)), (var_3)))))), ((!((!(((/* implicit */_Bool) var_6))))))));
}
