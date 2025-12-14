/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232132
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */long long int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1595887923)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 *= ((/* implicit */unsigned long long int) ((_Bool) var_1));
                            arr_10 [(unsigned short)7] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 + 1]))) + (var_0)));
                        }
                    } 
                } 
                var_13 |= ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_0] [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        for (int i_5 = 3; i_5 < 8; i_5 += 4) 
        {
            {
                var_14 &= ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */int) arr_5 [4LL] [i_5] [i_4])) - (((/* implicit */int) arr_5 [i_5] [i_5] [i_4])))) < (((/* implicit */int) ((((/* implicit */int) arr_11 [i_4] [(unsigned short)0])) > (((/* implicit */int) var_9)))))))) < (((/* implicit */int) (unsigned char)204))));
                var_15 = ((/* implicit */int) min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (arr_8 [i_5] [i_5 - 2] [i_4] [i_4])));
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (signed char)123))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_8 [i_4] [i_4] [i_5] [i_5 + 1]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65514))) - (var_0))) << (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)123))))))))));
    var_18 -= ((/* implicit */long long int) var_7);
}
