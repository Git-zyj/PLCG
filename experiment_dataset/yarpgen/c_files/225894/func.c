/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225894
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) var_2))));
    var_11 = ((/* implicit */int) ((((var_8) + (9223372036854775807LL))) << (((((/* implicit */int) var_2)) - (91)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [14U] [i_1] |= ((/* implicit */unsigned int) (_Bool)1);
                arr_6 [i_0] [i_1] |= ((/* implicit */unsigned short) -2147483645);
                var_12 = ((/* implicit */short) ((((((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535)))) <= (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -6077702164986063909LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) 268013685U)) ? (((/* implicit */int) arr_4 [16U] [i_0])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((short) 10229589823846556340ULL))))) : (((((/* implicit */_Bool) 251902370)) ? (267911168) : (((/* implicit */int) (unsigned short)43492))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 3) 
                {
                    for (short i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1815179362U)) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)64732))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)226)), (88946967))))));
                            arr_12 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)209))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_2)) | (((/* implicit */int) (unsigned short)23))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_0]))))) : (max(((-(var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_2 [i_0]))))))))))));
            }
        } 
    } 
    var_15 |= ((/* implicit */signed char) ((var_6) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((-267911183), (-267911168))))))) : (((/* implicit */int) var_6))));
}
