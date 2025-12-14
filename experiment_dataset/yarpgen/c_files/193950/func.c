/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193950
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
    for (signed char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */int) min((arr_2 [i_1]), (((/* implicit */long long int) ((((arr_0 [i_0] [i_1]) << (((var_18) - (8989758891452451126LL))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1422329477)))))))))));
                var_20 -= ((/* implicit */unsigned char) (signed char)-105);
                var_21 = ((/* implicit */short) (-(((/* implicit */int) (short)-22267))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (+(((/* implicit */int) var_11)))))));
                    arr_8 [i_1] [i_2] = ((/* implicit */int) ((unsigned char) min((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned int) ((int) 0U))))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
                {
                    arr_13 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0 + 2]);
                    arr_14 [(unsigned char)16] [i_3] [i_1] [(unsigned char)16] &= ((/* implicit */unsigned int) ((2091598326U) > (((/* implicit */unsigned int) (~(arr_1 [i_3]))))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
                {
                    arr_17 [i_1] [i_1] [i_4] = ((/* implicit */signed char) (+(arr_12 [i_1])));
                    var_23 = ((((/* implicit */_Bool) (short)27413)) ? (((/* implicit */unsigned long long int) 1649884352)) : (221360448022476392ULL));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned short) var_13)), (((unsigned short) 1601338021)))));
}
