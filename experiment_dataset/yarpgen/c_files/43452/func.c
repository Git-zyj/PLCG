/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43452
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
    var_10 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)9113))));
    /* LoopSeq 3 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0 - 1] [(signed char)15] = ((/* implicit */unsigned long long int) ((unsigned char) ((var_0) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)112))))));
        var_11 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)-64)), (max(((short)1909), (((/* implicit */short) var_7)))))))) <= (var_9)));
        arr_4 [i_0 - 2] = ((/* implicit */unsigned short) var_6);
    }
    for (long long int i_1 = 4; i_1 < 20; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (unsigned short i_3 = 2; i_3 < 17; i_3 += 4) 
            {
                {
                    var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 389936848826605252ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1 + 1] [i_1] [i_3 - 1] [i_3]))) : (min((arr_2 [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned long long int) var_9)))))))));
                    var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) arr_9 [i_2]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (2201423031U))))))), (arr_11 [i_3 - 1] [(short)6] [(signed char)17] [i_1])));
                }
            } 
        } 
        arr_15 [i_1] = ((/* implicit */unsigned long long int) min((2061773764U), (2061773789U)));
    }
    for (long long int i_4 = 4; i_4 < 20; i_4 += 3) /* same iter space */
    {
        var_14 -= ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_13 [i_4] [(unsigned char)16] [i_4] [i_4 - 2])) - (((/* implicit */int) arr_13 [i_4 + 1] [(signed char)4] [i_4 + 1] [i_4])))), ((+(((/* implicit */int) (unsigned short)10057))))));
        var_15 = max((min((((/* implicit */unsigned long long int) arr_17 [i_4])), (min((var_5), (((/* implicit */unsigned long long int) 751694671U)))))), (max((min((arr_6 [i_4] [i_4]), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10058))) : (3543272622U)))))));
    }
}
