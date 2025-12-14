/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/493
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = (((_Bool)1) ? (((var_6) << (((((((/* implicit */int) ((signed char) var_10))) + (126))) - (46))))) : (var_6));
                var_18 = ((/* implicit */int) (short)3971);
                var_19 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_3)))) * (((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) arr_2 [(signed char)6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_2 [13]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_2 [1LL]))))))))));
                var_20 &= ((/* implicit */short) ((max((((/* implicit */long long int) (unsigned short)27712)), (var_11))) << (((/* implicit */int) ((arr_2 [i_1]) <= (((/* implicit */unsigned long long int) max((arr_1 [(_Bool)1]), (((/* implicit */long long int) var_12))))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_12 [14] [(_Bool)1] [i_1] [3ULL] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((arr_9 [12] [i_1] [5] [(unsigned char)10] [i_1] [14ULL]), (((/* implicit */unsigned int) arr_10 [i_1]))))))) ? (max(((~(((/* implicit */int) var_4)))), ((~(((/* implicit */int) var_0)))))) : ((+(((/* implicit */int) (short)-20211))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_3 + 1] [i_1] [(unsigned char)15]))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((arr_6 [i_1] [i_1]) % (-1237624483307308059LL))) : (((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */long long int) arr_4 [8U] [i_1] [(unsigned short)13])))))) : (((/* implicit */long long int) arr_4 [8U] [i_1] [(_Bool)1]))));
                            var_22 = ((/* implicit */unsigned int) ((signed char) ((max((((/* implicit */long long int) arr_0 [12] [(short)14])), (var_11))) / ((-(arr_6 [i_1] [(signed char)14]))))));
                            var_23 &= ((/* implicit */unsigned int) min((((short) var_11)), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) || (((/* implicit */_Bool) arr_0 [i_2] [i_3 + 2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 &= ((/* implicit */unsigned short) var_14);
    var_25 = ((/* implicit */unsigned int) var_16);
    var_26 = ((/* implicit */signed char) (~(((/* implicit */int) var_8))));
}
