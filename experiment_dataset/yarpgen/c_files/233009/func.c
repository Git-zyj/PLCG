/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233009
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
    var_17 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_18 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 0)) ? (-216185471) : (-1047802140)))))) ? (var_9) : (var_14));
                var_19 = arr_2 [i_0] [i_1];
                /* LoopSeq 2 */
                for (int i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        arr_8 [i_3] [i_2] [i_2] [i_1] [i_0] = (((+((-(var_12))))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2 + 2] [i_2 + 1] [i_2 + 1])) || (((/* implicit */_Bool) -216185471))))));
                        arr_9 [i_0] [i_2] [i_1] [i_3] = -216185461;
                        var_20 = var_5;
                        var_21 = -216185481;
                        arr_10 [i_0] [i_1] |= arr_5 [i_0] [i_1];
                    }
                    arr_11 [i_2] [i_2 - 1] = min((2001692488), (max((var_15), (arr_7 [i_2 - 1] [i_2 + 1] [i_2] [i_2]))));
                    arr_12 [i_0] [i_0] [i_1] [i_2] = (-(-858248479));
                }
                for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    var_22 = max((arr_16 [i_0]), ((~(2054985847))));
                    arr_17 [i_0] [i_1] [i_4] = ((/* implicit */int) ((var_4) <= (((((/* implicit */_Bool) ((-216185471) ^ (-395253689)))) ? (-1424758163) : ((-(1054201407)))))));
                    arr_18 [i_4] [i_1] [i_1] = (((~(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (1999627309) : (arr_0 [i_4]))))) ^ (((int) ((((/* implicit */_Bool) arr_5 [i_4] [i_4])) ? (arr_15 [i_0] [i_4] [i_4]) : (arr_13 [i_0] [i_1] [i_4])))));
                }
            }
        } 
    } 
    var_23 = (~(((((/* implicit */_Bool) var_8)) ? (var_14) : (1348158280))));
}
