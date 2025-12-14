/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217268
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
    for (unsigned char i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_11 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)48582))));
                arr_7 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_3 [i_0])), (4294967295U)));
                arr_8 [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (4294967295U) : (4294967287U)))) ? (arr_4 [i_0 + 1] [i_0] [3LL]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 80536840U)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))))))))));
                var_12 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (4294967287U)))) ? (((((-7201856984480008083LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) ? (arr_1 [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)195))))) : ((-(((((/* implicit */_Bool) (unsigned char)0)) ? (4294967295U) : (4294967295U)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 10; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            {
                arr_13 [i_2] [i_2] = ((/* implicit */unsigned short) min((((long long int) ((((/* implicit */_Bool) 4294967286U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)243))))), (((/* implicit */long long int) 4294967278U))));
                arr_14 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)238))))) & (((/* implicit */int) (unsigned char)152))))) ? ((-(min((((/* implicit */long long int) (unsigned short)48957)), (arr_4 [i_2 + 2] [i_2] [i_2]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 474039097131471557LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_4 [i_2 - 1] [i_2] [i_3])))) ? (min((((/* implicit */long long int) arr_6 [i_2 - 1])), (1048576LL))) : (((((/* implicit */_Bool) var_6)) ? (-474039097131471566LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58338)))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_6);
    var_14 = (-(((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 1660081264U)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))))) : (((((/* implicit */_Bool) var_10)) ? (3933098068U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(1660081251U)))) && (((/* implicit */_Bool) var_6))));
}
