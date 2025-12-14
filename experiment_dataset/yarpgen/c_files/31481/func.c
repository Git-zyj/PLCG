/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31481
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
    var_10 = ((/* implicit */int) min((((unsigned long long int) 2147483637)), (max((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) ((int) var_2)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_13 [i_1] [(_Bool)1] [(_Bool)1] [i_2] [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) ((2945700953224536694ULL) < (((/* implicit */unsigned long long int) 0LL))))), (((int) arr_8 [i_3]))));
                        arr_14 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((((_Bool) var_5)), (((((/* implicit */int) var_2)) != (((/* implicit */int) var_4)))))))) * (arr_9 [i_1])));
                        arr_15 [i_0] [i_1] [i_2] [(signed char)16] [i_3] [i_3] = (+((~(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (var_9))))));
                        arr_16 [i_1] [i_1] = ((/* implicit */signed char) var_3);
                    }
                } 
            } 
        } 
        var_11 = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0])) % ((~(((/* implicit */int) var_2))))));
    }
    var_12 = ((/* implicit */signed char) ((_Bool) var_8));
}
