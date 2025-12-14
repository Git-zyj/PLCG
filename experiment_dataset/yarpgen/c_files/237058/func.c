/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237058
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
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */short) ((-1796657690) == (((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (arr_4 [i_0]) : (((/* implicit */int) var_0)))) < ((-(((/* implicit */int) arr_1 [i_0])))))))));
                arr_6 [i_1] [i_1] [5] = ((/* implicit */unsigned char) max((max((max((var_16), ((short)-3883))), (((/* implicit */short) ((_Bool) 1796657687))))), (((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) var_6)) : (var_18))) > (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [(unsigned char)16]))))))))));
                var_19 = ((/* implicit */signed char) arr_3 [i_1] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_14 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1796657690)) ? (-816262277) : (((/* implicit */int) var_3)))) | ((~(-816262277)))))) || (((/* implicit */_Bool) max((var_7), (((/* implicit */short) arr_11 [i_2] [i_2 - 2] [(short)5] [i_1])))))));
                            var_20 = (i_1 % 2 == zero) ? (((/* implicit */short) (~((~(((var_12) >> (((arr_13 [i_1] [i_1] [i_2 + 1] [i_3] [i_3] [i_1]) - (564059666103430337LL)))))))))) : (((/* implicit */short) (~((~(((var_12) >> (((((arr_13 [i_1] [i_1] [i_2 + 1] [i_3] [i_3] [i_1]) - (564059666103430337LL))) + (4410169692189514104LL))))))))));
                            arr_15 [i_1] = ((/* implicit */int) (signed char)-100);
                            var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1796657663)) ? (var_11) : (((/* implicit */int) arr_2 [i_2]))))) ? (((((/* implicit */int) var_5)) + (-1796657672))) : (((/* implicit */int) ((short) arr_13 [i_0] [i_3] [i_2] [i_1] [(signed char)16] [i_0])))))) ? (((((/* implicit */int) arr_7 [(_Bool)1] [i_1] [i_2] [i_2 + 2])) + (((/* implicit */int) arr_7 [i_0] [i_1] [7] [i_2 - 3])))) : ((((-(((/* implicit */int) var_2)))) - (((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (arr_10 [(signed char)16] [i_1] [i_0] [(signed char)4]) : (((/* implicit */int) var_5))))))));
                            var_22 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_2 - 2])) % (((/* implicit */int) arr_9 [i_2 - 1] [i_2 - 3] [i_2 + 1] [i_2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                arr_21 [12] [(unsigned char)8] &= ((/* implicit */short) max((((((/* implicit */_Bool) arr_19 [i_4] [i_5])) ? ((+(((/* implicit */int) var_14)))) : (max((((/* implicit */int) arr_19 [i_4] [i_5])), (var_15))))), ((~((-(((/* implicit */int) var_5))))))));
                var_23 = ((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_4]);
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((((/* implicit */long long int) -1796657672)) < (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) && (((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_19 [i_4] [i_5]))))))))))));
            }
        } 
    } 
    var_25 ^= ((/* implicit */long long int) min((((short) ((var_15) / (((/* implicit */int) var_16))))), (((/* implicit */short) min(((!(var_17))), (((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_15)))))))));
    var_26 = ((/* implicit */int) max((var_26), (-1796657700)));
}
