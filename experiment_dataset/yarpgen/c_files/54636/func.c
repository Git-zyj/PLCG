/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54636
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16096183514291758763ULL)) ? (var_11) : (((/* implicit */unsigned int) 6))))) || (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) >= (var_13)))))));
                    arr_10 [i_2] &= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 + 3])) || (((/* implicit */_Bool) max((arr_5 [i_0] [i_1] [i_1]), (arr_5 [i_0] [i_0] [i_2]))))))));
                    var_17 *= ((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_9 [i_2] [i_1])) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned int) arr_3 [i_2])))), (arr_9 [i_2] [i_1 - 1]))) << (((((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */int) (short)(-32767 - 1))) : (-6))) + (32779)))));
                    arr_11 [i_2] &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1 + 2])) ? (max((var_1), (((/* implicit */unsigned int) arr_1 [i_2] [i_2])))) : (((1664113528U) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (135)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_3 = 3; i_3 < 8; i_3 += 1) 
    {
        var_18 -= ((/* implicit */unsigned short) ((unsigned int) ((signed char) (!(((/* implicit */_Bool) arr_14 [i_3]))))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (-1240836718) : (((/* implicit */int) (signed char)(-127 - 1)))))), (arr_14 [i_3]))))))));
        var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_12 [i_3 + 1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) || (((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL)))))));
    }
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
    {
        arr_17 [i_4] |= ((/* implicit */unsigned long long int) -4);
        var_21 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? ((-(arr_12 [i_4]))) : (var_15)))), (((((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4] [i_4])) ? (var_12) : (((/* implicit */unsigned long long int) var_6)))) << (((/* implicit */int) var_0))))));
    }
    var_22 *= ((/* implicit */short) var_6);
    var_23 -= ((/* implicit */signed char) ((short) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) <= (var_6)))))));
}
