/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207314
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
    var_18 |= ((/* implicit */unsigned short) max((((/* implicit */long long int) max(((((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((-2618663075979900046LL) != (((/* implicit */long long int) ((/* implicit */int) var_7))))))))), ((~(((var_12) ^ (((/* implicit */long long int) 4294967295U))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)133)), (arr_7 [i_0] [i_1 - 1] [i_1 + 2] [i_2])))) + (((/* implicit */int) arr_6 [i_0]))))) ? (((/* implicit */int) min((arr_7 [i_0] [i_0] [i_0] [i_0]), (arr_0 [i_1 + 3])))) : (((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned short) arr_5 [i_1])), (arr_7 [i_0] [i_0] [i_1] [i_2 - 2]))))))))));
                    var_20 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0] [i_2]))))), (((((/* implicit */_Bool) (unsigned short)65527)) ? (-2618663075979900035LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)116))))))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((0U) < (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) >> (((((/* implicit */int) var_4)) - (29010)))))) ? (((/* implicit */long long int) (+(4294967295U)))) : (var_12)));
    var_22 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */int) (unsigned short)22953)) : (((/* implicit */int) (unsigned short)40736)))) >> (((((((/* implicit */_Bool) 2618663075979900045LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)36))) : (438725638U))) - (16U)))))), (max((4294967295U), (3139033637U)))));
}
