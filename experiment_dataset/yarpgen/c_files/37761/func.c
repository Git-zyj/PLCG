/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37761
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
    for (long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [9]))) ^ (((((/* implicit */_Bool) ((signed char) var_9))) ? (-5269041086709697467LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_1])))))));
                            var_14 *= ((((/* implicit */_Bool) max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned char) ((signed char) var_3)))))) ? (max((arr_2 [i_1] [14LL] [i_1]), (((/* implicit */unsigned long long int) min((arr_5 [i_2 + 2] [i_2 + 2] [i_0 - 2]), (((/* implicit */int) (unsigned char)0))))))) : (((/* implicit */unsigned long long int) max((5269041086709697443LL), (((/* implicit */long long int) (unsigned char)116))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_4 = 2; i_4 < 16; i_4 += 1) 
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_0 - 2] [i_0 - 2] = ((/* implicit */_Bool) (-(-2LL)));
                                arr_15 [i_1] &= ((/* implicit */int) (~(1967074853156376510ULL)));
                                var_15 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) -1)) + (1183283220U)));
                                arr_16 [(unsigned char)8] [2] [i_2] [i_3] [i_1] [i_0] [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_2] [i_1] [10ULL] [i_4 + 1] [18LL]))) : (1LL)))) && (((/* implicit */_Bool) 16777216U))));
                            }
                        }
                    } 
                } 
                arr_17 [i_0] [i_1] = ((/* implicit */unsigned short) var_4);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) (~(3111684077U)));
}
