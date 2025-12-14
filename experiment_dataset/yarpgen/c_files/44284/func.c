/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44284
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) min((arr_1 [i_0] [i_0]), (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
        var_17 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_0 [i_0])) > ((((_Bool)1) ? (((/* implicit */unsigned long long int) 1693668620092835193LL)) : (9525303515002474741ULL)))));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (((-(arr_1 [i_1] [i_1]))) / (min((arr_1 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_1])))))))));
        var_19 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 2) 
            {
                {
                    arr_13 [7U] [7U] = ((/* implicit */unsigned char) max((arr_6 [i_2]), (((/* implicit */long long int) ((var_8) >= (((/* implicit */long long int) arr_10 [i_3 - 1] [i_3 - 1] [i_3 - 1])))))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (+(((unsigned int) 50331648U))))) ? (arr_12 [i_1] [i_3] [i_3 - 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3 - 1] [i_3 - 1])) ? (arr_10 [i_3 - 1] [i_3 - 2] [i_3 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
                }
            } 
        } 
    }
    var_21 = var_6;
    var_22 ^= min((max((-3042856385394211018LL), (((/* implicit */long long int) (_Bool)1)))), (var_8));
}
