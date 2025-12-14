/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218202
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
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (8128841167864486872LL)))) ? (((/* implicit */int) ((short) max((-1559760604), (-1559760604))))) : (((/* implicit */int) (_Bool)1))));
                var_12 = ((/* implicit */signed char) ((unsigned int) 1559760603));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_4 = 1; i_4 < 9; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 7; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) max((arr_12 [i_5 + 1] [i_5 + 3] [i_5] [i_5 - 2]), (((arr_15 [i_6] [i_6] [i_6] [i_5 + 1]) >= (arr_15 [i_6] [i_6] [(_Bool)1] [i_5 - 1]))))))));
                                var_14 = ((/* implicit */long long int) min((max((max((arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_10 [i_4 + 1] [i_4 + 1])))), (((/* implicit */unsigned long long int) (-(var_6)))))), (arr_16 [i_2] [i_3] [i_2] [i_5] [i_6] [i_6])));
                                var_15 = ((/* implicit */unsigned int) min((((1559760604) >> (((((((/* implicit */_Bool) -1559760594)) ? (18368063127492076951ULL) : (((/* implicit */unsigned long long int) 3760416353U)))) - (18368063127492076921ULL))))), (((((/* implicit */int) var_2)) + (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_4))))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)181)))))));
                var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_4 [i_2]), (arr_4 [i_2]))))));
            }
        } 
    } 
}
