/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39559
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
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (-(min((((/* implicit */int) min(((unsigned short)46377), (((/* implicit */unsigned short) (short)15))))), ((-(((/* implicit */int) (_Bool)1)))))))))));
    var_20 = ((/* implicit */short) (_Bool)1);
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) << ((+(((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? ((-(4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(17322075598773716404ULL)))) ? (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_10)))) : ((+(((/* implicit */int) (_Bool)1))))));
        var_23 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40689))) < (1U)))))), ((-(((/* implicit */int) max(((unsigned short)8749), (((/* implicit */unsigned short) (_Bool)1)))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) max((var_24), (3U)));
        arr_4 [i_1] [i_1] = (_Bool)1;
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (var_12)))))) ? (min((arr_0 [i_2]), (((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (3518822489U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62857))))))) : (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned short)24846)) ? (((/* implicit */int) (unsigned short)2678)) : (((/* implicit */int) (unsigned short)62853)))))))));
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (arr_0 [i_2]) : (arr_5 [i_2] [(unsigned short)9])))) ? (((/* implicit */unsigned long long int) 4294967280U)) : (arr_3 [i_2] [(_Bool)1])))) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (0U))))))))))));
    }
}
