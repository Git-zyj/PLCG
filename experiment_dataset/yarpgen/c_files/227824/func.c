/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227824
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */signed char) ((max((((((/* implicit */int) var_8)) | (((/* implicit */int) (short)-18252)))), (((/* implicit */int) min((var_4), (((/* implicit */short) (signed char)0))))))) * ((-(((/* implicit */int) ((((/* implicit */int) (signed char)-2)) <= (((/* implicit */int) (signed char)0)))))))));
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)0)))) & (((/* implicit */int) (signed char)-1))))) ? (((((/* implicit */int) (short)26259)) ^ (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) var_11)) & (((/* implicit */int) (signed char)8)))) : (((/* implicit */int) (short)-2128)))))))));
                }
            } 
        } 
    } 
    var_14 -= ((/* implicit */short) max((min((((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (short)12804))))), (var_0))), (var_2)));
    var_15 = ((/* implicit */short) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        for (short i_4 = 2; i_4 < 24; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */int) max((min((var_1), (var_8))), (((/* implicit */short) ((signed char) var_8)))))) <= (((/* implicit */int) (signed char)3))));
                    var_17 += var_11;
                    arr_18 [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)30)))))));
                    arr_19 [i_5] [i_4] = ((/* implicit */short) (+((-(((/* implicit */int) var_9))))));
                }
            } 
        } 
    } 
}
