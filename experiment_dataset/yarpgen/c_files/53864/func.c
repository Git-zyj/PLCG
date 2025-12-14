/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53864
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_15 -= ((/* implicit */unsigned short) var_9);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_0] = ((/* implicit */int) (signed char)120);
                            var_16 = ((((/* implicit */_Bool) (short)-32761)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32760)));
                            var_17 = ((/* implicit */short) (+(((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_13)))) ^ (arr_8 [i_0] [i_1] [i_1] [i_2] [i_3])))));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((3ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15492))))) ? (((((/* implicit */_Bool) (short)-12221)) ? (-1) : (((/* implicit */int) (short)8)))) : (((/* implicit */int) arr_2 [i_0])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((3ULL), (((/* implicit */unsigned long long int) 985871750))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((_Bool) (short)-15862)))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_5)) <= (((/* implicit */int) (short)32755))))))) : ((+(((((/* implicit */_Bool) var_3)) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) var_10))))))));
    var_20 = ((/* implicit */int) (_Bool)1);
}
