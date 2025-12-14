/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25580
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((max((var_4), (((/* implicit */long long int) var_6)))) << (((((/* implicit */int) var_8)) - (10443)))))) ? (((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) == (2167136651U))), (((2167136651U) != (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))) : (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) min(((+(-170489718))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_4) : (((/* implicit */long long int) -170489718)))) != (((/* implicit */long long int) max((arr_2 [i_0]), (((/* implicit */int) (_Bool)1))))))))));
        var_21 += ((/* implicit */unsigned short) max((((/* implicit */int) (_Bool)1)), (170489719)));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_22 = ((/* implicit */long long int) ((829863586U) != (((/* implicit */unsigned int) min((170489739), (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-109)))))))));
                        arr_13 [i_3] [i_1] [i_2] [i_2] &= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 170489717)) ? (-1172545082) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_11 [i_1] [i_1] [3] [i_1] [i_1] [14LL])) : ((~(((/* implicit */int) (unsigned short)55029))))))));
                        var_23 = ((/* implicit */short) max((((((/* implicit */_Bool) 2147483647)) ? (-170489704) : (170489697))), (((/* implicit */int) ((signed char) arr_12 [i_3 + 3] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2])))));
                        arr_14 [i_3] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) min((1344189548970992229LL), (((/* implicit */long long int) 1651645045U)))));
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) ((var_5) + (var_5)))))));
    var_25 = (!(((/* implicit */_Bool) 1344189548970992229LL)));
}
