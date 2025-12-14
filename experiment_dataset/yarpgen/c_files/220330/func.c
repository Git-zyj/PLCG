/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220330
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) ((int) arr_1 [i_0] [i_0]));
        var_16 += ((/* implicit */short) ((max((((((/* implicit */_Bool) (short)17082)) ? (2391525166U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) arr_1 [(signed char)10] [i_0])))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4084251898U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)102))))) ? (((/* implicit */int) arr_1 [(signed char)12] [i_0])) : (max((((/* implicit */int) arr_1 [10U] [i_0])), (var_3))))))));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [4U] [i_0]))))) >= ((((!(((/* implicit */_Bool) (short)-11925)))) ? (arr_0 [i_0] [i_0]) : (((((/* implicit */_Bool) (signed char)33)) ? (210715394U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-11933))))))))))));
        var_18 -= ((/* implicit */unsigned char) 14804100685096004005ULL);
    }
    var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : ((+(210715398U)))));
    var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) -426923408096460383LL)), (3642643388613547600ULL)));
    var_21 = ((/* implicit */short) max((((var_12) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1171468750U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)175))))))), (((/* implicit */unsigned int) var_3))));
}
