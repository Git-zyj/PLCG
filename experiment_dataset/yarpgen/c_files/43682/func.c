/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43682
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
    var_10 = var_3;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((-3714181033029101011LL) % (arr_0 [(unsigned short)2]))) < (((long long int) (_Bool)1)))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_5))));
                        var_13 = ((/* implicit */unsigned int) (+(arr_6 [i_3] [i_3] [i_3])));
                    }
                    var_14 = ((/* implicit */long long int) (((+(-3714181033029101011LL))) >= (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)32764)), (((((/* implicit */_Bool) 9223372036854775792LL)) ? (2405168156U) : (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_1])))))))));
                    var_15 ^= ((/* implicit */unsigned char) ((-3714181033029101011LL) >= (((((/* implicit */_Bool) 3714181033029101001LL)) ? (-1925795659639190573LL) : ((-(-3376929486344120045LL)))))));
                }
            }
        } 
    } 
}
