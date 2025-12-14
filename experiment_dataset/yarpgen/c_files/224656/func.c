/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224656
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
    for (unsigned char i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((unsigned int) arr_2 [i_1 - 1] [i_1 - 1]))) : (((((/* implicit */_Bool) max((3246323612495519923LL), (((/* implicit */long long int) (signed char)47))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -632033368)) && (((/* implicit */_Bool) -3246323612495519900LL)))))) : (-3246323612495519923LL)))));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -3246323612495519939LL)) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_3] [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_8 [(signed char)7] [i_1] [i_3] [i_1 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((1438260018), (((/* implicit */int) (_Bool)1)))))))));
                            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((_Bool) ((int) (signed char)-64))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */_Bool) ((arr_4 [i_1]) ? (462475443) : (((/* implicit */int) var_0))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((((((long long int) 1746207597)) % (((/* implicit */long long int) 8380416U)))), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) 1174950790)) ? (-1532020837) : (((/* implicit */int) (unsigned char)177))))))));
}
