/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29360
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_2 [i_0] [i_0])))) ? ((~((~(((/* implicit */int) arr_4 [i_0] [i_0] [4LL])))))) : (max((((/* implicit */int) (unsigned char)5)), ((-(((/* implicit */int) (unsigned short)0))))))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) var_4);
            }
        } 
    } 
    var_14 *= ((/* implicit */int) var_6);
    var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)65527)) ? (26U) : (((/* implicit */unsigned int) -462894132)))), (((/* implicit */unsigned int) (((~(-462894132))) > (-1))))));
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        arr_13 [i_2] [i_2 + 1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_11 [i_2 + 1] [(unsigned char)13])) ? (arr_9 [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2 + 1] [i_2 + 1]))))), (((/* implicit */long long int) arr_11 [i_2 + 1] [i_2 + 1]))));
        arr_14 [9] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) 3477663019172127173LL)))));
        var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((arr_12 [i_2 + 1] [i_2 + 1]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_12 [i_2 + 1] [i_2 + 1]))))), (((((((/* implicit */_Bool) var_8)) ? (3331881982U) : (((/* implicit */unsigned int) 462894107)))) & (((unsigned int) arr_9 [i_2]))))));
        arr_15 [i_2 + 1] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2 + 1] [i_2 + 1]))) * (arr_9 [i_2]))) << (((((var_7) + (1393423967))) - (10)))));
    }
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        var_17 ^= ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) var_8))))) - ((~(((arr_16 [i_3]) - (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_3])))))))));
        arr_18 [i_3] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) var_6))))), (max((((/* implicit */long long int) var_9)), (arr_16 [i_3])))));
        arr_19 [i_3] [i_3] |= ((/* implicit */long long int) (~((~(((/* implicit */int) arr_12 [i_3] [i_3]))))));
    }
}
