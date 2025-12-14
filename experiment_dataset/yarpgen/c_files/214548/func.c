/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214548
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
    var_18 = (((_Bool)0) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : ((-(268435455ULL))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_4))))), (((86346132U) / (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))));
    var_19 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (0U)))))) ? (((((/* implicit */_Bool) min(((unsigned char)157), ((unsigned char)255)))) ? (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)31744)) ? (86346110U) : (1449576399U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) (unsigned short)32767))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min((((((/* implicit */int) var_10)) - (((/* implicit */int) arr_5 [i_0] [i_0])))), (((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_0]))))))));
                arr_7 [i_0] [i_1] = ((arr_2 [i_0]) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) arr_3 [i_0]))))) ? ((~(((/* implicit */int) var_10)))) : ((~(((/* implicit */int) arr_6 [i_1]))))))));
            }
        } 
    } 
    var_21 += ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)215)) ^ (((/* implicit */int) (unsigned short)15921))));
}
