/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212388
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((var_7) % (arr_0 [i_1])))))) ? ((~(arr_0 [(unsigned short)2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) < (-1884795514)))))));
                    var_19 = ((/* implicit */long long int) arr_6 [i_0] [i_0] [i_1]);
                    var_20 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 10ULL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */_Bool) 8191LL)) || (((/* implicit */_Bool) var_15)))))))) ? (((((/* implicit */_Bool) ((var_4) % (((/* implicit */int) (signed char)(-127 - 1)))))) ? (arr_1 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_0] [i_1] [i_2]) < (((/* implicit */long long int) ((/* implicit */int) var_18))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) > (var_15))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_11))) >= (min((((/* implicit */long long int) (unsigned char)240)), (var_5))))))) : (var_13)));
    var_22 = ((/* implicit */unsigned long long int) ((signed char) ((var_0) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (1691800962)))))));
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        for (long long int i_4 = 2; i_4 < 15; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                {
                    var_23 = ((/* implicit */long long int) ((((max((((/* implicit */unsigned long long int) var_4)), (var_3))) << (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_11))) - (58012LL))))) < (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) + (2147483647))) << (0LL))))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)151)) / (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)28347))))) : ((-(((((/* implicit */unsigned long long int) 0LL)) / (arr_14 [i_3] [i_4 + 1] [i_5])))))));
                    var_25 -= ((signed char) var_12);
                }
            } 
        } 
    } 
}
