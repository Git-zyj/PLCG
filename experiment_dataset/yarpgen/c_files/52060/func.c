/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52060
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) (unsigned char)161))))) ? (((((/* implicit */_Bool) 828130338U)) ? (3466836957U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))))) : (arr_0 [i_0] [i_0])))) ? (((/* implicit */int) ((_Bool) ((signed char) arr_2 [i_0])))) : (((/* implicit */int) ((((unsigned int) var_3)) <= (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)117)) / (((/* implicit */int) var_10))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (arr_2 [i_0])))), (72057594037927935LL))), (((/* implicit */long long int) var_3))));
    }
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2134251667U)) || (((/* implicit */_Bool) var_3)))))) == ((~(var_4)))))), (((((/* implicit */unsigned long long int) ((unsigned int) var_9))) ^ (min((var_4), (((/* implicit */unsigned long long int) var_8)))))))))));
    var_12 = ((/* implicit */unsigned int) (_Bool)0);
}
