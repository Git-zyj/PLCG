/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21068
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_20 += var_1;
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), ((unsigned short)19)))) ? (max((var_14), (((/* implicit */long long int) arr_0 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42553)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 1; i_2 < 13; i_2 += 3) 
        {
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_6 [5LL] [i_2])) << (((((/* implicit */int) var_12)) - (10907)))))))));
            var_23 = ((/* implicit */signed char) ((long long int) arr_6 [i_2 + 1] [i_2 - 1]));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_24 = ((/* implicit */long long int) ((((arr_5 [i_1] [i_1] [12U]) + (2147483647))) << (((63699601U) - (63699601U)))));
            arr_11 [0LL] [0LL] [i_3] = ((/* implicit */unsigned int) ((7864320) - (((/* implicit */int) (unsigned char)255))));
        }
        for (short i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            var_25 += ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_8 [14])) ? (((/* implicit */int) (short)2032)) : (arr_3 [i_1])))));
            arr_15 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 7864320))));
            var_26 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 7864321))));
            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (short)-1752))));
            var_28 = var_13;
        }
        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) 7864321))));
    }
    var_30 = ((/* implicit */unsigned char) min((var_3), (min((894616994U), (3396492711U)))));
    var_31 = ((/* implicit */int) (!((!(((/* implicit */_Bool) -7864315))))));
}
