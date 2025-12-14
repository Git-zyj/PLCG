/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226969
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
    var_17 = ((/* implicit */unsigned char) var_1);
    var_18 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((signed char) (short)29595));
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) min((((/* implicit */unsigned long long int) arr_5 [i_0])), ((~(17898786153554155314ULL))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 12305615739587086094ULL)) ? (606399965) : (((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)90)))) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (_Bool)1))))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3] [i_3] [i_3]))) ^ (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (min((max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])), (6599612673334709126ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_13)) : (127)))))) : (((var_13) ? (((unsigned long long int) -606399966)) : (arr_0 [i_0] [i_0])))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) -606399965))));
                var_24 = ((/* implicit */unsigned char) -2147483627);
            }
        } 
    } 
}
