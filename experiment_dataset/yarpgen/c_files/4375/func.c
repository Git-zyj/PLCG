/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4375
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) ((int) var_9))) ? (max((var_0), (((/* implicit */long long int) arr_4 [i_0] [i_1])))) : (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))))) ? (max((2289584205U), (((/* implicit */unsigned int) 199641518)))) : (((unsigned int) 2005383090U)))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0])), ((~(((/* implicit */int) arr_2 [i_0]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) var_10))))) ? (((((/* implicit */_Bool) 199641518)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (573114177U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)249), ((unsigned char)7)))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)249)), (2005383090U)))) ? (((((/* implicit */_Bool) var_13)) ? (1493891801334230616LL) : (((/* implicit */long long int) 2044U)))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_0])))))));
                var_14 = ((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */int) arr_2 [i_0])), ((-(((/* implicit */int) var_3)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) (signed char)(-127 - 1));
    var_16 = ((/* implicit */signed char) min((var_0), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(1161855981U)))) && (((/* implicit */_Bool) ((unsigned char) var_13))))))));
    /* LoopNest 2 */
    for (signed char i_2 = 1; i_2 < 17; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned char i_5 = 1; i_5 < 16; i_5 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) arr_18 [i_2 + 2] [i_2] [i_4] [i_5 + 1]);
                            var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_5 + 3])) ? (arr_8 [i_5 + 1]) : (arr_8 [i_5 - 1])))) - (min((arr_7 [i_5 - 1]), (arr_7 [i_5 - 1])))));
                            arr_19 [i_2 - 1] [i_2] [i_4] [i_5] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) -962191757))))))));
                            arr_20 [i_2] [i_2 + 1] [i_5] [i_5] [i_4] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_18 [i_5] [i_2] [i_2] [i_2 + 2]))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_17 [i_2] [i_2 + 2] [i_2 + 1] [i_3] [i_5 + 3] [i_2])) ? (((/* implicit */int) arr_17 [i_2] [i_3] [i_4] [i_4] [i_5 - 1] [i_5 + 3])) : (((/* implicit */int) arr_16 [i_2]))))))) : ((-(arr_7 [i_2 - 1])))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [i_3]))));
            }
        } 
    } 
}
