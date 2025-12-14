/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207538
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
    var_10 = var_4;
    var_11 = ((/* implicit */unsigned int) var_9);
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) 26U))), (var_4)))) - (((/* implicit */int) ((var_6) < ((-(var_6))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) (+(min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (~(arr_1 [i_0] [i_0])));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) max((var_13), (((max((((((/* implicit */_Bool) arr_4 [i_3] [i_1])) ? (arr_6 [i_1] [i_2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_0]))))), (max((arr_6 [i_1] [i_1] [i_1]), (arr_5 [i_0] [i_0] [i_0]))))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0])))))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) & (arr_0 [i_1])))) ? (((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 5U)) ? (4294966784U) : (var_6)))) : (-6285487426587269077LL))) : (((/* implicit */long long int) (-(arr_5 [i_0] [i_0] [i_2])))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
    {
        arr_14 [i_4] = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4])) ? (var_3) : (arr_4 [i_4] [i_4]))))))), (min((17U), (min((arr_5 [i_4] [i_4] [i_4]), (5U))))));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)0)))) + (5858804391773642916ULL))), (((/* implicit */unsigned long long int) arr_9 [i_4] [i_4] [i_4] [i_4]))))));
    }
}
