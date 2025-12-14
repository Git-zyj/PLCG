/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234475
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (max((min((min((((/* implicit */unsigned long long int) var_8)), (9605385761158175390ULL))), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) var_8))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) arr_4 [i_0] [i_1]);
                var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_18 *= ((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_0 - 1]);
                            var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) var_0)) ? (arr_3 [i_0] [i_2] [i_1]) : (3464290645U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [(signed char)7]))))) || (((/* implicit */_Bool) arr_4 [i_0] [i_0 - 2])))))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) (unsigned char)18))))), ((~(arr_9 [i_0 + 1] [i_2] [i_2] [i_1] [i_0 - 3] [i_0 + 1]))))));
                            var_20 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)20), (var_4))))) + (arr_6 [i_1]))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3719039178U))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))));
    var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 1695098648755231705ULL)) ? (((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) var_6))))) : (((/* implicit */int) var_11))))));
}
