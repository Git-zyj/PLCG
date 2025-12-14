/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191158
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_7 [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_4])))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)96)), (arr_8 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_4]))))));
                                arr_15 [9U] [(short)6] [i_2] [i_0] [i_4] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_6)))) ? (((((arr_9 [i_0] [i_0] [i_0] [i_0 + 2] [(short)4]) & (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))))) << (((((/* implicit */int) (unsigned char)96)) - (91))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 15; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 4; i_6 < 14; i_6 += 3) 
                        {
                            {
                                arr_21 [1LL] [i_0] [i_1] [i_0] [11U] = var_1;
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) arr_10 [i_0 + 3] [i_1] [i_2] [i_5 - 1] [i_6 - 4] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_2] [i_5] [i_0])))));
                                var_14 = max((((/* implicit */unsigned long long int) 0U)), (((((((/* implicit */_Bool) (unsigned char)104)) ? (arr_7 [i_1]) : (((/* implicit */unsigned long long int) var_2)))) ^ (arr_14 [i_0] [i_0] [i_2] [(signed char)10] [i_6 + 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) (((+(789120241339585335ULL))) + (((min((15624092199846587001ULL), (((/* implicit */unsigned long long int) var_6)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_12))))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */_Bool) -759349305)) && (((/* implicit */_Bool) var_6)))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)247)), (266338304U)))) : ((((+(789120241339585331ULL))) >> (((((/* implicit */int) var_4)) - (71)))))));
}
