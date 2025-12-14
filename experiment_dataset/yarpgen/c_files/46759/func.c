/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46759
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
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 12; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_13 [i_1] [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_0] [i_1] [i_0 - 1]);
                            arr_14 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) (+(5264384307851331262LL))));
                            arr_15 [i_0] [i_1] [i_0] [i_0 - 1] [i_1] = ((/* implicit */int) (((~(7270289947059357982ULL))) < (((/* implicit */unsigned long long int) 4611686018427387648LL))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 1) 
                {
                    for (long long int i_5 = 3; i_5 < 12; i_5 += 3) 
                    {
                        for (long long int i_6 = 3; i_6 < 11; i_6 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) ((unsigned int) 4086619348U));
                                var_13 ^= ((/* implicit */unsigned long long int) (-(var_11)));
                            }
                        } 
                    } 
                } 
                var_14 = ((((/* implicit */_Bool) 5734648974928630852ULL)) ? (-426782135675456572LL) : (-5264384307851331262LL));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_7 = 2; i_7 < 15; i_7 += 4) 
    {
        for (long long int i_8 = 1; i_8 < 13; i_8 += 4) 
        {
            for (int i_9 = 1; i_9 < 14; i_9 += 4) 
            {
                {
                    var_15 = ((/* implicit */long long int) var_11);
                    var_16 = ((/* implicit */unsigned int) arr_22 [i_7]);
                }
            } 
        } 
    } 
}
