/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210998
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 *= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) (signed char)-42))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)25))) : (var_2)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) max((min(((signed char)-47), ((signed char)47))), (min(((signed char)25), ((signed char)-47))))))) * (((((var_2) < (var_1))) ? (((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-26))) : (var_2))) : (max((var_0), (((/* implicit */long long int) (signed char)47))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) var_4);
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        {
                            arr_15 [i_3] [i_1 - 4] [i_3] [i_3] [i_4] [i_1] [i_2] = ((((/* implicit */long long int) ((/* implicit */int) (signed char)40))) / (var_2));
                            arr_16 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-26)) / (((/* implicit */int) (signed char)47))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            var_14 ^= ((/* implicit */unsigned long long int) min(((+((+(((/* implicit */int) (signed char)25)))))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-74))) : (var_10)))))));
            var_15 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)33)))) * (((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) (signed char)-26))))));
            arr_21 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)33))) != (var_8)))), ((signed char)33)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) var_9))))));
            arr_22 [i_0] = ((/* implicit */unsigned char) min(((-(((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) (signed char)-31)))))), ((+(((/* implicit */int) (signed char)47))))));
        }
        arr_23 [i_0] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) (signed char)-8)) + (((/* implicit */int) min(((signed char)47), (var_9))))))), (((((((/* implicit */int) (signed char)26)) > (((/* implicit */int) (signed char)33)))) ? (((var_2) - (((/* implicit */long long int) ((/* implicit */int) (signed char)41))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) var_9)))))))));
    }
    var_16 = ((/* implicit */signed char) var_0);
}
