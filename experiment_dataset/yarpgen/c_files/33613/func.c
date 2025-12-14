/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33613
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
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (16360360848508842111ULL))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_3 [i_0])) & ((~(((/* implicit */int) (signed char)-57)))))), (max((var_15), (((/* implicit */int) arr_1 [i_0 + 1]))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 ^= ((/* implicit */long long int) var_6);
                            var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_0 + 3] [i_0]))), (var_11)));
                            arr_12 [i_0] [14] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_8 [i_0] [i_1] [i_2] [i_3]))) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) min((arr_7 [i_0] [i_0] [i_0] [(signed char)7]), (((/* implicit */unsigned short) arr_9 [i_0] [8ULL] [i_0])))))))) ? (((/* implicit */int) ((short) arr_9 [i_0 + 1] [i_0 - 1] [i_0]))) : (((/* implicit */int) arr_4 [i_0] [i_2]))));
                            var_19 = ((/* implicit */unsigned int) (signed char)63);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_2);
    var_21 |= ((/* implicit */signed char) var_16);
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (min((((/* implicit */long long int) ((_Bool) var_14))), (var_1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((646832325U), (((/* implicit */unsigned int) var_13))))) ? (((/* implicit */int) (unsigned short)63512)) : (((/* implicit */int) var_13)))))));
}
