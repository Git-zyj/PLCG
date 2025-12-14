/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44469
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_10 [(unsigned short)5] = ((/* implicit */unsigned long long int) (unsigned short)45204);
                    var_11 = ((/* implicit */unsigned long long int) min((min((arr_4 [i_0] [i_1]), (((/* implicit */long long int) -1245412624)))), (((/* implicit */long long int) (-(-1245412624))))));
                    arr_11 [(unsigned char)14] [1ULL] [18LL] [(unsigned short)1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 5770289256631579056ULL)) ? (-1245412624) : (1248937287)))));
                }
            } 
        } 
    } 
    var_12 = (~(((/* implicit */int) (!(var_10)))));
    var_13 = ((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) (signed char)59)))));
    var_14 = ((/* implicit */unsigned short) var_3);
}
