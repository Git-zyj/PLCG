/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20513
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
    for (int i_0 = 1; i_0 < 10; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1]))) ^ (arr_6 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_7 [i_0 + 2] [i_0 - 1] [i_1 + 1] [i_1 + 1]))), (3ULL)));
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((long long int) 1608454362350520087LL))))))));
                }
            } 
        } 
        var_10 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))), (((unsigned long long int) arr_1 [i_0]))));
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [1]))) ^ (1608454362350520087LL)))), (((((/* implicit */_Bool) 249884539)) ? (arr_8 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0 - 1]))))))))))));
        arr_11 [i_0] = ((/* implicit */unsigned int) ((5631950018105817860ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (-1608454362350520111LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)6)))))))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 10; i_3 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned short) ((unsigned char) -1608454362350520092LL));
        arr_16 [i_3] = ((/* implicit */unsigned long long int) ((int) var_6));
        var_13 &= ((/* implicit */signed char) (~(arr_1 [i_3 + 2])));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_3 + 1])) ? (((/* implicit */int) arr_3 [i_3 + 2])) : (((/* implicit */int) arr_3 [i_3 - 1]))));
    }
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_0))));
}
