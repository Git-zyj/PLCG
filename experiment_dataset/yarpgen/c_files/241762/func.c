/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241762
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
    for (signed char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) -1026842926)))) ? (min((var_8), (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_2] [i_3])) || (((/* implicit */_Bool) var_7)))) || (((((/* implicit */_Bool) (unsigned char)31)) || (((/* implicit */_Bool) 1026842925))))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_3])))) && ((!(((/* implicit */_Bool) 1026842925)))))))));
                            arr_9 [(_Bool)1] [(_Bool)1] [i_2] [(unsigned char)7] [i_2] [(_Bool)1] = ((/* implicit */short) (((((!(((/* implicit */_Bool) arr_1 [i_1])))) && (var_0))) ? (((((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned char)83)) : (-1026842926))) + (2147483647))) << ((((-(1425347427134776754ULL))) - (17021396646574774862ULL))))) : (((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_3]))) > (var_14))), ((!(((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_3])))))))));
                        }
                    } 
                } 
                arr_10 [i_0 + 1] [i_0 + 1] = ((/* implicit */_Bool) arr_6 [3U] [i_1] [3U]);
                var_18 = ((/* implicit */unsigned char) ((1026842926) | (((-1026842925) - (-1026842926)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 1; i_4 < 11; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            {
                arr_16 [i_4] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(0))))));
                arr_17 [i_4] = ((/* implicit */signed char) (+(((((/* implicit */int) arr_2 [i_4] [i_4 - 1] [i_5])) << (((((/* implicit */int) arr_2 [i_5] [i_4 - 1] [i_5])) - (16733)))))));
            }
        } 
    } 
}
