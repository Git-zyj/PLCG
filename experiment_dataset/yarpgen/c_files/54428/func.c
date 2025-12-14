/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54428
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
    var_19 = ((/* implicit */unsigned int) min((max((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))), (min((var_5), (var_9))))), (max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (short)24996))))))));
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) ((32767U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232))))))) : (((var_13) + (((/* implicit */long long int) ((/* implicit */int) var_12)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)50095)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)15440)))) > (max((((/* implicit */int) (short)-20)), (2147483647))))))) : (((((/* implicit */_Bool) ((var_18) ? (var_5) : (((/* implicit */int) (signed char)59))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (2147483646) : (((/* implicit */int) (short)25893))))) : (min((((/* implicit */unsigned int) var_2)), (var_16))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */short) ((arr_1 [i_0] [i_0]) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) % (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) == (var_10))))) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50095)))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-97)) && (var_12)))), (((arr_2 [i_0] [i_0] [i_1]) & (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)-119))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (14796529547067853029ULL)))) ? (((/* implicit */int) (short)0)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-13619)) : (((/* implicit */int) (short)-14))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                {
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_3] [i_2]))))))))));
                    var_24 = ((/* implicit */unsigned int) var_5);
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)23)) : (((/* implicit */int) (signed char)-77))))) ? (((/* implicit */int) arr_11 [i_3] [i_3] [i_3] [i_3])) : ((-(((/* implicit */int) var_6))))))) ? (max((((/* implicit */int) ((((/* implicit */int) arr_0 [i_2])) <= (((/* implicit */int) arr_0 [i_2]))))), ((~(((/* implicit */int) var_4)))))) : (((((/* implicit */int) arr_3 [i_2])) >> (((((/* implicit */_Bool) (short)25893)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49075))))))))))));
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(2147483647)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((var_0), (var_0)))) : ((+(-318543710)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_2] [i_2])), (var_16)))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (8989607068696576LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_3] [i_3] [i_4])) ? (((/* implicit */int) var_2)) : (var_15))))))));
                }
            } 
        } 
    } 
}
