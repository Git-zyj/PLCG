/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30549
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
    var_18 -= ((/* implicit */unsigned short) var_1);
    var_19 = ((/* implicit */unsigned short) ((unsigned char) var_7));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) min((var_14), (5479320204044159258LL)))) && (((/* implicit */_Bool) ((unsigned char) arr_2 [i_0] [i_0] [i_1])))))))))));
                var_21 = ((/* implicit */long long int) ((max((((/* implicit */long long int) ((unsigned char) arr_2 [i_1] [i_1] [5LL]))), (12LL))) < (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)22)), ((~(((/* implicit */int) arr_2 [(unsigned char)10] [i_1] [i_0 + 3])))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) ((unsigned short) (unsigned char)22))), (((long long int) -5393797237989325383LL))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) var_6))) >= (var_8)))))) > ((~(((/* implicit */int) ((unsigned char) var_15))))))))));
}
