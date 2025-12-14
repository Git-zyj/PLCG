/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195368
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
    var_13 = ((/* implicit */signed char) (~(min((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))), (((((/* implicit */int) var_12)) * (((/* implicit */int) var_7))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((long long int) ((((/* implicit */_Bool) arr_5 [i_1] [0LL] [0LL] [i_0])) ? (arr_6 [i_0]) : (((/* implicit */unsigned int) arr_5 [i_0] [i_1 + 2] [i_2] [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_1] [i_4 + 1] [i_4 + 1] [i_3] [i_0] [i_3 + 1]))));
                                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) -1078655408)) ? (-1078655399) : (((/* implicit */int) (unsigned char)66)))))) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_9 [i_0] [i_1] [(unsigned char)6] [i_2] [i_0] [i_4])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_2])))))))));
                                arr_13 [9ULL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(-178553418)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_2] [i_2] [i_2] [i_2]))) <= (9223372036854775807LL)))) : ((+(((/* implicit */int) arr_2 [(short)14])))))) << (((((1078655390) >> (((-2894039517945025388LL) + (2894039517945025394LL))))) % (((/* implicit */int) ((signed char) arr_5 [i_0] [i_1] [i_0] [i_1])))))));
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) 9223372036854775807LL)))) + ((((+(8128LL))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_3 + 2])) : (((/* implicit */int) arr_9 [i_4] [i_0] [(unsigned short)4] [i_1] [i_0] [i_0])))))))));
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned char)224)))) - (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 + 2])) < (((/* implicit */int) arr_4 [i_0] [(unsigned char)4] [i_1 + 1] [i_4])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_8);
}
