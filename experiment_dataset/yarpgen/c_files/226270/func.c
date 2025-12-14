/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226270
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
    var_10 = ((/* implicit */unsigned short) (short)32750);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (~(min((((/* implicit */int) max((((/* implicit */short) (unsigned char)27)), ((short)-19990)))), ((~(((/* implicit */int) arr_1 [i_0]))))))));
        var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((short)19979), (((/* implicit */short) arr_1 [i_0])))))));
        var_12 = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0] [(unsigned short)6]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            arr_7 [i_1 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : ((+(var_1)))));
            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)89)) ? (((/* implicit */int) arr_0 [i_1] [11LL])) : (((/* implicit */int) var_9))));
            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) 3087944649169832918LL))))))));
            arr_8 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
            arr_9 [i_0] [3U] [i_1] = ((/* implicit */unsigned int) arr_0 [i_0] [i_1]);
        }
        for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (~(((((/* implicit */int) var_0)) | (((/* implicit */int) (signed char)122)))))))));
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_12 [i_0] [i_0]))));
        }
    }
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned char) (~((~(var_1)))));
        var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)122))));
        var_18 |= ((/* implicit */signed char) var_1);
    }
}
