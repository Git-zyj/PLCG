/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28996
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_5))));
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_6))) ? (min((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (var_1))), (((/* implicit */unsigned int) min(((signed char)-93), ((signed char)-1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_5))))))))))));
    var_22 = ((/* implicit */short) ((signed char) var_5));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_0 + 1] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0 - 2] [i_2 - 1]))))), ((+(((/* implicit */int) var_13))))));
                                var_23 = ((/* implicit */signed char) arr_2 [i_0 - 3] [i_1]);
                                var_24 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_0 [(_Bool)1])))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
                            }
                        } 
                    } 
                    arr_16 [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_4 [i_0 + 1] [i_2 + 1])) + (((/* implicit */int) arr_4 [i_0 - 1] [i_2 + 1]))))));
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_6 [i_2])))) ? (max((((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) + (30660))))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [i_2] [i_2] [i_1] [5U] [i_2] [i_0])), (arr_7 [i_0] [i_1] [i_2] [(unsigned short)13])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1])) != (((/* implicit */int) var_13))))) : (((/* implicit */int) arr_12 [15U] [i_2] [i_1] [i_1] [i_2] [i_0]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            {
                var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5 + 1])) ? (((/* implicit */int) arr_0 [i_5 + 1])) : (((/* implicit */int) arr_0 [i_5 + 1])))))));
                var_27 = ((unsigned int) 2012889139383611031ULL);
                var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))) : (arr_8 [i_5 + 1] [(signed char)22] [i_5 + 1])));
            }
        } 
    } 
}
