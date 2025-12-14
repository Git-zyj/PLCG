/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50155
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
    var_10 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] [22] |= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)239)), (arr_0 [19] [i_0])))) || (((/* implicit */_Bool) 6034710506866849852LL))))), ((~(min((-5260756510976168750LL), (((/* implicit */long long int) -1261853628))))))));
        arr_4 [i_0 + 3] = ((/* implicit */long long int) ((((/* implicit */long long int) max((arr_0 [i_0 - 1] [i_0 + 3]), (((/* implicit */unsigned int) 1261853627))))) == (min((arr_2 [i_0 + 1] [i_0 - 2]), (arr_2 [i_0 + 2] [i_0 + 3])))));
        var_11 ^= ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        var_12 = ((/* implicit */unsigned char) max((((/* implicit */int) (!((_Bool)1)))), (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0])) : (232542776))) / (((/* implicit */int) var_7))))));
        arr_5 [(unsigned char)0] = ((arr_2 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58364))));
    }
}
