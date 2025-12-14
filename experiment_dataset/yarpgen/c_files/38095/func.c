/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38095
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
    var_13 = var_3;
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_14 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24165)) ? (16062224171045869579ULL) : (((((/* implicit */_Bool) (unsigned char)170)) ? (12462240584119407765ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))))))));
                var_15 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (0ULL) : (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (min((((/* implicit */unsigned long long int) 4286578688U)), (0ULL))))) / (((/* implicit */unsigned long long int) -1493706192))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */long long int) 25U)), (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_6 [i_0] [8U] [8U] [(_Bool)1])))))));
                                var_17 = ((/* implicit */long long int) (unsigned short)35015);
                                arr_12 [i_0 - 2] [i_0 - 2] [i_2] [i_3 - 2] [(_Bool)1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) min(((short)22349), (((/* implicit */short) var_0))))) >= (((((/* implicit */int) min((var_9), ((_Bool)1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0])))))))));
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & (((((/* implicit */_Bool) (short)32357)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (signed char)-1))))))) ? (((((/* implicit */unsigned long long int) (~(2147483647)))) | ((~(var_8))))) : (((((/* implicit */unsigned long long int) (~(2147483647)))) ^ ((~(var_1)))))));
                            }
                        } 
                    } 
                } 
                var_19 &= ((/* implicit */_Bool) ((long long int) var_2));
                var_20 = ((/* implicit */int) var_11);
            }
        } 
    } 
}
