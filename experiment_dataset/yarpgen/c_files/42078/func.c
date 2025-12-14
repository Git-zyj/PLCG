/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42078
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_3 [i_1] [i_1] [i_1]))));
                var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) var_15))));
                var_20 = ((/* implicit */unsigned char) var_9);
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_0))))) : (var_3)));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        {
                            arr_19 [(signed char)13] [i_3] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_0)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (arr_18 [i_2] [i_3] [(unsigned short)17] [i_5] [i_5] [2LL])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [1U] [i_4 + 1]))))) : (((((/* implicit */unsigned long long int) min((arr_10 [i_2]), (((/* implicit */unsigned int) arr_7 [i_5]))))) * (((((/* implicit */_Bool) arr_10 [6ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_10)))))));
                            var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)7)) && (((/* implicit */_Bool) 1910336339)))))) == (((((/* implicit */_Bool) min((18446744073709551589ULL), (((/* implicit */unsigned long long int) arr_16 [i_2] [i_4]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_2] [(unsigned short)21])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234))) : (var_2)))) : (0ULL)))));
                        }
                    } 
                } 
                var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 139611588448485376ULL))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237))) : (var_11)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((arr_17 [i_3] [i_3] [i_3] [i_2] [i_3] [i_3]) > (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))));
            }
        } 
    } 
}
