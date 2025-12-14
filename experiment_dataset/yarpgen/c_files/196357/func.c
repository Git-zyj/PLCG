/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196357
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
    var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((var_5), (var_11)))) && (((((/* implicit */int) var_3)) < (((/* implicit */int) var_8)))))) ? (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))) + (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)50)) && (((/* implicit */_Bool) -1096765824140284640LL))))))) : (max((((((/* implicit */_Bool) (unsigned short)15)) ? (1638086081) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_1))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) var_11)), (((int) var_12))));
        arr_4 [i_0] = ((/* implicit */int) var_11);
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 4294967287U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)28468))) : (2857880089U))) | (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20816))) : (3243295574U))))) : (((unsigned int) var_3))));
                arr_10 [i_2] = ((/* implicit */unsigned int) min((min((max((arr_7 [i_2]), (((/* implicit */long long int) 1022104832U)))), (((/* implicit */long long int) (((-9223372036854775807LL - 1LL)) > (((/* implicit */long long int) ((/* implicit */int) var_4)))))))), (((/* implicit */long long int) ((_Bool) (unsigned short)1668)))));
                arr_11 [i_1] [(unsigned short)12] [i_2] = ((/* implicit */unsigned int) var_10);
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)28672)) ? (-1016340108086176391LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24944)))));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), ((unsigned short)57179)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((/* implicit */long long int) ((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) : (((-626744606576885636LL) & (((/* implicit */long long int) 1254388702U)))))) : (((/* implicit */long long int) ((((((/* implicit */int) var_3)) + (2147483647))) >> (((((/* implicit */int) (short)9191)) - (9188))))))));
            }
        } 
    } 
}
