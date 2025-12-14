/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209093
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
    var_16 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [(unsigned char)0] = ((/* implicit */long long int) ((12350870468781957855ULL) == (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (-1730245201479289663LL) : (-1730245201479289650LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1730245201479289676LL)))))))))));
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) 1730245201479289676LL))));
                arr_6 [0ULL] [0ULL] [0ULL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (max((arr_3 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_1))))) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) -571942280)))), (((1730245201479289663LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) (_Bool)0))))))))));
}
