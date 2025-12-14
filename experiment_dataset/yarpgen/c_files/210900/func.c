/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210900
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
    var_19 = ((/* implicit */short) max((((_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_16)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5192)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_3))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) var_4)) : (var_0))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (short)-5192))));
                            arr_11 [i_3] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned long long int) var_14));
                            var_21 = ((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */int) arr_9 [i_3] [i_1])), (((((/* implicit */_Bool) arr_4 [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (var_0))))));
                        }
                    } 
                } 
                var_22 ^= ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_0] [i_0] [i_0] [i_1]), (var_17))))) ^ (arr_0 [i_0]))) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-111)))));
                var_23 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1] [i_1])) >> (((arr_0 [i_1]) - (3210093837141323464LL)))))) >= (((long long int) var_11)))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) ((_Bool) var_14)))));
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 23; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */int) min((var_24), (max(((~(((/* implicit */int) arr_6 [i_0] [(_Bool)1] [i_4 + 1])))), (((((/* implicit */_Bool) ((long long int) var_10))) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [4LL] [i_1] [i_0])) < (((/* implicit */int) arr_8 [i_0] [i_1] [i_0]))))) : (var_0)))))));
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4 - 2] [i_4 - 2]))) : (max((((/* implicit */long long int) var_3)), ((+(-4027287508977679823LL))))))))));
                            var_26 -= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_0] [i_5])))))))) < (((/* implicit */int) max((arr_3 [i_4 - 2] [i_4 - 1] [i_4 - 1]), (((/* implicit */unsigned char) (signed char)(-127 - 1))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_10))))), (((((2134295091508026952LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)32767))))) ? ((~(var_1))) : (((/* implicit */unsigned long long int) ((((-4027287508977679806LL) + (9223372036854775807LL))) << (((((((/* implicit */int) var_17)) + (161))) - (43))))))))));
}
