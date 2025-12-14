/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196359
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
    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_6)) : (var_18))) > (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
    var_20 = ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [(short)0] &= ((/* implicit */int) min(((+(arr_2 [i_0]))), (min((arr_2 [10U]), (arr_2 [i_0])))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_1] [i_1] [i_1] [i_1] [8] = ((/* implicit */short) max((((/* implicit */int) ((1072693248ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8335905958476056834LL)) ? (1443846730U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)261))))))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((signed char) (unsigned short)249)))))));
                                arr_16 [i_0] [i_1] = ((((/* implicit */_Bool) (~(arr_14 [i_0] [i_1 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_4 - 1]))))) : (((arr_14 [i_1] [7ULL]) ^ (arr_14 [i_4 - 1] [i_2]))));
                                var_21 = ((/* implicit */signed char) var_18);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 += ((/* implicit */short) var_2);
    var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-1160845827078144476LL)))) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32761))) : (3722025249U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35272)))))) * (var_0)));
}
