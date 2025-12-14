/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218337
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_1 [i_2]))));
                    var_18 = ((/* implicit */unsigned long long int) 65535);
                    arr_10 [4ULL] &= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (2147483647))))))) != (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != ((+(((/* implicit */int) (_Bool)1)))))))));
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 1) 
    {
        var_20 = ((/* implicit */int) arr_12 [i_3 - 1] [i_3 - 1]);
        arr_13 [i_3] &= ((signed char) (_Bool)1);
        arr_14 [i_3] [i_3] &= ((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_12 [i_3 + 1] [i_3 - 1])) & (((/* implicit */int) (_Bool)1)))));
    }
    var_21 &= (_Bool)1;
}
