/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221002
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
    var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
    var_12 &= ((/* implicit */unsigned char) var_10);
    var_13 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) var_9)) ? (3716898612213417909LL) : (((/* implicit */long long int) var_4))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1036909441)) ? (arr_5 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned char)16] [i_1])))))) ? (arr_0 [i_0]) : (((/* implicit */int) ((unsigned short) var_4)))))) ? ((-(((((/* implicit */_Bool) var_6)) ? (-3716898612213417919LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) : (max((((((/* implicit */_Bool) var_7)) ? (3716898612213417904LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)101))))), (((/* implicit */long long int) arr_2 [i_0] [i_1]))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) max((1488409211), (1488409211)))) : (((unsigned int) var_10))))));
            }
        } 
    } 
}
