/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200246
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((max((min((((/* implicit */unsigned long long int) var_16)), (18446744073709551614ULL))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 234881024)) : (15865174360640464602ULL))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)55)))))))));
                    var_18 = ((/* implicit */int) arr_2 [i_0]);
                    var_19 = ((/* implicit */int) var_5);
                    var_20 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) 15))) % (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            var_21 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)11598))) > (2530897527U)));
            arr_11 [i_0] = (~(((((/* implicit */_Bool) 926433075)) ? ((-(26U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))));
            var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned char) 2525408120U))) || ((_Bool)1))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 3178484272U))))))))));
        }
    }
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (signed char)7))));
    var_24 = ((((unsigned long long int) ((((/* implicit */unsigned int) var_2)) * (var_16)))) * (((/* implicit */unsigned long long int) ((-37) * (((/* implicit */int) (short)12008))))));
}
