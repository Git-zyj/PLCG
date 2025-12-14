/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40382
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
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((unsigned short) min((6697257904044808777ULL), (65535ULL))));
                    var_13 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) > (arr_6 [(unsigned short)23] [23ULL] [i_0 - 3]))))));
                    var_14 += ((/* implicit */signed char) var_1);
                    arr_9 [i_0 + 1] [i_1] [i_1] [i_0 - 1] = ((((long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_1 [i_2] [6LL]))))) * (((/* implicit */long long int) min(((-(((/* implicit */int) arr_2 [i_0 - 2] [i_1])))), (arr_0 [i_0 - 1])))));
                    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -1LL)) ? (11749486169664742826ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8629))))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_2] [i_0 - 2] [(signed char)6])) << (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_2])))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) min((3490530422U), (804436874U)));
}
