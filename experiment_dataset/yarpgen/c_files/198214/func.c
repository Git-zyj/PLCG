/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198214
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 11; i_2 += 3) 
            {
                {
                    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)0)))) << ((((-(((/* implicit */int) arr_6 [i_2 - 4] [i_1 - 1])))) + (27)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) : (max((((/* implicit */long long int) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_3))))), (((arr_2 [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)168)))))))));
                    var_18 |= ((/* implicit */long long int) arr_8 [4LL] [i_1 - 1] [i_2 + 1]);
                    var_19 = ((/* implicit */_Bool) (((-(((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))) / (arr_2 [i_1] [i_2 + 2]))))) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned char)4])))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (!((!(var_15)))));
    var_21 = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) var_5)))));
}
