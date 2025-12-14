/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47532
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
    var_15 = ((/* implicit */int) var_14);
    var_16 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)114))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1)))))) : (max((var_7), (((/* implicit */long long int) (signed char)-6)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_17 -= ((/* implicit */int) arr_1 [i_0]);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_18 = ((((/* implicit */_Bool) max((arr_6 [(short)10] [i_3 + 1] [i_2] [i_3]), (arr_6 [i_0] [i_3 + 1] [i_2] [i_3 - 1])))) ? (((/* implicit */int) ((short) arr_7 [i_0] [i_3 - 1] [i_2] [i_0]))) : (((/* implicit */int) ((unsigned char) arr_6 [i_1] [i_3 - 3] [(signed char)10] [i_3]))));
                                var_19 += ((/* implicit */unsigned short) var_5);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (_Bool)1))));
}
