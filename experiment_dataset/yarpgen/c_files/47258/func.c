/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47258
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)82)) << (((arr_0 [(_Bool)1]) - (672408407)))))) ? (((int) var_15)) : (arr_3 [i_0]))));
                arr_5 [i_0] = ((/* implicit */signed char) max(((+((-(((/* implicit */int) (unsigned char)82)))))), (((/* implicit */int) var_1))));
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((arr_3 [(unsigned char)2]) >= (((/* implicit */int) (unsigned char)30)))))));
                arr_6 [i_1 + 1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_16))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_3] = min((((arr_8 [i_1 + 1] [i_1 - 1] [i_0]) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [i_0])) : (((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 2] [i_0])))), (((-877480923) % (((/* implicit */int) (unsigned char)30)))));
                            arr_13 [i_0] = ((/* implicit */unsigned char) ((3372202317U) ^ (((((/* implicit */_Bool) arr_3 [i_0])) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_16), (((/* implicit */short) (unsigned char)0))))))))));
                            var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) 2125676011)) ? (4294967294U) : (((/* implicit */unsigned int) ((int) var_5))))) > (((/* implicit */unsigned int) min((arr_10 [i_0] [i_0]), (arr_10 [i_0] [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min(((+((~(((/* implicit */int) (unsigned char)253)))))), ((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) min((var_16), (((/* implicit */short) var_12))))) : (((/* implicit */int) var_15)))))))));
}
