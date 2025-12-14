/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45323
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) var_1);
                var_19 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16958549652524677555ULL)) ? (1950407964U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))), ((~(18446744073709551615ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)38))) : (((((var_11) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */unsigned long long int) 1073741823)) : (((0ULL) & (((/* implicit */unsigned long long int) 1950407991U)))))));
                arr_4 [(unsigned char)4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [12U] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) var_5)) ? (1950407957U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [6ULL] [i_1] [i_1]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) 4595995214676913771ULL);
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 21; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 1; i_5 < 22; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-12494)) <= (((/* implicit */int) (signed char)127))));
                            arr_16 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_13 [i_5 - 1] [i_4 - 1] [i_2 - 1] [i_2 - 1]) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) arr_13 [i_5 - 1] [i_2] [i_2 - 1] [i_2 - 1]))))) ? (((((/* implicit */_Bool) var_13)) ? (arr_12 [i_4] [i_3] [i_4]) : (((/* implicit */long long int) 3148856805U)))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_13 [i_5 - 1] [i_4 - 1] [i_2] [i_2 - 1]), (arr_13 [i_5 - 1] [i_4 - 1] [i_2 - 1] [i_2 - 1])))))));
                            arr_17 [i_5] [i_3] [i_5] [i_3] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (short)12516)), (var_10))))))) % (((int) max((18446744073709551614ULL), (var_11))))));
                            var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_11 [i_2 + 1] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (1950407964U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)41)), (var_3))))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_7)))))))));
                        }
                    } 
                } 
                var_23 = ((min(((-(var_17))), (((/* implicit */unsigned long long int) max((-912350439378485417LL), (((/* implicit */long long int) arr_6 [i_2] [i_3]))))))) / (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (var_0))) * (((/* implicit */unsigned long long int) max((2344559338U), (((/* implicit */unsigned int) (signed char)-45))))))));
                var_24 = ((/* implicit */signed char) 18446744073709551613ULL);
            }
        } 
    } 
}
