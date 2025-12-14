/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52160
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
    var_19 = ((/* implicit */long long int) var_9);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_20 = (!((!(((/* implicit */_Bool) max((1162791660109190861ULL), (((/* implicit */unsigned long long int) 727770761408037699LL))))))));
                                var_21 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [6ULL]);
                            }
                        } 
                    } 
                    var_22 = (((-(max((var_17), (((/* implicit */long long int) var_7)))))) + (727770761408037675LL));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        var_23 &= ((/* implicit */short) ((((/* implicit */_Bool) 17903088652194848897ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max((7966434937471743342ULL), (((/* implicit */unsigned long long int) var_14))))))) : (var_8)));
                        var_24 = ((/* implicit */unsigned long long int) var_4);
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */int) var_7);
    var_26 += ((/* implicit */_Bool) var_13);
}
