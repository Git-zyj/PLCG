/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211752
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
    var_11 = ((/* implicit */_Bool) var_2);
    var_12 = ((/* implicit */_Bool) max((var_2), (max(((~(18446744073709551612ULL))), (((/* implicit */unsigned long long int) (unsigned char)32))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) var_0)), (4009057207U)))))) ? (((/* implicit */long long int) 336069314)) : (((((((-5358045931508253297LL) + (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [(unsigned short)8] [i_0]))))) + (9223372036854775807LL))) >> (((/* implicit */int) var_7))))));
                            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) 336069323))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)1578))))) + (((((/* implicit */_Bool) -1671362581)) ? (((/* implicit */unsigned long long int) 336069316)) : (7581662033189464593ULL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 + 1])) ? (arr_8 [i_0 + 1]) : (((/* implicit */long long int) -336069316)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(17583596109824LL)))) ? (((((/* implicit */int) var_0)) >> (((-1LL) + (8LL))))) : (((/* implicit */int) var_3))))) || (((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)205))) ^ (3010611904635747758ULL))), (((/* implicit */unsigned long long int) ((int) 2703777877669921906LL))))))));
    var_16 = ((/* implicit */_Bool) max((((/* implicit */int) (((!(((/* implicit */_Bool) 3492880773U)))) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)11566)))))))), ((-((-(336069316)))))));
}
