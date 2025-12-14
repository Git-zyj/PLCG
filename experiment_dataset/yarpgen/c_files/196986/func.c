/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196986
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((_Bool) arr_4 [i_0] [i_0] [i_0])) ? (max((4123582221U), (((/* implicit */unsigned int) (short)-7857)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) var_7)))))))) ? (min((((((/* implicit */int) var_12)) - (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) ((_Bool) (short)7867))))) : (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_1]))))));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_0 [i_0]))) >> (((((/* implicit */_Bool) (((_Bool)1) ? (65535U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)107)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))) : (min((arr_5 [i_0]), (((/* implicit */long long int) (_Bool)1))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_17 |= ((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)0)), (max(((unsigned short)0), (arr_2 [i_1] [i_1])))));
                    arr_9 [i_2] = ((/* implicit */long long int) ((_Bool) (unsigned char)237));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_3 = 2; i_3 < 20; i_3 += 4) 
    {
        var_18 |= ((/* implicit */short) ((_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)(-32767 - 1)))))), (min((3655493018U), (((/* implicit */unsigned int) (signed char)0)))))));
        arr_12 [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)165)) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_10 [i_3 + 1])) : (((/* implicit */int) arr_10 [i_3 - 2]))));
        var_19 = ((/* implicit */_Bool) ((4160749568U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)106)))));
        arr_13 [i_3] = ((/* implicit */_Bool) ((((unsigned int) arr_11 [i_3 + 1] [i_3 + 1])) | (((/* implicit */unsigned int) ((/* implicit */int) max((arr_10 [i_3 - 1]), (arr_10 [i_3 - 1])))))));
        var_20 = ((/* implicit */unsigned int) var_12);
    }
}
