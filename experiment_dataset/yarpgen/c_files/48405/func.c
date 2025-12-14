/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48405
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (16153618560677500838ULL)))), (var_3)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))) : (var_12))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_18 = ((unsigned short) (!(((/* implicit */_Bool) arr_4 [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_19 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) > (((((/* implicit */_Bool) arr_10 [i_3 - 1])) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (arr_12 [i_1] [i_2] [i_3] [i_4])))) : (var_12))));
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)98)), (min((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])), (arr_12 [i_0] [2] [i_0] [i_0])))))) ? (max((((((/* implicit */int) (signed char)126)) % (((/* implicit */int) (signed char)125)))), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((signed char) 2147483647)))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))), (arr_7 [i_2] [i_1] [i_0]))) - (((/* implicit */unsigned long long int) ((long long int) (((_Bool)1) ? (2820728278U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            {
                arr_17 [i_5] = ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) arr_15 [(_Bool)1] [i_6]))) | (((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_14 [(signed char)9]))))), (((/* implicit */long long int) (((~(2732832455U))) ^ (min((((/* implicit */unsigned int) (_Bool)1)), (arr_16 [i_5]))))))));
                var_22 -= ((/* implicit */int) ((((((/* implicit */_Bool) 1559123425734270293LL)) ? (arr_14 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5]))))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_5])) && (((/* implicit */_Bool) arr_14 [i_6]))))))));
            }
        } 
    } 
    var_23 &= ((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) ((((/* implicit */int) (signed char)125)) == (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_10)))))))));
}
