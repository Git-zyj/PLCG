/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230297
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
    var_17 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (-(var_2)))) ? (min((0LL), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) var_15);
                var_19 = ((/* implicit */unsigned long long int) var_16);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_20 |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_11)) ? (arr_0 [i_1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) arr_1 [i_2 + 2]))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */int) var_0)) + (var_5))) : (((/* implicit */int) (_Bool)1))))) ? (var_5) : (((/* implicit */int) var_7))));
                            arr_12 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */short) var_9)), ((short)-18220)))) ? ((~(var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) ^ (min((16930774606050356605ULL), (((/* implicit */unsigned long long int) var_1))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) 16930774606050356605ULL);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        for (signed char i_5 = 1; i_5 < 18; i_5 += 3) 
        {
            {
                arr_17 [i_5 + 1] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21508))) : (((((/* implicit */_Bool) var_10)) ? (var_8) : (arr_16 [i_4] [(signed char)8] [i_5 + 1])))))) ? (((/* implicit */int) (_Bool)1)) : (((((((/* implicit */int) var_4)) + (2147483647))) << (((((var_2) + (765709123))) - (6)))))));
                arr_18 [(unsigned char)4] [i_5 + 2] [i_5] = ((/* implicit */unsigned char) max(((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))))), (((/* implicit */int) var_14))));
            }
        } 
    } 
}
