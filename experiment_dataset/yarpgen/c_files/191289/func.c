/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191289
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) max((((((/* implicit */int) (!(((/* implicit */_Bool) 8190005024919661945ULL))))) & (((/* implicit */int) arr_4 [i_0] [i_1])))), (((/* implicit */int) var_7))));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((4334554594113140301ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) >= (((((/* implicit */_Bool) max((3801954684593385219ULL), (((/* implicit */unsigned long long int) var_5))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (14644789389116166397ULL))) : (((/* implicit */unsigned long long int) max((var_6), (1998959215U)))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((3801954684593385235ULL) >> (((((/* implicit */int) var_10)) + (22401)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (var_5)))) : (9217002684959843678ULL)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) | (((/* implicit */int) var_12)))) ^ (((/* implicit */int) var_10))))) : (((((((/* implicit */_Bool) var_4)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) * (((((/* implicit */unsigned long long int) var_11)) / (var_17))))))))));
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))))));
        arr_10 [i_2] = ((/* implicit */unsigned int) (!(((var_7) && (((/* implicit */_Bool) arr_5 [i_2]))))));
    }
    var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)138))) + (1998959208U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-66))) == (var_0)))))))) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) (unsigned char)245))))));
}
