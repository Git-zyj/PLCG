/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26636
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
        var_17 = ((/* implicit */_Bool) (((-(32505856U))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 4262461451U)) != (var_14)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [(unsigned short)19] [i_0] = (-(140737488355312LL));
                    arr_9 [i_0] [i_0] = ((/* implicit */int) (-((~(14670245343341646347ULL)))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)40)) & (((/* implicit */int) var_0))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_19 -= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)4352))));
                                arr_15 [i_1] [i_1] = ((/* implicit */unsigned short) (-(-140737488355333LL)));
                                var_20 = (+(((/* implicit */int) var_6)));
                            }
                        } 
                    } 
                    var_21 = (~(-140737488355302LL));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned short) (!((!(((((/* implicit */_Bool) 3776498730367905280ULL)) && (((/* implicit */_Bool) var_10))))))));
}
