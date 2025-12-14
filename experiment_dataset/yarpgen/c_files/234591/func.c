/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234591
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)0))));
                arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-3))))) ? ((((~(((/* implicit */int) (unsigned char)252)))) / (((/* implicit */int) (unsigned short)18771)))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (short)32767))))) ? (((/* implicit */int) (short)-32767)) : (391997370)))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))))))) : ((~(((((/* implicit */_Bool) (unsigned short)15630)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-67))))))));
                            var_17 &= ((/* implicit */unsigned int) (unsigned short)15625);
                            arr_14 [i_0] [(short)2] [i_2 - 1] [i_2] [i_0] = ((/* implicit */short) (+((((((_Bool)1) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) (unsigned char)228)))) / ((-(104315117)))))));
                            var_18 = ((/* implicit */short) (~((~(((((/* implicit */int) (unsigned short)49888)) << (((-857831306) + (857831314)))))))));
                        }
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */unsigned long long int) 857831307);
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned char)146))))))))))));
}
