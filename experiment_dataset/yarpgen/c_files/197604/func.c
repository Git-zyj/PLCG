/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197604
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
    var_11 = ((/* implicit */_Bool) (~((~(((((/* implicit */unsigned long long int) 1075532470U)) ^ (var_3)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) 1075532463U)) && ((_Bool)1))))));
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1182145451U)))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) != (var_3)))));
        var_13 = arr_0 [i_0];
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (-(3219434811U))))));
        var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (((((/* implicit */_Bool) 33554431)) ? (3219434825U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */long long int) arr_10 [i_1]);
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((long long int) 1075532461U)))));
        }
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
        {
            arr_14 [i_1] [i_1] = ((/* implicit */int) ((_Bool) ((unsigned short) arr_12 [i_1] [i_3])));
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)147))))) ^ (arr_6 [i_1]))))));
            var_19 = ((/* implicit */int) arr_7 [i_1] [i_3]);
        }
        arr_15 [i_1] [i_1] = ((/* implicit */int) (-(3112821817U)));
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            arr_19 [i_1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1182145446U)) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                var_20 = ((/* implicit */unsigned char) 3112821861U);
                arr_22 [i_1] [i_4] [i_1] = ((/* implicit */_Bool) ((unsigned short) var_6));
            }
            for (signed char i_6 = 3; i_6 < 16; i_6 += 3) 
            {
                var_21 += ((/* implicit */_Bool) ((arr_7 [(short)6] [i_6 - 1]) ? (((/* implicit */int) arr_7 [(signed char)14] [i_6 - 2])) : (((/* implicit */int) arr_7 [(short)14] [i_6 - 3]))));
                var_22 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_6 + 1]))));
                arr_25 [i_1] [i_4] [i_6 + 2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_1] [i_6 - 3])) || (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
            }
            arr_26 [i_1] = (((_Bool)1) ? (-6738908962373872828LL) : (((/* implicit */long long int) 1182145449U)));
        }
        var_23 |= ((/* implicit */int) ((short) (~(((/* implicit */int) arr_7 [(_Bool)1] [i_1])))));
        var_24 = ((/* implicit */_Bool) max((var_24), (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_24 [i_1] [(unsigned short)12] [i_1] [i_1]))))));
    }
    var_25 = ((/* implicit */long long int) (-((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_8)))))));
}
