/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47265
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_1] [i_0]))));
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)4)), (arr_0 [i_1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            for (unsigned int i_4 = 1; i_4 < 21; i_4 += 4) 
            {
                {
                    var_14 += ((/* implicit */unsigned char) arr_8 [i_2]);
                    arr_13 [i_4 - 1] [i_4] [(_Bool)1] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) arr_12 [i_3] [i_3] [i_4 - 1] [15LL])) + (-8251037839547802669LL)));
                    var_15 *= ((/* implicit */short) arr_6 [i_2]);
                    var_16 = (unsigned short)43704;
                    var_17 = ((/* implicit */long long int) ((short) min((var_2), (((/* implicit */long long int) arr_10 [i_3] [i_3] [i_4 + 1])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
    var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)5)) < (((/* implicit */int) (short)25173))))) << (((((((/* implicit */long long int) ((/* implicit */int) (signed char)96))) * (var_4))) - (5753664699975311123LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((long long int) (unsigned char)3))));
}
