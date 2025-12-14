/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45037
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
    var_14 = ((/* implicit */signed char) ((0ULL) >> (((/* implicit */int) ((signed char) var_1)))));
    var_15 |= ((/* implicit */signed char) min((((unsigned long long int) var_10)), (((/* implicit */unsigned long long int) ((unsigned char) ((var_0) & (((/* implicit */int) (unsigned short)0))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((((signed char) var_8)), (var_3)))), (((((/* implicit */_Bool) (unsigned char)93)) ? (-3114408378243758154LL) : (3114408378243758153LL)))));
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_9))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */short) max(((~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)12))) | (5344016144122186221LL))))), (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 1] [i_0]))) ^ (arr_2 [i_1])))));
                }
            } 
        } 
    } 
    var_18 += ((/* implicit */int) ((unsigned int) (_Bool)0));
    var_19 = min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_8))))) : (min((2305843009213693951ULL), (((/* implicit */unsigned long long int) 5344016144122186213LL)))))));
}
