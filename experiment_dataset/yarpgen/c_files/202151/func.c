/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202151
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
    var_11 &= ((/* implicit */_Bool) (~(10692640328634609211ULL)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_12 += max((((((/* implicit */_Bool) arr_3 [13U] [i_0])) ? (min((((/* implicit */int) arr_2 [i_0] [i_1])), (var_2))) : (((/* implicit */int) (signed char)-70)))), ((-((+(((/* implicit */int) (unsigned short)27776)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27776)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))))) ? (((4276638997U) >> (((((/* implicit */int) (unsigned short)37760)) - (37760))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37759)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_2)), (521018099U)))) : (min((((/* implicit */unsigned long long int) (unsigned short)27777)), (((7754103745074942405ULL) - (((/* implicit */unsigned long long int) 268427264))))))));
                                arr_13 [i_0] [i_1] [i_2] [(signed char)20] [i_4] = var_10;
                                var_14 = ((/* implicit */int) (-(min((-3938086130159185304LL), (((/* implicit */long long int) -1))))));
                            }
                        } 
                    } 
                    arr_14 [i_2] [i_2] [i_2] [i_2] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 7265774729418217256LL)) ? (max((var_2), (((/* implicit */int) var_9)))) : (arr_6 [(unsigned short)0] [i_1] [i_1]))) ^ (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)27776))))));
                    var_15 = ((/* implicit */_Bool) min((max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)37748)) == (((/* implicit */int) arr_12 [i_2] [i_0] [i_1] [i_0] [15U]))))), (((((/* implicit */_Bool) 1954791160)) ? (var_10) : (-4652622002867348602LL))))), (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) 1100467592))))), (8))))));
                }
            } 
        } 
    } 
}
