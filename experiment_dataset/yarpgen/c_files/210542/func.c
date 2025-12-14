/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210542
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max((-6542545946302113861LL), (((/* implicit */long long int) 4294967285U))));
        arr_3 [i_0] = ((/* implicit */long long int) min(((-(((/* implicit */int) arr_1 [i_0] [i_0])))), (((((/* implicit */int) var_16)) * (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (((~(arr_0 [i_0]))) & (((/* implicit */unsigned int) min((((int) (signed char)-39)), ((~(((/* implicit */int) arr_1 [i_0] [i_0]))))))))))));
        arr_4 [i_0] |= ((/* implicit */int) arr_1 [i_0] [i_0]);
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) != ((~((~(arr_0 [i_0]))))))))));
    }
    var_21 = ((/* implicit */_Bool) var_12);
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_15)) ? (min((4294967285U), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == (4294967285U))))))))))));
    var_23 += ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(var_12)))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (var_17)))));
    var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)33)), (var_17)))))))));
}
