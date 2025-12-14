/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32151
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min(((signed char)121), (((/* implicit */signed char) (!(var_13))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_3)))))))) : (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)6)) << (((((/* implicit */int) (unsigned char)255)) - (247)))))), (((var_13) ? (-5822147105404895104LL) : (((/* implicit */long long int) 134217727))))))));
    var_19 = ((/* implicit */_Bool) (+((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1792289572))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 24; i_3 += 1) 
                    {
                        for (short i_4 = 4; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? ((~(var_3))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((-1792289573), (((/* implicit */int) (signed char)127))))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) (_Bool)1)))))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((int) var_8)), ((~(((/* implicit */int) (_Bool)1))))))) ? ((-(max((((/* implicit */long long int) var_9)), (arr_14 [i_0] [i_1 - 2] [i_0] [i_1] [i_4 + 1]))))) : (((/* implicit */long long int) (+((+(((/* implicit */int) var_9)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
