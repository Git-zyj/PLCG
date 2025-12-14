/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50959
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_1 - 2] [i_1] [i_2 - 1])), (arr_11 [i_1 - 2] [i_2] [i_2 - 1])))) || (((((/* implicit */_Bool) arr_11 [i_1 - 2] [i_1] [i_2 - 1])) || (((/* implicit */_Bool) (signed char)-23))))));
                        arr_14 [i_0] [i_2 - 1] [i_3] = ((/* implicit */_Bool) min((((int) var_7)), (((((/* implicit */int) var_2)) * (((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_6 [i_0 + 2] [i_0 + 2]))) ? (min((((/* implicit */int) (short)21764)), (arr_6 [i_0 - 1] [i_0 + 2]))) : (min((arr_6 [i_0 - 1] [i_0 - 1]), (((/* implicit */int) (signed char)-12))))));
    }
    var_14 ^= ((/* implicit */int) (signed char)-23);
}
