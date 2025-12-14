/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39769
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
    var_12 = ((/* implicit */long long int) var_7);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((max((((arr_1 [i_0] [i_0]) & (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) var_8)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(signed char)17])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)51)))))))))))))));
        var_14 |= ((/* implicit */_Bool) ((long long int) arr_1 [i_0] [i_0]));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0] [i_0])), (-783276285)))) ? (max((arr_2 [i_0]), (arr_2 [i_0]))) : (((arr_0 [i_0] [i_0]) ? (arr_2 [i_0]) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
    }
    for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) (-((+(-1495121520837284854LL)))));
        arr_6 [i_1] [i_1 + 1] = ((/* implicit */unsigned long long int) ((-1495121520837284854LL) & (((/* implicit */long long int) 2U))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                {
                    arr_15 [i_2] [i_2] = ((/* implicit */signed char) max((((unsigned short) max((var_4), (((/* implicit */unsigned char) (_Bool)1))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [i_1 - 1] [i_1 + 1])))))));
                    arr_16 [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) (signed char)-32)) ? (min((((/* implicit */unsigned long long int) min((arr_7 [i_1 + 1]), (((/* implicit */unsigned int) arr_2 [i_1]))))), (max((var_10), (((/* implicit */unsigned long long int) arr_13 [i_3] [i_2] [i_1])))))) : (((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) arr_7 [i_1 - 1])) : (max((((/* implicit */unsigned long long int) arr_10 [i_1] [i_3])), (arr_12 [i_1] [i_1] [i_1] [i_1]))))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((short) var_5)))) && ((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), (var_6))))))));
}
