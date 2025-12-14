/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235477
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2 - 1]) * (arr_8 [i_0] [i_0] [i_0] [i_1 + 1] [i_0] [i_0])))), ((~(8451919828290006587LL)))));
                            arr_11 [i_0] [i_0] [i_1 - 1] [i_2] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))), ((-(439067790U)))));
                            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))))));
                            arr_13 [i_0] [i_1 - 1] [i_2 - 1] [i_3] = ((/* implicit */unsigned long long int) (-(-7248658109899523962LL)));
                        }
                    } 
                } 
                var_10 = ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) var_2)) ? (9561993838199848495ULL) : (((/* implicit */unsigned long long int) 4912702052150302784LL)))) : (((/* implicit */unsigned long long int) max((-4912702052150302772LL), (arr_3 [i_0] [i_0]))))))) ? (((/* implicit */long long int) (-(arr_8 [i_1 + 1] [i_0] [i_1 - 1] [i_0] [i_0] [i_0])))) : (-9066721879861427109LL));
                arr_14 [i_0] [i_0] [i_1 + 1] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) min((var_2), ((unsigned short)15)))))), ((+(((/* implicit */int) ((-7248658109899523968LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned short) var_0);
}
