/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44244
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((-281474976710656LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-92))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) (signed char)-92)) + (114))))))))))));
                                arr_13 [i_0 - 1] [i_1] [i_2] [i_0 - 1] [i_4] = ((/* implicit */unsigned long long int) var_4);
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */long long int) ((unsigned char) ((2493508899509927737ULL) > (((/* implicit */unsigned long long int) min((70368743129088LL), (-5535216562606707652LL)))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((arr_3 [i_0 - 3]), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 + 2] [i_0])))), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) (unsigned short)52668))));
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_0 - 1] [i_5] [i_5] [i_5]))))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_15 [(unsigned char)6] [i_1] [i_2 - 1] [i_5] [i_6] [i_6])) ? (arr_4 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_2] [i_5] [i_5] [i_6])))))))))));
                                var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)49152)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
                                arr_19 [i_0] [i_0] [i_2] = ((/* implicit */long long int) min(((-(((/* implicit */int) (signed char)-92)))), (((((/* implicit */_Bool) arr_11 [i_2 - 1] [(unsigned short)13] [i_2 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) 70368743129082LL);
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) 70368743129085LL))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21005))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)175)))))) | (((8664381699419310779ULL) ^ (((/* implicit */unsigned long long int) var_6))))))));
}
