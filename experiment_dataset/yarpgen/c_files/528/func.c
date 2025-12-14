/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/528
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_14 -= ((/* implicit */signed char) arr_9 [i_0]);
                                var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_15 [i_4] [i_3] [i_2] [i_0] [i_0])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_3] [i_4])) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_0] [i_4])))) == (((/* implicit */int) arr_15 [i_0] [i_1] [2] [0LL] [i_4]))));
                                arr_16 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */int) max((arr_3 [i_3] [(unsigned short)2]), (((/* implicit */unsigned char) (signed char)22))))) % (((/* implicit */int) ((arr_11 [i_0] [i_1] [i_2] [i_2]) || (((/* implicit */_Bool) (signed char)-73)))))));
                            }
                        } 
                    } 
                } 
                var_16 += ((/* implicit */signed char) max((((unsigned int) (signed char)22)), (((/* implicit */unsigned int) min((arr_3 [i_0] [i_1]), (arr_3 [i_1] [i_0]))))));
                var_17 ^= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (arr_0 [i_0]))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)0)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -185705195))))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [(signed char)6] [i_1])) : (((/* implicit */int) (unsigned short)18644))))))));
                var_18 = ((/* implicit */long long int) ((signed char) max((((/* implicit */unsigned short) (signed char)-50)), (arr_13 [8] [i_1] [i_1] [i_1] [i_1]))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((var_6) == (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (var_8)))))) : (((((/* implicit */_Bool) max((4468851531520727754LL), (((/* implicit */long long int) 198307198U))))) ? (((((/* implicit */int) (unsigned short)9265)) % (((/* implicit */int) var_12)))) : (((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_13))))))));
    var_20 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)-51))));
}
