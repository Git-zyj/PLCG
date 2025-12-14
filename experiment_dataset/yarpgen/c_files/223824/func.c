/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223824
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) var_17)) != (((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) 6577590400419490387LL))))))), (var_15)));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */int) (~(((unsigned long long int) max((var_7), (((/* implicit */long long int) var_6)))))));
        arr_8 [i_1] = ((/* implicit */_Bool) ((unsigned char) 6577590400419490387LL));
        var_21 = ((/* implicit */unsigned int) var_5);
        arr_9 [i_1] [(short)16] = var_13;
        var_22 &= ((/* implicit */unsigned short) 5324949842310631699LL);
    }
    for (int i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
    {
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned int) 660415076);
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((min((359738256U), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) ((var_15) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_10 [i_2]))))))))));
    }
    var_24 = ((/* implicit */long long int) max((var_24), (min((var_11), (((/* implicit */long long int) var_8))))));
}
