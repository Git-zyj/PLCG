/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248221
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
    var_12 = ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0] [i_0]))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 4; i_2 < 8; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_8 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((signed char) ((short) (+(var_5)))));
                            arr_9 [i_0] [(signed char)8] [i_0] [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_0])) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-16384)) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)96)))))))) : (arr_5 [(_Bool)0] [i_3] [0U])));
                        }
                    } 
                } 
                arr_10 [i_0] [(_Bool)1] [i_0] |= ((/* implicit */unsigned long long int) (unsigned short)28420);
                arr_11 [i_1] = ((/* implicit */int) arr_3 [i_1]);
                arr_12 [i_1] = ((unsigned char) ((_Bool) arr_3 [i_1]));
            }
        } 
    } 
    var_14 -= ((/* implicit */signed char) var_2);
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((((/* implicit */int) var_11)) * (((/* implicit */int) (unsigned char)6)))) : ((+(((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_7)));
}
