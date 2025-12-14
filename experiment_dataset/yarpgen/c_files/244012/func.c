/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244012
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
    for (unsigned short i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 8; i_3 += 4) 
                    {
                        {
                            var_13 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)-86)), (511))))));
                            var_14 *= ((/* implicit */short) (~(((((/* implicit */_Bool) 1977489160U)) ? (((/* implicit */unsigned int) var_6)) : (var_2)))));
                            var_15 = ((/* implicit */short) (-(4294967295U)));
                        }
                    } 
                } 
                arr_10 [i_0 + 3] [i_1] &= ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148))) < (18446744073709551604ULL));
            }
        } 
    } 
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((((/* implicit */int) (unsigned char)211)) > (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)905)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-81))))))) : (((/* implicit */unsigned long long int) var_12)))))));
    var_17 *= ((/* implicit */signed char) 15622469000646949168ULL);
    var_18 ^= ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned long long int) max((0LL), (((/* implicit */long long int) var_1)))))));
}
