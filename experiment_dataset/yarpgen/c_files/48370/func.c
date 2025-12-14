/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48370
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_16 = max((((/* implicit */unsigned long long int) 2827436667U)), (max((((/* implicit */unsigned long long int) max((2827436667U), (((/* implicit */unsigned int) var_15))))), (((((/* implicit */_Bool) 1467530629U)) ? (var_10) : (((/* implicit */unsigned long long int) arr_4 [i_1 - 2])))))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [(unsigned char)8] [i_1] [(unsigned char)8])) - (((/* implicit */int) (unsigned char)60))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            {
                var_18 = arr_12 [14U] [i_4];
                arr_15 [i_3] [(unsigned char)0] [i_3] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) 8073006783396444739ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_12 [(unsigned char)0] [(unsigned char)0])))) != (((((/* implicit */int) arr_10 [i_4])) | (((/* implicit */int) var_11)))))) && (((/* implicit */_Bool) 1723803271U))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-5216771847929292661LL), (((/* implicit */long long int) arr_12 [i_3] [i_3]))))) ? (17858319647120638006ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [22ULL])))))))))) ? (((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */unsigned long long int) 215563333U)) : (8062767828235884980ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_10 [i_3]))))), (min((arr_9 [(signed char)15]), (arr_9 [i_4]))))))));
                arr_16 [i_3] = ((/* implicit */unsigned long long int) min((arr_12 [i_3] [i_4]), (((((/* implicit */int) arr_10 [i_3])) > (((/* implicit */int) arr_10 [i_4]))))));
            }
        } 
    } 
}
