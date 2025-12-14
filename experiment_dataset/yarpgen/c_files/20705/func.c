/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20705
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
    var_15 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) ((signed char) (unsigned short)0)))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)0))))) ? (max((((/* implicit */long long int) var_4)), (var_0))) : (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))));
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) var_11)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) ((max((arr_2 [i_1] [i_1]), (((((/* implicit */_Bool) 8824403127962064709LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_2 [i_0] [(unsigned short)14]))))) == (1174354321211775132LL)));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned char i_3 = 4; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_13 [i_3] [i_1] [i_1] [(signed char)3] [i_2] [i_3] = ((/* implicit */unsigned char) arr_6 [i_2]);
                            arr_14 [11LL] [i_0] [i_1] [(unsigned char)8] [i_3] = ((/* implicit */unsigned char) var_4);
                            var_18 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2])))))))), (arr_2 [i_0] [i_0])));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */long long int) arr_8 [(unsigned char)1] [i_1] [(unsigned char)1] [i_3 - 4]);
                        }
                    } 
                } 
            }
        } 
    } 
}
