/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2862
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_4] [20] [i_2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) 584235745)) : (52696307U)));
                                var_12 = ((/* implicit */short) max((max((((/* implicit */long long int) 2258337170U)), (max((((/* implicit */long long int) 4242270988U)), (-5397031596021942486LL))))), (((/* implicit */long long int) max((var_4), (((/* implicit */short) arr_8 [i_0] [i_1 - 1] [i_1 + 3] [i_1 + 1])))))));
                                var_13 = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((-1138204715) - (((/* implicit */int) var_6))))) / (((((/* implicit */unsigned int) arr_1 [i_4] [i_0])) % (4242270989U))))), ((-(((((/* implicit */_Bool) 3968846589U)) ? (326120689U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */long long int) max((((arr_4 [i_0] [i_0] [i_3]) | (((/* implicit */int) var_10)))), (((/* implicit */int) max(((unsigned short)58530), (((/* implicit */unsigned short) arr_6 [i_0] [i_0])))))))) ^ (((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((4242270976U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)87)))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_2 [i_0])))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [5] [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)2)))))))) < ((-(((/* implicit */int) var_7)))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) max((326120685U), ((~(1202940395U))))))));
    var_16 &= ((/* implicit */unsigned char) max((((/* implicit */long long int) 96)), (893856571228170072LL)));
}
