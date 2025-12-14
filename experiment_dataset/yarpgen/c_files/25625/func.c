/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25625
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
    var_12 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_2)))) << (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (signed char)0)))))))) ? (((/* implicit */int) ((max((((/* implicit */long long int) var_5)), (6738656047453471082LL))) < (3945585788909679825LL)))) : (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))) % (((var_0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) var_1))) / (-4604862724566029485LL))), (((-3945585788909679826LL) + (((/* implicit */long long int) 4070897180U))))))) : (((unsigned long long int) max((((/* implicit */short) arr_1 [i_1])), (arr_4 [i_0] [i_1] [10ULL] [10U]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [(_Bool)1] [i_2] [i_1] &= ((/* implicit */signed char) (_Bool)1);
                                arr_14 [i_2] [i_1] [0LL] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (max((arr_6 [(unsigned char)4] [i_4] [10U] [10U] [i_1] [i_0]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) ((unsigned short) (_Bool)0))) : (((/* implicit */int) arr_11 [i_4] [12LL] [i_2] [12LL] [i_0])))))));
                                arr_15 [i_0] [(short)12] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
