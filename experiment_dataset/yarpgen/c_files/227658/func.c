/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227658
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
    var_20 = (~(((/* implicit */int) (signed char)114)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */signed char) var_10);
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_15)))), (((((/* implicit */int) arr_2 [i_1] [(signed char)9])) << (((/* implicit */int) arr_2 [i_1] [i_0]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_0), (var_17)))) ? (min((var_8), (((/* implicit */long long int) arr_3 [i_2] [i_3])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) var_10)) : (2147483647))))));
                            arr_14 [i_0] [i_2] [i_2] [(_Bool)1] = (-((((_Bool)1) ? (((/* implicit */int) (unsigned short)23864)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)41699))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)24576)))))) : ((~(((var_4) ? (4323455642275676160ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
                            arr_15 [i_1] [i_1] [(signed char)9] [i_2] = arr_13 [i_0] [i_1] [i_2];
                        }
                    } 
                } 
                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-114))))) ? (((/* implicit */int) (unsigned short)0)) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) var_9)) : (min((0), (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
}
