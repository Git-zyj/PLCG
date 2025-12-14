/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231809
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) min(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) - (arr_4 [(signed char)4] [(signed char)4] [i_2]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_2 - 1] [i_0] [i_0]))))))))));
                        arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = arr_0 [i_0] [i_0];
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 3; i_4 < 14; i_4 += 2) /* same iter space */
                        {
                            var_21 &= ((/* implicit */_Bool) ((signed char) -1799906962));
                            var_22 = (+(min((((arr_4 [i_3] [i_3] [i_1]) | (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2] [i_2] [7] [i_2])) != (var_16)))))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) var_17)), ((short)-24262)))) && (((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) var_19)))))))) > (min((arr_7 [i_1] [(_Bool)1] [i_2 + 1] [i_2 + 1] [i_3] [i_3]), (((/* implicit */int) var_12))))));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) (signed char)-107)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 3; i_5 < 14; i_5 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) var_0))));
                            var_26 = ((/* implicit */signed char) ((unsigned char) arr_7 [i_1] [i_5 + 2] [(unsigned char)9] [(unsigned short)6] [i_2 - 1] [i_1]));
                        }
                        arr_15 [i_1] = ((/* implicit */int) (-(max((max((((/* implicit */unsigned int) arr_1 [(short)7])), (var_2))), (((/* implicit */unsigned int) arr_8 [i_3] [i_0] [i_0] [i_0]))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_0 [i_0] [i_0]))));
    }
    var_28 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min(((short)-24284), ((short)-24262)))) ? (((((/* implicit */int) (signed char)-107)) + (((/* implicit */int) (short)-24262)))) : (((/* implicit */int) var_19)))), (((/* implicit */int) var_19))));
    var_29 = ((/* implicit */unsigned long long int) var_7);
}
