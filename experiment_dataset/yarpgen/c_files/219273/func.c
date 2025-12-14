/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219273
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
    var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)0)))))))) & ((+(max((((/* implicit */unsigned long long int) 960057387U)), (14078109041011250378ULL))))));
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_1))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((4398046494720ULL), (((/* implicit */unsigned long long int) 16U))))))) ? ((~(((((/* implicit */int) (unsigned char)35)) << (((137438953344LL) - (137438953330LL))))))) : ((~((+(1398322678))))))))));
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (+(var_14))))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (-(3318481054014837963LL))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) var_13);
    }
    var_24 = var_18;
    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) var_8))));
}
