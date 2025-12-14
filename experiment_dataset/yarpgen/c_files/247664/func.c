/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247664
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(unsigned short)6] [(unsigned short)6])) || (((/* implicit */_Bool) var_3))))) << (((arr_1 [i_0] [i_0]) + (1788204377961911232LL))))))));
        var_13 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_7)) + (arr_0 [i_0] [i_0]))) : ((~(arr_0 [19U] [i_0]))))))));
        var_14 = ((/* implicit */short) ((((arr_0 [i_0] [i_0]) + (2147483647))) << (((/* implicit */int) ((arr_0 [i_0] [i_0]) > (arr_0 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) << ((((+(var_10))) - (3910767102U)))));
        var_16 = ((((/* implicit */_Bool) ((signed char) arr_3 [i_1]))) ? (arr_0 [i_1] [i_1]) : (((/* implicit */int) (_Bool)1)));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            var_17 = ((/* implicit */long long int) 1293687812);
            arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) arr_3 [i_2]);
        }
        for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            arr_12 [i_1] [i_1] = ((/* implicit */unsigned int) ((arr_5 [i_1]) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_3]))));
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8)))))));
        }
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_2 [i_1]))));
        var_20 = ((/* implicit */_Bool) min((var_20), (arr_10 [i_1])));
    }
    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)32767))));
        var_22 = ((/* implicit */int) min((var_22), ((-(((/* implicit */int) arr_14 [i_4]))))));
    }
    var_23 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)24)) << (((((/* implicit */int) var_1)) - (7813)))))) || (((/* implicit */_Bool) 520192LL))))));
    var_24 = ((/* implicit */unsigned char) max(((((!(((/* implicit */_Bool) (unsigned char)255)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_5))), (((/* implicit */unsigned long long int) var_3))));
    var_25 = ((/* implicit */long long int) ((int) max((((/* implicit */short) var_7)), (var_8))));
    var_26 = ((/* implicit */unsigned long long int) (unsigned char)255);
}
