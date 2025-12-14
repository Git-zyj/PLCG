/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38571
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
        {
            var_18 = (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (var_15))));
            arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                arr_7 [17] [i_0] [(unsigned char)9] [i_2] = ((arr_6 [i_2 + 1] [i_2 + 2] [i_2]) * (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0] [i_1]))));
                var_19 = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_0]);
            }
        }
        for (short i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned int) ((((_Bool) (signed char)101)) ? (((((/* implicit */_Bool) 1160319247199549729LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0]))) : (arr_5 [i_0] [6U] [i_3]))) : (((/* implicit */unsigned long long int) (+(var_1))))));
            /* LoopSeq 1 */
            for (short i_4 = 1; i_4 < 20; i_4 += 4) 
            {
                arr_13 [i_3] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14))))));
                var_21 = ((/* implicit */short) (~(-4342118533680142661LL)));
            }
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) -2252272802205101551LL))) | ((~(((/* implicit */int) var_2))))));
        }
        for (int i_5 = 3; i_5 < 20; i_5 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                arr_22 [i_0] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_0] [i_0] [i_6] [i_5 - 1])) != (((((/* implicit */_Bool) -1160319247199549735LL)) ? (var_3) : (var_3)))));
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) arr_21 [i_5 - 1] [i_6] [i_6]))));
                arr_23 [i_6] [i_5] [i_5] = ((/* implicit */int) arr_10 [i_5 - 1]);
            }
            for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                arr_26 [i_0] [i_5] [i_7] [6U] |= ((/* implicit */long long int) (-(arr_19 [i_5])));
                var_24 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
            }
            arr_27 [i_0] [i_0] [i_0] = arr_14 [i_5] [i_5] [i_5 - 1];
        }
        arr_28 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) var_13)))));
    }
    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_6)))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)42))) : (15387106556789055297ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)43)) >> (((var_15) - (585730974U)))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >> (((/* implicit */int) var_13))))), ((~(var_17))))))));
}
