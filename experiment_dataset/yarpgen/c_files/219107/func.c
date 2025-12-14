/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219107
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
    for (int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */int) max((((/* implicit */unsigned short) ((short) ((((/* implicit */int) var_7)) << (((((/* implicit */int) arr_1 [i_0])) - (26144))))))), (((unsigned short) var_0))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_11 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19785)))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)19785))))))) <= (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_1)) : (var_0))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [20] [i_3 - 1]))) : (arr_0 [(unsigned char)21])))))));
                            var_12 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)84)) || (((/* implicit */_Bool) 599461522U))))) > (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) == (((/* implicit */int) arr_7 [i_3 + 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_4 = 3; i_4 < 17; i_4 += 2) 
    {
        for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (unsigned char i_6 = 2; i_6 < 17; i_6 += 3) 
            {
                {
                    var_13 = ((/* implicit */int) var_0);
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_5] [i_5])) : (((((/* implicit */int) var_6)) - (var_4)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) arr_8 [i_4 + 2] [i_4 - 1] [(_Bool)1] [i_6 - 1])) : (((/* implicit */int) arr_8 [(unsigned short)10] [i_4 - 2] [i_5] [i_6 - 1]))))) : (((((/* implicit */unsigned long long int) (-(arr_20 [10U])))) | (arr_16 [i_5] [i_6 - 2]))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)42418)))) > ((+(max((((/* implicit */int) (unsigned short)7936)), (var_8)))))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_0)));
}
