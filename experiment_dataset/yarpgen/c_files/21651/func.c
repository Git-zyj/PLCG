/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21651
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
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) max(((unsigned char)246), ((unsigned char)246))))))));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63))) : (var_13)))) ? ((-(var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))), (((min((((/* implicit */unsigned long long int) (short)-2)), (arr_6 [i_0] [i_0 - 1] [i_1] [i_1] [i_2] [i_3]))) ^ (((/* implicit */unsigned long long int) ((long long int) (signed char)8))))))))));
                        var_19 -= ((/* implicit */unsigned int) max((((/* implicit */int) arr_1 [i_0 - 1])), ((-(((/* implicit */int) ((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65512))))))))));
                    }
                } 
            } 
        } 
        arr_8 [(unsigned char)12] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (arr_0 [i_0 - 2] [i_0 - 2]))))));
    }
    var_20 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? (2147483647) : (((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (var_9)))) ? (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_8)))));
    var_21 = ((/* implicit */unsigned char) var_1);
    var_22 = ((/* implicit */unsigned char) var_14);
    var_23 -= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_6)))) ? (max((((/* implicit */unsigned int) var_14)), (22U))) : (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)63)), (var_15)))))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) >> (((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (25ULL))) - (32739ULL))))))));
}
