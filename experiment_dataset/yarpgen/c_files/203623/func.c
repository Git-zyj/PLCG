/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203623
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
    var_13 = ((/* implicit */signed char) var_1);
    var_14 = ((/* implicit */long long int) var_10);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2 - 2] = ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2 + 1] [i_0 - 1] [i_0 - 1] = ((long long int) ((max((((/* implicit */long long int) (signed char)-122)), (var_9))) == ((-(var_8)))));
                                arr_16 [i_3] [i_0] = ((max((((/* implicit */long long int) (signed char)(-127 - 1))), (486073224760009776LL))) << (((((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_0 + 1])) ? (arr_11 [i_4] [i_4] [i_4] [i_2 + 1] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) - (5009002880218691088LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) var_2);
    /* LoopSeq 1 */
    for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        var_16 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_12))))), ((-(486073224760009776LL)))));
        var_17 = ((/* implicit */signed char) (+(((((((/* implicit */long long int) ((/* implicit */int) var_5))) < (-5635985689848215151LL))) ? (var_6) : (((((/* implicit */_Bool) arr_7 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_1)))))));
    }
}
