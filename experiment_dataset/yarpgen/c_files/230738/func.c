/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230738
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
    var_18 |= ((/* implicit */int) 5355897509626383257ULL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_19 = (+(((int) max((((/* implicit */unsigned long long int) arr_2 [i_0])), (12653006292658585171ULL)))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2]))) : (max((((/* implicit */long long int) var_11)), (var_14)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_4 [i_0] [i_1])), (arr_17 [(signed char)4] [i_2] [i_2] [(_Bool)1] [i_4])))))))) : (((((/* implicit */_Bool) min((arr_2 [i_1]), (var_10)))) ? (((((/* implicit */long long int) arr_10 [i_3] [i_1] [i_4])) - (-6197024945386829567LL))) : (((((/* implicit */_Bool) var_4)) ? (arr_12 [i_0 - 1] [i_1] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1])))))))));
                                var_21 = ((/* implicit */signed char) (-(max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) % (arr_0 [i_3]))), (((/* implicit */unsigned long long int) var_11))))));
                            }
                        } 
                    } 
                } 
                var_22 ^= ((/* implicit */_Bool) ((0ULL) * (((/* implicit */unsigned long long int) min((6520908563648074621LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 3161416034U)) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_0] [i_0] [i_1] [i_0])) : (((/* implicit */int) var_10))))))))));
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (min((((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (6520908563648074621LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) -481876263)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)170))) : (1729113714U)))))) : (((/* implicit */long long int) -1986530824))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) (((-(((var_16) + (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) >= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) : (var_15)))));
    var_25 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_14)));
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        for (int i_6 = 2; i_6 < 8; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                {
                    var_26 = var_15;
                    var_27 -= ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_6] [i_6] [i_6 + 1] [i_6] [i_7])))))));
                }
            } 
        } 
    } 
}
