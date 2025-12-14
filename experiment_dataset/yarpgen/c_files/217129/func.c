/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217129
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((_Bool) 18446744073709551615ULL))))) : (((((/* implicit */int) var_15)) << (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_3)))) + (19)))))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 12980711966862492882ULL)) ? (((/* implicit */unsigned long long int) -4164918456895674955LL)) : (((((/* implicit */_Bool) max((6790273068776980273ULL), (((/* implicit */unsigned long long int) -2616282560560991690LL))))) ? ((((_Bool)1) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))))) : (var_11)))));
    var_20 = ((/* implicit */short) var_10);
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ ((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_11))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [0LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3977398612656159767LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (3812025171261456633ULL)))) ? (((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3 + 1] [i_3 + 2] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_3 [i_4])))) : ((((_Bool)1) ? (2097151ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_10 [i_3 + 2] [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 1] [0LL] [i_3 + 2]))))));
                                var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_3 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 - 1] [i_3 - 2]))) : (arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] [2ULL] [i_3])))) ? (((/* implicit */int) ((signed char) arr_1 [i_0] [i_3 + 1]))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_3 + 1] [i_3 + 2] [i_3] [i_3 + 1])) < (((/* implicit */int) arr_6 [i_3 + 1] [i_3 + 1] [i_3] [i_3 - 2])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    for (unsigned char i_6 = 3; i_6 < 20; i_6 += 1) 
                    {
                        {
                            arr_19 [i_0] [(_Bool)1] [i_5] [i_5] |= ((/* implicit */short) var_0);
                            var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_6 - 2] [i_6 + 1] [i_6 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_5 [i_6 - 2] [i_6 - 3] [i_6 - 1])))) || (((/* implicit */_Bool) arr_6 [i_0] [(signed char)6] [i_5] [i_6]))));
                        }
                    } 
                } 
                arr_20 [(signed char)16] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (68719476735ULL)));
            }
        } 
    } 
}
