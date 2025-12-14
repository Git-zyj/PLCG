/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27542
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
    for (unsigned long long int i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_16 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((2975525431191186785ULL) == (((/* implicit */unsigned long long int) 0U))))) % ((~(((/* implicit */int) arr_5 [i_3 + 2] [i_3 + 2] [i_0 + 2]))))));
                            var_17 &= ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_7 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3 - 3])) - (13))))), (((/* implicit */int) arr_7 [i_2] [i_3 - 3] [i_3 - 3] [i_3 + 2] [i_3] [i_3 - 3]))));
                            var_18 += ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_7)))) || (((((/* implicit */_Bool) (unsigned short)9191)) || (((/* implicit */_Bool) arr_1 [i_0 - 4] [i_0 - 3]))))));
                            var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_1])) || (((/* implicit */_Bool) arr_1 [i_1] [i_2])))) ? (((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)50109)) != (((/* implicit */int) var_8))))) : (((/* implicit */int) ((arr_3 [i_0]) == (((/* implicit */int) (unsigned short)9191))))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned short)9189)) + (((/* implicit */int) arr_7 [(unsigned char)13] [i_1] [(unsigned short)3] [12] [i_1] [i_1]))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_12)) % (((/* implicit */int) (unsigned short)55436)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)62)) ? (6272107046025133430ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)189)) - (((/* implicit */int) (unsigned short)1976)))))))) : (((/* implicit */int) ((((/* implicit */int) var_9)) == (((((/* implicit */_Bool) arr_1 [i_0] [5ULL])) ? (((/* implicit */int) (_Bool)1)) : (arr_0 [i_0]))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65290))) & (6ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_1)))) : (((var_15) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))))));
    var_22 = ((/* implicit */signed char) var_12);
}
