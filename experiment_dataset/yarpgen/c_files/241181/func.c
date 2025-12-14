/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241181
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
    var_13 = ((/* implicit */_Bool) (unsigned short)42347);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2 - 1] = ((/* implicit */short) ((((((/* implicit */int) max((var_10), (((/* implicit */unsigned char) (_Bool)1))))) == (((/* implicit */int) ((0ULL) <= (((/* implicit */unsigned long long int) var_3))))))) ? (((/* implicit */int) min(((_Bool)0), ((_Bool)1)))) : (min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) arr_7 [i_2 - 1])) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1))))))));
                    var_14 = ((/* implicit */unsigned int) var_8);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_1] &= ((/* implicit */unsigned int) var_2);
                                var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 9205357638345293824LL)) ? (11355107568097085838ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-419))))) - (max((((((/* implicit */_Bool) (signed char)127)) ? (var_2) : (((/* implicit */unsigned long long int) 4294967295U)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (4294967295U))))))));
                            }
                        } 
                    } 
                    arr_18 [i_1] = max(((~(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) var_9)))));
                    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_5 [i_2 - 1] [i_2 - 1] [i_0]), (((/* implicit */short) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1])))) : (((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((unsigned int) (short)(-32767 - 1))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_12)) : (2862083919536024586LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) var_12)), (5328085034464975326LL)))))) ? (max((((var_0) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
}
