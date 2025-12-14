/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216797
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
    var_17 = ((/* implicit */unsigned long long int) (((+(12422891545535386152ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_16))))));
    var_18 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) max((((/* implicit */int) ((signed char) arr_5 [i_2 - 2] [i_2 - 2] [i_2 - 2]))), ((~(((/* implicit */int) (short)-13284))))));
                    var_19 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) var_9))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)17))))))))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) ((unsigned int) var_2)))) && (((/* implicit */_Bool) arr_6 [i_0] [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_13)))))));
                                arr_17 [i_4] [i_4] [i_3] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((-(((/* implicit */int) (unsigned short)50633)))) : (((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */short) var_3))))))) - (((/* implicit */int) ((short) max((((/* implicit */short) arr_14 [i_4] [i_3] [i_0] [i_1] [i_0])), ((short)-1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((var_14) <= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))))))))));
}
