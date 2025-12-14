/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227619
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) (-(arr_1 [i_0 + 1] [i_0 + 2])));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_0 + 1] [i_1] = ((/* implicit */unsigned short) var_11);
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2797229616U)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))) : (arr_1 [i_1] [i_0 + 2])));
            var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) 1497737695U)) : (arr_1 [i_0] [i_1]))) << (((((((/* implicit */_Bool) (unsigned short)31)) ? (2797229616U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) - (2797229600U)))));
            var_22 = ((/* implicit */long long int) (-(var_11)));
            arr_6 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) 1497737673U)) == (arr_1 [i_1] [i_0 + 2]))) ? (((((/* implicit */_Bool) 1497737680U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_1 [i_0 + 1] [i_0 + 1]))) : (((/* implicit */long long int) (~(1735030947))))));
        }
        for (unsigned int i_2 = 1; i_2 < 19; i_2 += 3) 
        {
            var_23 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned char)63)))) ? (1767728510) : (((/* implicit */int) ((unsigned short) var_3)))));
            var_24 *= ((/* implicit */_Bool) var_19);
        }
        for (long long int i_3 = 3; i_3 < 18; i_3 += 1) 
        {
            var_25 ^= ((/* implicit */signed char) 1902815656);
            arr_12 [i_0] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_3 + 1] [i_3 + 1])) ? (arr_0 [i_3 - 3] [i_3 - 3]) : (arr_0 [i_3 - 1] [i_3 - 1])));
        }
        var_26 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1497737669U)) ? (1073741824) : (-1513736231)));
    }
    var_27 = ((/* implicit */unsigned long long int) var_7);
    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((unsigned char) ((((var_7) << (((((var_14) + (4274404079521081186LL))) - (5LL))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
    var_29 = ((/* implicit */int) ((unsigned long long int) 4294967288U));
}
