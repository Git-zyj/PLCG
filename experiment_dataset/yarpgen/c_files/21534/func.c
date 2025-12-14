/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21534
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
    var_17 += var_4;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    var_18 += arr_3 [(signed char)6] [i_2];
                    arr_6 [i_0] [i_0] [(signed char)11] = ((/* implicit */signed char) (+((+(((/* implicit */int) max((var_1), ((signed char)32))))))));
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max(((+(((/* implicit */int) (signed char)-32)))), (((/* implicit */int) ((signed char) var_16))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 14; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((var_20), (var_12)));
                                var_21 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)32))));
                            }
                        } 
                    } 
                }
                arr_13 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-32)) ? ((-(((/* implicit */int) var_15)))) : (((/* implicit */int) ((signed char) var_8)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) < ((+(((/* implicit */int) var_15))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [(signed char)6] [(signed char)14] [(signed char)11])) ? (((/* implicit */int) arr_8 [i_0] [(signed char)8] [i_0] [(signed char)0])) : (((/* implicit */int) var_10))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_16 [i_5] [i_5])))))) | ((-(((/* implicit */int) var_0)))))))));
        var_23 = arr_14 [(signed char)2];
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_5] [i_6])) ? (((/* implicit */int) arr_16 [i_5] [i_6])) : (((/* implicit */int) arr_16 [i_5] [i_6]))));
            arr_21 [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_6] [i_5]))));
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) arr_15 [i_6])) : (((/* implicit */int) var_3))));
            arr_22 [i_6] [i_6] [(signed char)5] = arr_16 [i_5] [i_5];
        }
    }
    var_26 *= ((signed char) var_6);
}
