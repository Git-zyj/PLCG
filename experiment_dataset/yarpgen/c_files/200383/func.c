/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200383
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
    var_19 = ((/* implicit */unsigned char) var_16);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    arr_9 [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_4 [i_1 - 2] [i_1] [i_1])) ^ (((/* implicit */int) var_12))))));
                    arr_10 [10LL] [i_1] [i_1 + 3] [(signed char)10] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) % (((/* implicit */int) arr_2 [i_0]))));
                    var_20 = ((/* implicit */signed char) ((arr_7 [i_2] [i_2] [i_2]) - (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)152))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)123))) / (var_4))) : (538134008U)))));
                    var_21 = ((/* implicit */unsigned char) arr_7 [i_0] [i_1 - 1] [i_1 + 2]);
                }
                arr_11 [i_1] [i_1] = ((/* implicit */unsigned int) ((arr_0 [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) max((arr_1 [i_1 - 1]), (var_8))))))))));
                var_22 *= ((/* implicit */signed char) (((~(957615112317176640LL))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10945)))));
                var_23 = ((/* implicit */unsigned char) var_13);
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1023))) != (3254373373U))))));
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) max((((/* implicit */int) max((((unsigned char) var_17)), (((unsigned char) var_5))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : ((~(((/* implicit */int) var_6))))))));
    var_26 = ((/* implicit */unsigned char) (((+(var_13))) - (((/* implicit */int) var_3))));
}
