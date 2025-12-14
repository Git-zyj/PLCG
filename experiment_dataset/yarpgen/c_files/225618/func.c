/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225618
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))))))) << (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) var_16))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (var_8)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_20 -= ((/* implicit */_Bool) var_18);
                    arr_6 [i_0] [i_0] [i_2] [i_0] = (i_2 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((max((167077989U), (1589815788U))) << (((((((/* implicit */_Bool) var_18)) ? (arr_4 [i_2] [i_1] [i_2]) : (arr_4 [i_2] [i_1] [i_2]))) - (3194379731U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 463511824U)) ? (((/* implicit */int) (short)29609)) : (2147483647)))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (((((/* implicit */_Bool) var_14)) ? (arr_4 [i_2] [i_1] [i_2]) : (var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((max((167077989U), (1589815788U))) << (((((((((/* implicit */_Bool) var_18)) ? (arr_4 [i_2] [i_1] [i_2]) : (arr_4 [i_2] [i_1] [i_2]))) - (3194379731U))) - (1243851006U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 463511824U)) ? (((/* implicit */int) (short)29609)) : (2147483647)))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (((((/* implicit */_Bool) var_14)) ? (arr_4 [i_2] [i_1] [i_2]) : (var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                    arr_7 [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 4] [i_0])) ? (arr_3 [i_1 - 1] [i_2]) : (arr_3 [i_0] [7])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1 - 3])) ? (arr_3 [i_0] [i_1 + 2]) : (arr_3 [i_0] [i_1 - 3])))) : (((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0]) : (((/* implicit */long long int) var_4)))));
                    arr_8 [i_2] [i_1] [i_2] = arr_0 [i_2];
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) var_7);
}
