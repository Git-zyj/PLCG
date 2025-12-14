/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207437
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
    for (unsigned int i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        var_16 &= max((((/* implicit */long long int) ((((/* implicit */int) var_4)) >> (((((((/* implicit */_Bool) -2147483644)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)92))) : (525952051175066326LL))) - (75LL)))))), (min((min((144114913197948928LL), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)144)) ^ (((/* implicit */int) (unsigned char)168))))))));
        var_17 -= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((short) (unsigned char)116))) && (((/* implicit */_Bool) ((9223372036854775807LL) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))));
        var_18 |= ((/* implicit */int) min((((/* implicit */long long int) (~(max((((/* implicit */int) var_5)), (827806865)))))), (((((/* implicit */long long int) ((((/* implicit */int) arr_1 [22] [8LL])) % (((/* implicit */int) arr_1 [20U] [i_0]))))) * (((long long int) arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        arr_14 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_2 - 1] [i_0] [i_2 + 2]))));
                        arr_15 [i_0] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_8))));
                    }
                    var_19 = ((/* implicit */unsigned short) ((int) ((arr_5 [i_0] [i_0 + 1] [i_2 - 2]) == (((/* implicit */long long int) var_0)))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-61841963145739529LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_0] [i_1])), (var_2)))) ? (max((-5315216149898930435LL), (((/* implicit */long long int) -827806878)))) : (((/* implicit */long long int) max((var_0), (((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))))))))));
                    var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_8 [i_1]), (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */int) (unsigned char)140)))))))) ? (max((((/* implicit */int) ((var_13) <= (((/* implicit */long long int) -827806894))))), (827806868))) : (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned int) var_12)), (var_2)))))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL))))) != ((+(((unsigned long long int) (signed char)51))))));
                }
            } 
        } 
        var_23 = ((/* implicit */int) max((var_23), ((~(((/* implicit */int) (unsigned char)133))))));
    }
    var_24 &= ((/* implicit */short) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) != (var_2)))))))));
}
