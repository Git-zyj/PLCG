/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247783
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
    var_14 = ((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) var_13))) + (((((/* implicit */long long int) ((/* implicit */int) var_12))) | (-3435927751265921878LL)))))));
    var_15 += ((/* implicit */short) ((var_2) - (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((((/* implicit */int) var_6)) + (2147483647))) << (((((((/* implicit */int) var_8)) + (104))) - (12)))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 ^= ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((max((-3435927751265921878LL), (((/* implicit */long long int) 523844055)))) + (((/* implicit */long long int) (~(520192)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) (!(((/* implicit */_Bool) 3435927751265921877LL))))) * (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)104)))))) - (max((((int) arr_6 [i_2])), (((/* implicit */int) ((3609906544U) < (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
                arr_10 [i_2] [9U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((unsigned int) (_Bool)0)), ((~(var_4)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3435927751265921877LL)) ? (-520176) : (-520191))))));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(1159728521U)))) - (min((0ULL), (((/* implicit */unsigned long long int) arr_7 [i_3]))))))) ? (arr_3 [i_2] [i_3]) : (((/* implicit */int) (!(((((/* implicit */int) (unsigned char)157)) != (((/* implicit */int) arr_9 [i_2] [i_3] [i_3])))))))));
            }
        } 
    } 
}
