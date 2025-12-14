/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222214
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
    var_10 -= ((/* implicit */unsigned char) var_1);
    var_11 = var_3;
    var_12 = ((/* implicit */unsigned long long int) var_5);
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (var_3)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 6; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((int) arr_1 [i_0]));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */signed char) max((min((arr_14 [i_4] [i_3 + 2] [i_0] [i_0 + 2] [i_0]), (((/* implicit */long long int) arr_5 [i_0] [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_0] [i_3 - 3] [i_3])) ? (((/* implicit */int) arr_12 [i_3] [i_0 - 1])) : ((-(((/* implicit */int) arr_3 [i_1] [i_3])))))))));
                                var_14 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)27)) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) == (5936233448476150311LL))))));
                                var_15 = ((/* implicit */long long int) arr_12 [i_3 + 1] [i_3 + 1]);
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */long long int) (unsigned char)18);
                                var_16 = var_5;
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((-7666891579397513087LL) ^ (((((/* implicit */_Bool) -4611686018427387904LL)) ? (-5442421609254686249LL) : (6375562926157001998LL))))))));
                    arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((5936233448476150311LL) >= (((/* implicit */long long int) arr_4 [i_0 + 2] [i_0 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1389760956561933466LL)) && (((/* implicit */_Bool) 3703981847U)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1 - 4]))) | (var_3)))))) ? (((((/* implicit */unsigned long long int) ((long long int) (signed char)120))) * (((((/* implicit */_Bool) 2147483634)) ? (0ULL) : (15621167472796917979ULL))))) : (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                }
            } 
        } 
    } 
}
