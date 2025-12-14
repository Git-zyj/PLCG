/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209181
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
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)120)))))))) == (((/* implicit */int) (unsigned short)65534)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_8 [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned char)7))))))), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (min((var_2), (((/* implicit */long long int) var_0)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (var_2)))))));
                    var_15 = ((/* implicit */unsigned short) ((short) ((((1073709056LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65519))))) * (((/* implicit */long long int) (-(arr_1 [i_0] [i_0 - 3])))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) var_10);
                        arr_13 [i_0] [i_0] [2LL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) arr_6 [10] [i_0] [i_0 - 1])) & ((+(((/* implicit */int) (unsigned short)65530)))))));
                    }
                }
            } 
        } 
    } 
    var_16 &= ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) var_8)))));
    var_17 = ((/* implicit */unsigned long long int) (+(0)));
    var_18 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
}
