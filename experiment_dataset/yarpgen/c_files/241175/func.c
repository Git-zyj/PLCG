/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241175
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 3; i_2 < 13; i_2 += 1) 
                {
                    var_10 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) % (((/* implicit */int) var_6))))) ? (((3683042825U) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) arr_5 [i_2]))))))) : (min((((/* implicit */unsigned int) var_2)), (arr_1 [i_2 - 1])))));
                    var_11 ^= ((/* implicit */unsigned char) arr_3 [i_0] [i_2 - 1]);
                    arr_6 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)902)) ^ (((/* implicit */int) arr_0 [i_0]))))))))) > ((+(arr_1 [i_2 - 2])))));
                }
                var_12 += ((/* implicit */_Bool) arr_5 [i_1]);
                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4724674363601690334ULL)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) (_Bool)1))))), (4506318556145254667ULL)))) ? ((~(((/* implicit */int) arr_0 [i_1 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 - 1] [i_0]))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)24501))) > (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (14809218496363798933ULL) : (((/* implicit */unsigned long long int) var_7))))));
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 438939664U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))) : ((~(var_7)))))) ? ((~(min((1320149627U), (((/* implicit */unsigned int) (short)-12917)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)14353)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_2)))))));
    var_16 *= ((/* implicit */signed char) (short)-29743);
}
