/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228824
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
    var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) (~(((/* implicit */int) (short)26)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
        {
            arr_6 [(short)3] [(short)3] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */int) (short)-24555)) - (((/* implicit */int) var_1)))), ((+(((/* implicit */int) arr_4 [i_1])))))))));
            var_11 = ((/* implicit */short) (+((-(((/* implicit */int) arr_3 [i_1]))))));
            arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)32755)) ? (((/* implicit */int) min((arr_0 [i_0] [i_1]), (min(((short)-12094), (arr_1 [i_0] [i_0])))))) : ((~(((((/* implicit */_Bool) arr_0 [(short)11] [(short)11])) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_1]))))))));
        }
        for (short i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
        {
            var_12 += ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_0])) ? (((((/* implicit */int) arr_0 [i_0] [i_2])) >> ((((-(((/* implicit */int) arr_0 [i_0] [i_2])))) + (3961))))) : (((/* implicit */int) (short)-32750))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                arr_12 [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_3])) / (((/* implicit */int) var_0))));
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_3])) * (((/* implicit */int) arr_9 [i_0])))))));
            }
        }
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) min((((((/* implicit */_Bool) max((arr_4 [(short)0]), (arr_4 [i_0])))) ? (((((/* implicit */int) arr_5 [i_0] [i_0])) & (((/* implicit */int) var_0)))) : (((((/* implicit */int) var_2)) - (((/* implicit */int) arr_10 [i_0] [i_0])))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)28294))))) ? (((/* implicit */int) (short)-27641)) : (((/* implicit */int) (short)-18261)))))))));
    }
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        for (short i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            {
                var_15 = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_5]))))));
                var_16 += ((short) (short)3188);
                arr_19 [i_4] [i_5] [i_5] = ((/* implicit */short) (-(max(((-(((/* implicit */int) (short)27)))), (((/* implicit */int) arr_17 [i_4] [i_4] [i_4]))))));
                arr_20 [i_4] [i_5] [i_5] = arr_18 [i_4] [i_4];
            }
        } 
    } 
}
