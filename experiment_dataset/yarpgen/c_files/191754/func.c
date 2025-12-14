/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191754
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
    var_10 = ((_Bool) ((signed char) (short)24392));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((unsigned int) ((((/* implicit */_Bool) 4378517604000152089LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (arr_4 [i_1 - 2])))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)119))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((-4378517604000152090LL) & (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((+(1903797899U)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0]))))) : (max(((-(81444542375834640LL))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)60316))))))))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((unsigned short) ((unsigned char) min((arr_5 [i_0] [i_1] [i_0]), (((/* implicit */long long int) var_9))))))));
                    var_15 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) var_8);
    var_17 -= ((/* implicit */long long int) ((unsigned char) var_5));
    var_18 = ((/* implicit */long long int) (unsigned short)60316);
}
