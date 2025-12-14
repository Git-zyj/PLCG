/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239825
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) (unsigned char)153)) ? (arr_1 [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(signed char)11] [i_1 - 2] [i_1 - 4] [(signed char)11] [i_1 - 1] [i_4]))))))))));
                                arr_15 [i_0] [i_0] [i_0] [i_4] [i_3] [22] [i_2] = ((/* implicit */_Bool) var_5);
                                arr_16 [i_2] [(signed char)10] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)31276))));
                            }
                        } 
                    } 
                } 
                arr_17 [(unsigned char)22] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)18)) > (((((/* implicit */int) (signed char)26)) + (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
                var_16 = ((/* implicit */short) ((((/* implicit */int) var_10)) >> (((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) > (arr_9 [i_0]))))) | (arr_8 [i_0] [i_0] [i_1]))) + (1821255423502719818LL)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) var_10)) ? (2078637370U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
    /* LoopNest 3 */
    for (unsigned int i_5 = 2; i_5 < 22; i_5 += 3) 
    {
        for (long long int i_6 = 4; i_6 < 20; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_18 -= arr_4 [(unsigned short)19];
                    var_19 = ((/* implicit */unsigned short) arr_23 [i_6]);
                    var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5 + 1] [i_5 - 1] [i_6 - 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (min((((/* implicit */unsigned long long int) -2425048124132079939LL)), (8721406978406523611ULL)))));
                }
            } 
        } 
    } 
}
