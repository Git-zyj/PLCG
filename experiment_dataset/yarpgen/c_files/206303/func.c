/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206303
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
    var_20 = ((long long int) ((((/* implicit */_Bool) min((var_0), (var_15)))) ? ((-(-6690708649290427327LL))) : (-245767591246683543LL)));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 23; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (long long int i_4 = 4; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) 0LL))) ? (((/* implicit */int) ((max((var_11), (arr_3 [i_3]))) > (0LL)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (5486393420214859115LL) : (arr_12 [i_0] [i_0] [i_2])))) || (((/* implicit */_Bool) -5486393420214859116LL)))))));
                                var_22 = (((-(((((/* implicit */_Bool) -3923117265882870268LL)) ? (arr_10 [i_0] [i_1] [i_1] [i_3] [i_4]) : (arr_8 [i_3] [i_0] [i_1] [i_0]))))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5486393420214859115LL)) ? (arr_2 [i_3] [i_1]) : (var_16)))) || (((/* implicit */_Bool) arr_3 [i_1])))))));
                                var_23 = (~(((((/* implicit */_Bool) (-(arr_8 [i_0] [i_0] [i_0] [i_0])))) ? (arr_7 [6LL] [i_2] [i_4] [i_4 - 3] [i_2] [i_2 - 1]) : (5486393420214859109LL))));
                                var_24 = min((arr_6 [i_2] [i_3] [i_4]), (arr_10 [i_0 + 1] [i_1] [0LL] [i_1] [i_4]));
                                arr_13 [i_0] [i_0] [i_1] [i_2 - 1] [i_2] [i_3] [i_4] = ((((/* implicit */_Bool) (~((~(arr_6 [i_2] [i_2] [i_2 - 1])))))) ? ((~(((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_2])) ? (var_11) : (0LL))))) : (((long long int) ((((arr_0 [i_2 - 1]) + (9223372036854775807LL))) << (((((arr_2 [i_0] [17LL]) + (309783597367365508LL))) - (23LL)))))));
                            }
                        } 
                    } 
                } 
                var_25 = ((((/* implicit */_Bool) -5486393420214859109LL)) ? (arr_11 [i_1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_1]) : (arr_6 [i_1] [i_1] [i_1]));
                /* LoopNest 3 */
                for (long long int i_5 = 4; i_5 < 20; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        for (long long int i_7 = 1; i_7 < 23; i_7 += 2) 
                        {
                            {
                                var_26 = arr_17 [i_0];
                                arr_22 [i_0] [i_6] [i_0] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_5 + 4] [i_6] [i_7] [6LL])) ? (arr_18 [i_0] [i_1] [i_7]) : (5486393420214859115LL))), (7004283352856272243LL)))) ? ((+(-2899443904442326185LL))) : (((((((((/* implicit */_Bool) 5486393420214859109LL)) ? (-5486393420214859109LL) : (5486393420214859109LL))) + (9223372036854775807LL))) << (((((min((arr_6 [i_5] [6LL] [i_5]), (-5486393420214859109LL))) + (5486393420214859165LL))) - (55LL))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
