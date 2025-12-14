/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46792
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] [(short)6] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(15202299352069724315ULL)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (((~(((arr_0 [i_0]) ^ (((/* implicit */unsigned long long int) -349331240161932282LL)))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4501609736330302900ULL)) || (((/* implicit */_Bool) min(((unsigned char)0), (arr_1 [(unsigned char)2] [(unsigned char)15]))))))))));
    }
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) 7564229550814291628LL))));
}
