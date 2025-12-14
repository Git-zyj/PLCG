/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207798
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)255)), (arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0]))));
        var_18 = ((/* implicit */_Bool) min((max((((/* implicit */short) (_Bool)1)), (min(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)1)))))), (arr_1 [i_0])));
    }
    for (short i_1 = 1; i_1 < 18; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (short)32765)))) > (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) (_Bool)1))))));
        var_20 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))))));
        var_21 = ((/* implicit */unsigned char) ((_Bool) max((arr_4 [i_1 + 1]), (arr_4 [i_1 - 1]))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                {
                    var_22 = ((/* implicit */_Bool) (short)12288);
                    var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_1 + 1]))))), (arr_2 [i_1 - 1])));
                }
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_24 = ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32757))))) && (arr_12 [i_4]));
        var_25 = (((+(((/* implicit */int) arr_11 [i_4])))) < (((/* implicit */int) min(((_Bool)1), (arr_11 [i_4])))));
    }
    var_26 = ((/* implicit */_Bool) var_8);
    var_27 = ((/* implicit */short) min((((/* implicit */unsigned char) var_4)), (min((((/* implicit */unsigned char) (_Bool)0)), (min(((unsigned char)9), (((/* implicit */unsigned char) var_11))))))));
    var_28 = ((/* implicit */_Bool) max((var_28), (((_Bool) (!(((/* implicit */_Bool) var_9)))))));
}
