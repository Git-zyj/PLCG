/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22590
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
    var_14 ^= ((/* implicit */long long int) var_5);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2199023255548LL)) ? (22ULL) : (((/* implicit */unsigned long long int) -1192047274))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) (+(((((/* implicit */int) (!(((/* implicit */_Bool) (short)-5083))))) ^ (((/* implicit */int) ((var_7) <= (arr_4 [i_0]))))))));
                    var_17 = ((/* implicit */long long int) ((int) arr_2 [i_2 + 3]));
                    arr_9 [i_0] [i_2 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_2 - 1])) : ((~(((/* implicit */int) (short)255))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    {
                        arr_17 [i_0] = ((/* implicit */int) arr_10 [i_0]);
                        var_18 = var_1;
                        var_19 = ((/* implicit */long long int) max((var_19), (arr_5 [i_3] [(short)14])));
                        arr_18 [i_0] [i_0] [i_0] [(signed char)7] = ((/* implicit */short) ((((arr_5 [i_3] [i_3]) + (9223372036854775807LL))) << (((var_0) - (3227777733610410818LL)))));
                        arr_19 [7LL] [i_0] [(short)4] [8LL] [i_0] [4] = ((/* implicit */unsigned long long int) 1684370314);
                    }
                } 
            } 
        } 
        var_20 = arr_7 [i_0 + 3] [i_0 + 2] [i_0 - 1] [i_0];
    }
    var_21 = ((/* implicit */int) ((long long int) max((((/* implicit */unsigned long long int) max((var_7), (1192047270)))), (((((/* implicit */_Bool) 3420007252477303410LL)) ? (17559927861846992888ULL) : (6477897791751856388ULL))))));
}
