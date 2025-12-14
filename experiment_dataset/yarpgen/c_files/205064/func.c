/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205064
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((int) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_6)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((arr_4 [i_0] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) ? (-2074965489) : ((+(arr_5 [i_0] [i_2 + 3]))))) == (((((((/* implicit */unsigned int) -1)) >= (arr_3 [i_0] [i_0]))) ? (((/* implicit */int) ((arr_7 [i_0] [i_1] [i_1] [i_2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) : ((-(-4)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), ((-(((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21))) <= (arr_3 [i_3 - 1] [i_4]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)111)))))) : (arr_7 [i_1] [i_2] [i_1] [i_0])))))));
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (signed char)0))));
                                var_16 = min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) < (arr_15 [i_3 + 2] [i_3] [i_2 - 2] [i_3 - 1] [i_2 - 2] [i_1] [i_1])))), (arr_14 [i_0] [i_1] [i_0] [i_4]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
