/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4161
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
    var_10 = ((/* implicit */long long int) (+(((int) ((((/* implicit */_Bool) var_9)) ? (2970356667703580769ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned short) (~(-559344535207057582LL)));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */unsigned int) (+(var_8)));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [7LL] [i_3])))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_4 [i_0])), (var_7)))) : (max((var_5), (((/* implicit */long long int) arr_4 [4ULL]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 559344535207057587LL)))))) : (559344535207057574LL)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
    var_13 &= ((((((/* implicit */_Bool) var_4)) ? (min((2935158550869720237ULL), (((/* implicit */unsigned long long int) 907331019U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1700)) ? (2557850135U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7495)))))))) % (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min(((short)-7507), (((/* implicit */short) (signed char)-49)))))) % (((((/* implicit */_Bool) (signed char)-114)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)109)))))))));
}
