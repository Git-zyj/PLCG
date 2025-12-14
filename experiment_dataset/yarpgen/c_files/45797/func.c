/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45797
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
    var_14 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-115)) == (((((/* implicit */int) (unsigned char)236)) % (((/* implicit */int) (signed char)106))))))) <= ((((+(var_3))) % (((/* implicit */int) (signed char)70))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (int i_4 = 4; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) ((((((/* implicit */int) arr_11 [(signed char)5] [i_3] [i_2] [(signed char)18] [i_0])) + (2147483647))) >> ((((((_Bool)1) ? (max((((/* implicit */long long int) -1207691061)), (-4768235246110078690LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))))) + (1207691082LL)))));
                                var_16 = ((/* implicit */_Bool) max((max((((int) arr_1 [i_3] [i_0])), ((((_Bool)1) ? (((/* implicit */int) (signed char)-27)) : (1711471480))))), (((/* implicit */int) ((((/* implicit */int) var_13)) >= (((arr_2 [i_0]) / (arr_10 [i_0] [i_1] [i_2] [i_3]))))))));
                                var_17 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_4]))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((_Bool) max((0ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : ((-(2774625494287003389ULL)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) >> (((88292022) - (88292020)))))) : ((~(max((var_6), (((/* implicit */unsigned long long int) var_11))))))));
}
