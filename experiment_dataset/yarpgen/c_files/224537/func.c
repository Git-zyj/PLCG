/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224537
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
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_17 = min((((((unsigned long long int) var_16)) >> (((((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) (unsigned char)147)) : (-51404792))) - (135))))), (((/* implicit */unsigned long long int) ((signed char) arr_5 [(signed char)3]))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((var_5) / ((+(3030892085628546985ULL)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 7; i_4 += 3) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) -1246517627)) : (8589926400ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_3] [i_4]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)81))) : (2254967485U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1]))) : (((((/* implicit */_Bool) arr_10 [i_2] [i_3])) ? (8745932587363461748ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))))))));
                                arr_13 [i_0] [i_1 + 1] [i_0] [i_4] = ((/* implicit */int) arr_2 [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned long long int) var_8))));
    var_20 = ((/* implicit */int) min((((((/* implicit */_Bool) var_10)) ? (min((var_5), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), ((-(9700811486346089840ULL)))));
    var_21 = ((/* implicit */unsigned long long int) var_15);
}
