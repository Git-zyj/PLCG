/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217074
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_20 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) 7)) < (604912549U)));
                var_21 = ((/* implicit */unsigned int) var_11);
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 12; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) -1426975008);
                            var_23 = ((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_1] [i_1] [i_1] [i_0]);
                            var_24 -= ((/* implicit */unsigned char) ((short) (unsigned char)255));
                        }
                    } 
                } 
                arr_9 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 2147483633)) ? (((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_0 - 1] [i_1])))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0])) ? (8790228002017454251ULL) : (((/* implicit */unsigned long long int) var_13))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_4 = 2; i_4 < 21; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            arr_15 [i_4] = 1372999157437782671LL;
            arr_16 [(signed char)20] [i_4 + 2] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_1)))) ? (((((/* implicit */int) var_19)) * (((((/* implicit */_Bool) 1426975015)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned char)232)))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) arr_13 [i_5])))) && (((/* implicit */_Bool) max((3690054746U), (((/* implicit */unsigned int) arr_12 [i_5] [5U]))))))))));
        }
        var_25 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_8)) & (((/* implicit */int) (signed char)(-127 - 1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (!(var_18)))), (var_17))))) : (((((arr_14 [i_4] [i_4]) | (arr_14 [(_Bool)1] [i_4]))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [(_Bool)1] [i_4])))))))));
    }
    var_26 |= ((/* implicit */short) (((-((~(((/* implicit */int) var_18)))))) >> (((min((var_12), (((/* implicit */unsigned long long int) ((unsigned char) var_16))))) - (33ULL)))));
}
