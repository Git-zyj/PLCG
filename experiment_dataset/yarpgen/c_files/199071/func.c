/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199071
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
    var_19 = ((/* implicit */unsigned char) ((max((1251043121U), (((/* implicit */unsigned int) ((1251043121U) < (0U)))))) * (var_11)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_7 [i_2 + 2])) ? (arr_7 [i_2 + 3]) : (arr_7 [i_2 + 3])))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) arr_12 [i_1]);
                                arr_13 [i_4] [i_4] [i_4] [i_3] [i_1] [i_4] [i_1] = ((/* implicit */long long int) 1251043121U);
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((long long int) var_12))) ? (((/* implicit */int) ((short) arr_9 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */int) arr_0 [i_0])))) == (min((min((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])), (arr_12 [i_1]))), (arr_3 [i_2 - 1] [i_2 + 1] [i_2 + 3])))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) var_13);
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (((((~(((/* implicit */int) (unsigned char)14)))) + (2147483647))) << (((arr_6 [16] [16] [i_0]) - (5793997100318471823LL)))))) ? (((4294967295U) ^ (4294967295U))) : (((/* implicit */unsigned int) ((((var_3) + (2147483647))) << ((((~(3043924172U))) - (1251043123U)))))))))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [3ULL] [i_0])) ? (arr_6 [i_1] [i_1] [i_0]) : (((/* implicit */long long int) arr_12 [i_1])))))));
                }
            } 
        } 
    } 
}
