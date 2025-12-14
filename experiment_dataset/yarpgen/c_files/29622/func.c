/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29622
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
    for (int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_17 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)30169)))))));
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_3 [i_1]))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 1]) > (arr_4 [i_0 - 1] [i_0 + 1] [i_0 + 1]))))) * (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((((/* implicit */_Bool) (unsigned char)38)) ? (arr_7 [12]) : (arr_4 [i_1] [i_0 - 1] [1ULL]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)62))))))))))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)35366)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35366))) : (arr_4 [i_0] [i_1] [i_2])))))) ? (((((/* implicit */_Bool) 4486007441326080LL)) ? (((/* implicit */long long int) -214402775)) : (0LL))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65524)) / (((/* implicit */int) (unsigned char)210)))))));
                }
                for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 2) 
                {
                    arr_13 [i_1] [i_0] [(_Bool)1] [i_3] = ((/* implicit */int) 3770487133U);
                    var_21 = ((/* implicit */_Bool) max(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)218))));
                }
                var_22 = ((/* implicit */unsigned char) (short)20525);
                var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) (signed char)61)) : (arr_9 [i_0 + 1] [i_1 - 1] [i_1 + 2] [(_Bool)1])))) || (((/* implicit */_Bool) (+(((/* implicit */int) (short)4111)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) var_7);
}
