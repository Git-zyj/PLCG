/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209935
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
    var_19 = ((/* implicit */unsigned short) (short)-6);
    var_20 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_17)), (max((((/* implicit */unsigned long long int) 0LL)), (18446744073709551615ULL)))));
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (var_7)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2958753945U)) ? (((/* implicit */int) var_12)) : (var_6)))) : (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (1758289993U)))))), ((~(max((var_16), (((/* implicit */long long int) var_5)))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */short) -8376181246170390450LL);
                            var_23 = ((/* implicit */signed char) -6031425113187418464LL);
                            var_24 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [i_1] [i_1 + 1] [i_2] [i_1 + 1])) ? (1336213327U) : (2062549627U))) << (((((/* implicit */int) (signed char)84)) - (60)))))) || (var_13)));
                        }
                    } 
                } 
                arr_9 [i_1] [15ULL] [i_0] = ((/* implicit */short) (+(max((((/* implicit */long long int) arr_0 [i_1])), (arr_7 [i_0])))));
                var_25 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) min((((/* implicit */short) (unsigned char)172)), ((short)1782)))), (arr_2 [i_0] [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_2)))) : (((((arr_4 [i_1 + 1]) + (9223372036854775807LL))) >> ((((_Bool)1) ? (((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) (_Bool)1))))))));
                var_26 = ((/* implicit */unsigned int) ((signed char) var_13));
            }
        } 
    } 
}
