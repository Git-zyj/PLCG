/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39418
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0]))) ? (((/* implicit */unsigned int) min((((/* implicit */int) ((var_5) < (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_8 [i_1] [i_2]))))))) : (((unsigned int) arr_10 [(signed char)8] [i_0] [(signed char)9] [i_3]))));
                            var_13 -= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_6)), (var_1)))))))));
                            arr_13 [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [(unsigned short)4]), (var_2)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max((arr_6 [i_0] [i_0] [i_2]), (((/* implicit */short) var_0)))))))) ? (((/* implicit */int) (((+(var_3))) != (((/* implicit */int) min((var_7), (((/* implicit */short) arr_10 [i_1] [i_1 - 1] [i_1] [i_1 + 1])))))))) : ((~(((/* implicit */int) max((var_6), (((/* implicit */unsigned char) arr_0 [i_0])))))))));
                        }
                    } 
                } 
                var_14 ^= ((/* implicit */short) max((((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_1])))) <= (max((var_5), (((/* implicit */long long int) var_0))))))), (var_6)));
                var_15 = arr_7 [i_1 - 3];
                arr_14 [i_0] [i_0] |= ((/* implicit */signed char) ((unsigned short) var_5));
            }
        } 
    } 
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((((/* implicit */int) max((var_0), (var_8)))) <= (((/* implicit */int) ((signed char) var_11))))) ? (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))), (((/* implicit */int) max((var_8), (var_8)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((var_2), (var_2)))))))))));
}
