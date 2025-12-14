/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2832
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
    var_12 = ((/* implicit */short) (~(((max((((/* implicit */unsigned int) (_Bool)1)), (3375317534U))) + (min((4050335983U), (((/* implicit */unsigned int) (unsigned char)224))))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (3ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2105205273)) ? (((/* implicit */int) var_7)) : (-1730703064))))))) && (((/* implicit */_Bool) max((min((((/* implicit */unsigned int) (signed char)127)), (3786319331U))), (min((((/* implicit */unsigned int) (unsigned short)24633)), (4294967295U)))))))))));
                    var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) 31482563)) ? (137304735744ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-28491)))))))) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((2105205280) < (((/* implicit */int) (signed char)127))))))))));
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) arr_2 [i_1 - 2]))))))) : (((((/* implicit */_Bool) max((var_4), ((signed char)120)))) ? (4294967271U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15575))))))))));
                }
            } 
        } 
    } 
}
