/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2827
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
    var_15 = ((/* implicit */unsigned int) var_4);
    var_16 = ((((/* implicit */_Bool) var_1)) ? (8495612248266126106LL) : (((max((((/* implicit */long long int) var_0)), (-8495612248266126123LL))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)121))) + (18446744073709551615ULL))) - (91ULL))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 4])) ? (((/* implicit */int) arr_3 [i_0])) : (arr_0 [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_2 [i_0])))) : (((unsigned long long int) (signed char)64))));
        var_17 = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 4252928079U)))) - (arr_2 [i_0]))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)30)) >> (((2707724775U) - (2707724771U)))))) ? (((/* implicit */unsigned int) 1620294248)) : (4252928079U)))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    {
                        arr_14 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) - (((((/* implicit */int) arr_11 [2U] [i_3] [i_3] [i_3] [i_3] [i_3])) - (((/* implicit */int) arr_5 [i_1] [i_2]))))))), (max((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 3088662607U)))), (((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), ((short)-690))))))));
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_4] [i_4] [i_1] [i_4]))) : (min((((/* implicit */unsigned int) max((arr_5 [i_2] [i_2]), (((/* implicit */unsigned char) (signed char)127))))), (arr_2 [i_2]))))))));
                        arr_15 [i_1] [i_3] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned int) (short)32545)), (2782789164U)));
                        var_19 = ((/* implicit */_Bool) ((int) (+(((((/* implicit */_Bool) 1587242521U)) ? (((/* implicit */int) (unsigned char)147)) : (-568981040))))));
                    }
                } 
            } 
        } 
        arr_16 [i_1] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) ((_Bool) arr_7 [i_1]))) ^ (((/* implicit */int) arr_3 [i_1])))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (+(arr_0 [i_6])))) ? (arr_2 [i_6]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_5] [i_5] [9U])) ? (((/* implicit */int) arr_3 [i_5])) : (((/* implicit */int) arr_1 [i_5] [i_6]))))))))));
            var_21 -= ((/* implicit */unsigned int) ((unsigned char) arr_20 [i_6] [i_6] [i_6]));
            arr_21 [i_6] [i_6] [i_5] = ((/* implicit */short) arr_17 [i_5]);
        }
        arr_22 [i_5] [i_5] = ((/* implicit */long long int) ((_Bool) min((min((4294967295U), (((/* implicit */unsigned int) (short)19333)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (arr_0 [i_5]) : (arr_19 [i_5] [i_5])))))));
    }
    var_22 = ((/* implicit */unsigned char) (((-(var_2))) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-18)))));
}
