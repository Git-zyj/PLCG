/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30448
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
    var_11 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)18895)) <= (var_5))))) <= (max((((unsigned int) (unsigned short)47307)), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_1)), (var_10))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((((((265010197) << (((4U) - (3U))))) != (((/* implicit */int) ((((/* implicit */_Bool) -1244274442834449416LL)) && (((/* implicit */_Bool) var_0))))))) ? (min((((((/* implicit */_Bool) (signed char)0)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) 1520526477U)))), (((/* implicit */unsigned long long int) ((_Bool) (short)-18886))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min(((signed char)0), (((/* implicit */signed char) (_Bool)1))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (arr_0 [18ULL]))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */short) min(((unsigned char)64), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (-1890750693269856566LL)))) || (((((/* implicit */int) var_10)) < (265010197))))))));
                            var_14 = ((/* implicit */signed char) 4079255748U);
                            var_15 ^= ((/* implicit */long long int) min((((/* implicit */int) ((-139309647) == (((/* implicit */int) (short)4115))))), ((-(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_0))))))));
                            var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) (short)-18895)) ? (min((arr_6 [6LL] [i_1] [(signed char)6] [(signed char)16]), (((/* implicit */unsigned int) (short)-18895)))) : (((((/* implicit */unsigned int) -265010191)) ^ (1657799639U))))) != (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_3] [i_2] [i_1] [i_0])) > (((/* implicit */int) arr_9 [(signed char)7] [17ULL] [(_Bool)1] [(short)18])))))) : (((((unsigned int) 1913777832U)) ^ (0U)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) ((((0LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50829))))) != (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
}
