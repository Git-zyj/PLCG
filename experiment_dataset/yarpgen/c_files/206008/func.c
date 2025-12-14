/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206008
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
    var_12 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 - 1] [i_1])) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) (unsigned short)18405))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)47131))))))))));
                arr_6 [(unsigned char)4] [(short)0] [(unsigned char)4] |= ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_1 - 1])), (arr_4 [i_0] [(unsigned short)14]))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)47108))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) : (((arr_5 [(_Bool)1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (14786639831148015946ULL))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_2] [i_2] [i_3] [i_1] = ((/* implicit */signed char) ((((arr_10 [i_0] [i_1 - 1] [i_1 - 1] [i_3] [i_1 - 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)47103)))) * (((arr_13 [i_0] [i_0] [i_1] [i_1 - 1] [i_2] [i_1 - 1] [i_1 - 1]) ? (((/* implicit */int) arr_13 [2U] [i_1] [i_2] [i_3] [(short)10] [i_0] [i_1])) : (((/* implicit */int) (unsigned short)65535))))));
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-30732))))) ? (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [(unsigned char)6] [(unsigned char)17])) : (((((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [(unsigned short)8] [(_Bool)1] [(_Bool)1])) - (((/* implicit */int) (unsigned short)24455)))))) : (max((((((/* implicit */int) var_7)) - (((/* implicit */int) (short)24173)))), (((/* implicit */int) (short)4999))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
