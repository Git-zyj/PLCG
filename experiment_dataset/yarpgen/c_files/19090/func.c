/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19090
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
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) var_0)) / (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) min((var_16), (((/* implicit */short) var_13))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -2582933063989048739LL))))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */short) arr_1 [i_0] [i_0]);
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((_Bool) arr_2 [i_0] [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 4; i_2 < 13; i_2 += 4) 
        {
            arr_8 [i_1] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) : (2582933063989048739LL)));
            var_23 = ((/* implicit */_Bool) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))));
        }
        var_24 = ((/* implicit */unsigned short) arr_5 [i_1]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        {
                            arr_18 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) arr_17 [i_1] [i_1] [i_4] [i_1] [i_6]);
                            var_25 = ((/* implicit */unsigned short) ((unsigned int) arr_3 [i_4]));
                            arr_19 [i_6] [i_4] [i_4] [i_4] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_4 [i_1]))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_3]))));
                arr_22 [2ULL] [i_3] [i_3] = ((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */unsigned int) arr_6 [13LL] [i_7])) : (1463715649U));
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_21 [i_7] [i_1]))) ? (((arr_7 [i_1] [i_3] [i_7]) ? (((/* implicit */int) arr_13 [i_1] [i_3] [i_7] [i_7])) : (((/* implicit */int) arr_21 [i_1] [i_3])))) : (((/* implicit */int) arr_21 [i_1] [i_1]))));
            }
        }
        var_28 = ((/* implicit */unsigned short) arr_5 [i_1]);
    }
}
