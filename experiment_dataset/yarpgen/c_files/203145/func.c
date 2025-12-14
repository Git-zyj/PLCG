/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203145
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_12 -= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((long long int) var_2))) ? ((~(((/* implicit */int) (unsigned char)120)))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_3] [i_3])) ? (((/* implicit */int) var_1)) : (arr_4 [i_0] [i_0] [i_2] [i_3]))))));
                            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (short)22595))));
                            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) min((((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) >= (3037586881U)))), (var_7)))), ((~(((/* implicit */int) arr_6 [i_0] [i_3] [i_3])))))))));
                            arr_9 [i_1] [i_2] [i_1] [i_0] [i_1] |= ((/* implicit */unsigned int) ((unsigned char) min((((unsigned int) var_11)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))))))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_1] = ((/* implicit */int) var_0);
                arr_11 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((short) max((((/* implicit */unsigned short) (unsigned char)135)), (arr_8 [i_0] [i_1] [i_0] [i_0]))))) >> (((((/* implicit */int) arr_0 [i_0])) - (20515)))));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_4 [i_0] [i_0] [i_1] [i_1])))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0])))))));
            }
        } 
    } 
    var_16 += (unsigned char)121;
    var_17 = var_7;
    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
    var_19 = (unsigned char)99;
}
