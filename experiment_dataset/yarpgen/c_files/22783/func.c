/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22783
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_16 -= ((/* implicit */unsigned long long int) max((((unsigned char) arr_3 [i_0] [i_0] [i_0])), (((/* implicit */unsigned char) (signed char)(-127 - 1)))));
                    var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)41)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (signed char)(-127 - 1)))));
                    arr_10 [i_0] [i_1] [21] [i_2] = ((((((/* implicit */int) arr_2 [i_2])) > (((/* implicit */int) arr_2 [i_0])))) ? (((((/* implicit */int) arr_2 [i_0])) / (var_7))) : (min((((/* implicit */int) var_10)), (130023424))));
                    var_18 |= ((/* implicit */unsigned int) 253286718);
                    var_19 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 2056126280)) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_2])))), (min(((-(((/* implicit */int) var_10)))), (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)28912))))))));
                }
            } 
        } 
    } 
    var_20 -= ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1344158754)) ? (253286731) : (((/* implicit */int) (unsigned char)22))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -1125833240)) || (((/* implicit */_Bool) (unsigned char)234))))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_12)), (var_6)))))) : ((~(((/* implicit */int) var_10)))));
}
