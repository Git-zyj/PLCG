/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43045
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_1))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */int) var_13)) * (((/* implicit */int) arr_0 [i_0])))))));
                var_18 = ((/* implicit */signed char) (((-(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_1 [i_0] [i_1])))))) != ((+(((/* implicit */int) var_8))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned short i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_19 = (+(((((/* implicit */_Bool) min((294809091116624990ULL), (((/* implicit */unsigned long long int) 3104423802792617146LL))))) ? (((/* implicit */long long int) (-(arr_6 [i_0] [(unsigned char)11] [i_4])))) : (((1212640951678273454LL) / (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_1]))))))));
                                var_20 = var_3;
                                var_21 = max((-3104423802792617157LL), (((/* implicit */long long int) (-(-1)))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0 - 1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_8 [i_1]);
            }
        } 
    } 
    var_22 = ((/* implicit */int) ((long long int) (_Bool)1));
}
