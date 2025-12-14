/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211042
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
    var_17 &= ((/* implicit */_Bool) (+(((/* implicit */int) var_15))));
    var_18 = ((/* implicit */unsigned short) var_7);
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((3ULL) % (18446744073709551607ULL)))) ? (((/* implicit */unsigned long long int) (((((-(((/* implicit */int) (unsigned short)8192)))) + (2147483647))) >> (((((2942714979U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57346))))) - (2942657609U)))))) : (((((/* implicit */unsigned long long int) (((_Bool)1) ? (58720256U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) - (((18446744073709551612ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (short i_3 = 3; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1787466583U)) ? (1806447215165942986ULL) : (((/* implicit */unsigned long long int) 1936369842U)))))))));
                            arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned short)57340)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57340)))))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)113)) ? ((-(681561720U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3812040519058083667ULL))) : (max(((((_Bool)1) ? (((/* implicit */unsigned long long int) 4294967295U)) : (13ULL))), (((/* implicit */unsigned long long int) 4294967295U)))))))));
                        }
                    } 
                } 
                var_22 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((681561713U) >> (((((/* implicit */int) (unsigned short)57352)) - (57336)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8183))) : (((((/* implicit */_Bool) (short)22459)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)75))) : (953760444U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36176))) : (4294967295U));
                arr_10 [i_0] [i_0] [i_1] &= ((/* implicit */unsigned char) (((((_Bool)1) ? (((((/* implicit */_Bool) (short)14554)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7))) : (18434910342120479197ULL))) : (8087029086051188616ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((3046798307U) - (2520410711U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3812040519058083659ULL))))) : (((/* implicit */int) (signed char)52)))))));
            }
        } 
    } 
}
