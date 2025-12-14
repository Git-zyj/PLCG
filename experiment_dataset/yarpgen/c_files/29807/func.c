/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29807
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
    var_15 = ((/* implicit */short) 9435084378750489860ULL);
    var_16 &= ((/* implicit */_Bool) var_14);
    var_17 ^= ((/* implicit */int) var_12);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0])) - (((/* implicit */int) arr_1 [i_0 - 1] [8ULL]))));
                    var_19 -= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 1] [5U])) ^ (((/* implicit */int) arr_5 [i_2]))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) arr_4 [i_0] [i_0])) >> (((/* implicit */int) arr_0 [i_0]))))))));
                    var_20 = ((/* implicit */unsigned int) (+(max((973360934976275703ULL), (((/* implicit */unsigned long long int) arr_2 [i_0 - 1]))))));
                    var_21 = ((/* implicit */unsigned long long int) ((int) min((9435084378750489860ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_2])) > (((/* implicit */int) arr_4 [i_0] [i_0]))))))));
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (arr_3 [i_0 - 1]) : (arr_3 [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_1 [(unsigned short)9] [3LL])))) ^ (max((((/* implicit */int) var_4)), (arr_3 [i_0 - 1])))))) : (11500495418489246101ULL))))));
                }
            } 
        } 
    } 
}
