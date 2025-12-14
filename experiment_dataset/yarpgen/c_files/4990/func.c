/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4990
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
    var_16 = ((/* implicit */unsigned int) (+(max((((((/* implicit */unsigned long long int) -1042477148)) / (6636179672068914899ULL))), (((/* implicit */unsigned long long int) (_Bool)1))))));
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_18 = ((unsigned long long int) arr_0 [i_0]);
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(1042477148)))) ^ (((((/* implicit */_Bool) max((((/* implicit */signed char) var_5)), (arr_1 [i_0] [i_1])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_6) : (((/* implicit */unsigned int) var_15)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1])) * (((/* implicit */int) (!(((/* implicit */_Bool) max((6636179672068914899ULL), (((/* implicit */unsigned long long int) arr_1 [i_0] [(_Bool)1]))))))))));
                    var_20 = ((/* implicit */unsigned int) (unsigned short)34448);
                }
            }
        } 
    } 
}
