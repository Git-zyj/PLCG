/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28585
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_0] [(_Bool)1])) >= (arr_1 [i_0] [i_1]))))));
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_14 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)151)) ? (-1338933599) : (((/* implicit */int) (unsigned short)65532))));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_4] [i_3 - 2] [i_2 - 2])) << (((((/* implicit */int) arr_5 [i_1] [i_3 - 2] [i_2 - 2])) - (52723)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [i_0] [i_3 - 2] [i_2 - 2]), (arr_5 [i_0] [i_3 - 2] [i_2 - 2]))))) : (((var_6) >> (((((/* implicit */int) var_11)) - (808)))))));
                                var_16 = ((/* implicit */unsigned short) ((((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_0])) : (var_8)))) > (((/* implicit */unsigned int) ((/* implicit */int) ((short) -1LL))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [(unsigned char)6] [i_1] [i_1])), (max((var_3), (((/* implicit */unsigned long long int) 0U)))))) << (((/* implicit */int) (!(((/* implicit */_Bool) min((var_9), (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_1])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_2))))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) 18446744073709551600ULL)) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_10))))))));
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) var_4)))))), (min((((/* implicit */unsigned short) ((var_7) == (((/* implicit */unsigned int) var_9))))), (min((((/* implicit */unsigned short) var_11)), ((unsigned short)14058)))))));
    var_20 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)0)), (var_10)))), (((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51465)))))))));
}
