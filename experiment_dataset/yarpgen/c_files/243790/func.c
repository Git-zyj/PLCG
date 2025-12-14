/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243790
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
    var_16 = ((/* implicit */unsigned char) -1440646704);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_3] [i_0])) ? (-1LL) : (((/* implicit */long long int) arr_6 [i_1 + 1] [i_0 + 1] [i_2]))))));
                            arr_9 [i_0] [i_1] [i_1] [i_3] [i_1] [i_3] = ((/* implicit */long long int) 2357137371U);
                            var_18 *= ((/* implicit */signed char) (((+(1720393478))) > (min((((/* implicit */int) var_12)), (2147483647)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    var_19 *= ((/* implicit */signed char) min((((5172858676951548558ULL) / (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0 - 3])))), (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */long long int) var_11)))))));
                    var_20 += ((/* implicit */long long int) min((((unsigned int) 1023U)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1219036071)) ? (1127022602) : (arr_5 [i_0] [i_1 - 1] [i_0]))))));
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            {
                                var_21 ^= ((/* implicit */unsigned int) ((int) ((int) 6537169042502422186LL)));
                                var_22 &= min((max((((((/* implicit */_Bool) 6537169042502422186LL)) ? (-6537169042502422186LL) : (((/* implicit */long long int) arr_11 [i_6])))), (-6537169042502422187LL))), (((/* implicit */long long int) arr_11 [i_0])));
                                var_23 = max((var_2), (((/* implicit */int) ((var_1) < (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 - 1] [i_0] [i_0 + 1] [i_0])))))));
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */unsigned int) var_2)) : (((((/* implicit */_Bool) var_15)) ? (var_6) : (((/* implicit */unsigned int) arr_8 [i_0] [i_0 - 3] [i_1 + 2] [i_0 - 3] [i_1] [i_1 - 1]))))));
                                var_25 = ((/* implicit */short) (-(((int) min((var_3), (var_0))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */short) (+(-6537169042502422186LL)));
}
