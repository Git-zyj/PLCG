/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36363
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
    for (signed char i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        var_12 = min((arr_1 [i_0]), ((unsigned char)173));
        var_13 -= ((/* implicit */short) min((min((3385526521671312071LL), (((/* implicit */long long int) min(((unsigned char)64), (((/* implicit */unsigned char) arr_3 [i_0 - 3] [(short)0]))))))), (((/* implicit */long long int) max((((/* implicit */unsigned char) arr_0 [i_0 - 3] [i_0 - 1])), ((unsigned char)207))))));
        var_14 -= (unsigned char)187;
        var_15 = min((((/* implicit */unsigned short) max((arr_2 [i_0] [i_0 - 2]), (((/* implicit */short) arr_1 [(unsigned char)4]))))), (min(((unsigned short)32767), (((/* implicit */unsigned short) (unsigned char)233)))));
        arr_4 [i_0] = ((/* implicit */short) (unsigned char)99);
    }
    var_16 = ((/* implicit */signed char) max((min(((unsigned char)30), ((unsigned char)18))), (var_6)));
    /* LoopSeq 1 */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 13; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    arr_14 [i_1] [i_1] [i_3] = ((/* implicit */signed char) (~((+(((/* implicit */int) (unsigned char)203))))));
                    var_17 = arr_13 [(short)10] [i_3];
                }
            } 
        } 
        arr_15 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)30))));
        var_18 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) (unsigned char)31)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)30)))))));
    }
    var_19 = ((/* implicit */signed char) var_2);
}
