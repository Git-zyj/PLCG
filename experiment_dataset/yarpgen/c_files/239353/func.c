/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239353
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_17 |= ((signed char) ((((/* implicit */int) ((unsigned char) var_15))) / (((((/* implicit */_Bool) arr_3 [i_0] [(_Bool)1] [7U])) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) (unsigned char)68))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [9U] [i_0] [i_2] [i_3] [(unsigned char)9] [i_4] = ((/* implicit */short) (-(9665468720747870729ULL)));
                                arr_13 [i_0] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_11 [5LL] [i_3] [i_1])) ? (((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (8781275352961680902ULL))) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4])))));
                                arr_14 [i_0] [i_0] [i_1] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */long long int) ((_Bool) arr_0 [i_0] [i_0]));
                                arr_15 [2U] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) (signed char)80)) && (((/* implicit */_Bool) 9665468720747870729ULL))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)68)) || (((/* implicit */_Bool) (signed char)-1))))), (((((/* implicit */_Bool) (unsigned char)58)) ? (arr_10 [(signed char)6] [(signed char)2] [i_0] [i_1] [i_1] [i_1] [6LL]) : (-4519482147797421435LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 3212216436U)))))))) : (arr_3 [i_0] [i_1] [i_0])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            {
                arr_24 [i_6] = ((/* implicit */short) ((((8781275352961680887ULL) < (16579625298145492508ULL))) ? (((((/* implicit */int) ((unsigned char) (short)23780))) << (((((unsigned int) (unsigned char)44)) - (28U))))) : ((+(((/* implicit */int) ((unsigned char) var_11)))))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_23 [i_5]), (((/* implicit */short) var_15))))) << (((((/* implicit */int) var_2)) - (96)))))) : (((arr_20 [i_5]) << (((var_16) + (461278636088519328LL))))))))));
                var_19 = ((/* implicit */unsigned int) max((max((arr_21 [i_5] [i_5] [i_6]), (((/* implicit */unsigned long long int) arr_17 [(signed char)6])))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_5 [i_5] [i_6])), (var_3))))));
                var_20 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5] [i_6] [i_5])) ? (((/* implicit */int) arr_11 [(short)9] [i_6] [i_5])) : (((/* implicit */int) arr_11 [i_5] [i_5] [i_5])))))));
            }
        } 
    } 
}
