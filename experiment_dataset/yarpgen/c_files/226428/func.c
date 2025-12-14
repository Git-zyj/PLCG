/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226428
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] |= ((10435392262600365750ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)57))));
        var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) 3175217346U)), (13361156057914682998ULL))) << (((((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_7))))) - (4072551061180319446ULL))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3502527249471804168ULL))));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_12 = ((/* implicit */_Bool) arr_1 [(unsigned char)22]);
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                for (unsigned int i_4 = 1; i_4 < 23; i_4 += 1) 
                {
                    {
                        arr_15 [i_4] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-126)) ? (1735374880U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62)))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 1; i_5 < 22; i_5 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [14U] [i_2] [i_4 + 1] [i_4] [i_5 - 1] [i_5 - 1]))))) >> (((/* implicit */int) ((arr_14 [i_1] [10LL] [i_4 + 1] [10LL] [i_5 - 1] [i_3]) > (arr_14 [i_1] [i_1] [i_4 + 1] [i_4 - 1] [i_5 - 1] [i_4 + 1]))))));
                            var_14 = ((/* implicit */_Bool) ((unsigned short) arr_13 [(_Bool)1] [i_2] [23U] [(_Bool)1]));
                        }
                        var_15 = ((/* implicit */unsigned long long int) min(((signed char)-127), ((signed char)127)));
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) 2559592432U))));
    var_17 = ((/* implicit */_Bool) min(((+(min((((/* implicit */unsigned long long int) 2559592429U)), (var_6))))), (((/* implicit */unsigned long long int) max(((unsigned char)64), (((/* implicit */unsigned char) var_9)))))));
}
