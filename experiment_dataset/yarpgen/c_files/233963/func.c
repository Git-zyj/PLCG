/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233963
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
    var_10 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        arr_3 [16U] [(unsigned short)15] = ((/* implicit */_Bool) -402399564021399682LL);
        arr_4 [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_6 [i_0] = ((/* implicit */unsigned long long int) (-((-(arr_1 [i_0] [i_0])))));
    }
    for (short i_1 = 3; i_1 < 15; i_1 += 2) 
    {
        var_11 -= ((/* implicit */_Bool) ((unsigned short) var_7));
        arr_10 [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_0 [i_1 + 2])))) / (arr_0 [i_1 + 3]));
    }
    /* LoopSeq 1 */
    for (signed char i_2 = 2; i_2 < 18; i_2 += 2) 
    {
        arr_13 [i_2] = min((((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 1248425272U))))) / (((/* implicit */int) max(((short)4968), (((/* implicit */short) (unsigned char)6))))))), (((/* implicit */int) (short)-4969)));
        var_12 *= ((/* implicit */unsigned long long int) (short)-18839);
        var_13 = ((/* implicit */_Bool) arr_2 [i_2]);
    }
}
