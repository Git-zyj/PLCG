/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240027
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
        for (short i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] |= min((((/* implicit */unsigned long long int) ((unsigned char) (short)0))), (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 4]))) - (var_10)))) / (((unsigned long long int) var_5)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((min((((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL))))), (arr_4 [i_1] [i_1 - 4] [i_3 - 2]))) * (((unsigned long long int) arr_8 [i_0] [(unsigned short)9] [i_1 - 2] [i_1 + 1])));
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6799925089368397101LL)) ? (-6799925089368397101LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [(_Bool)1] [i_2] [i_2] [i_2] [i_2] [i_2])))))) ? (((/* implicit */int) (short)32764)) : (((/* implicit */int) (unsigned char)127))))) ? (min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)82))) == (6799925089368397100LL)))), ((-(arr_9 [i_0] [i_0]))))) : ((-(((/* implicit */int) (short)20)))))))));
                        }
                    } 
                } 
                var_20 |= ((/* implicit */unsigned short) 0ULL);
                arr_13 [i_0] [i_0] = ((/* implicit */long long int) ((18446744073709551599ULL) * (((((/* implicit */unsigned long long int) arr_9 [i_1 + 1] [i_1 + 1])) ^ (min((((/* implicit */unsigned long long int) arr_10 [i_0] [i_1 - 3] [i_1] [8LL] [9ULL] [i_1])), (18446744073709551599ULL)))))));
            }
        } 
    } 
    var_21 |= ((/* implicit */int) ((((max((((/* implicit */unsigned long long int) var_3)), (var_7))) == (((/* implicit */unsigned long long int) (-(var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)70))) : ((-(((((/* implicit */unsigned long long int) -1158799054)) - (9234625182193123895ULL)))))));
    var_22 = ((/* implicit */_Bool) var_18);
    var_23 = var_7;
}
