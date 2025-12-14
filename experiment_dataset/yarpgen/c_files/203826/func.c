/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203826
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
    var_10 = ((/* implicit */unsigned short) max((min((((unsigned long long int) -563839107188985115LL)), (((/* implicit */unsigned long long int) max((1990181623U), (((/* implicit */unsigned int) (unsigned short)3300))))))), (((/* implicit */unsigned long long int) (signed char)31))));
    var_11 = ((/* implicit */short) var_6);
    var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_2)), (var_5)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_3 [i_0] [i_1]);
                    var_13 = ((/* implicit */signed char) (unsigned short)25238);
                    var_14 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_4 [(unsigned short)2] [i_1] [i_1])), (-8291970227480926724LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0)))))))), (max((((unsigned long long int) arr_0 [i_0 + 1])), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_2]))))));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(max((arr_6 [i_0 - 1] [i_0 - 1] [i_2 + 3]), (arr_6 [i_0 - 1] [i_0 + 1] [i_2 - 1])))));
                }
            } 
        } 
    } 
}
