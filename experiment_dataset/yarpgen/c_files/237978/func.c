/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237978
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
    var_17 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_0] = ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19103))) <= (7268297009821378292ULL)))) * (((/* implicit */int) ((((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) 9223372036854775803LL)))) || (((/* implicit */_Bool) (+(2845718107550204536LL))))))));
                var_18 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))))) & (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (1823211679U)))))) & (((((/* implicit */long long int) (~(((/* implicit */int) var_4))))) ^ (((arr_1 [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_10 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */signed char) 4151462366795877011ULL);
                            var_19 = ((((/* implicit */_Bool) min((((2845718107550204536LL) >> (((var_0) - (18195525766956291606ULL))))), (min((((/* implicit */long long int) arr_2 [i_0] [i_3] [i_3 + 1])), (arr_9 [i_3] [i_2] [i_3] [16] [i_0])))))) ? (((/* implicit */int) arr_6 [i_0] [i_1] [12U])) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_9)), (4193280))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min(((((!(((/* implicit */_Bool) 9223372036854775803LL)))) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) 14810569920325819692ULL)))))))), (((/* implicit */long long int) (-(min((((/* implicit */int) var_3)), (var_12)))))))))));
}
