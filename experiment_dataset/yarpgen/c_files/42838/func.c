/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42838
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
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_6))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_19 -= ((/* implicit */unsigned char) ((signed char) ((((((/* implicit */int) arr_3 [i_1])) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [5U]))))))));
            var_20 = ((/* implicit */unsigned char) arr_1 [i_0]);
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_21 = ((/* implicit */signed char) max((((/* implicit */long long int) max((arr_3 [i_2]), (arr_3 [i_1])))), (((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)14))) : (137438953471LL)))));
                        var_22 = ((/* implicit */unsigned short) (unsigned char)246);
                        var_23 = ((/* implicit */signed char) arr_6 [i_0] [i_2]);
                    }
                } 
            } 
        }
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (9223372036854775807LL) : (-9223372036854775778LL)))))));
    }
    var_25 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 1 */
    for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(17016841509606858558ULL)))))))) : (((unsigned int) (!(((/* implicit */_Bool) (unsigned char)255))))))))));
        var_27 = ((/* implicit */signed char) ((((((/* implicit */int) arr_14 [i_4])) < (((/* implicit */int) arr_14 [i_4])))) ? ((+(((/* implicit */int) arr_14 [i_4])))) : (((/* implicit */int) max((arr_14 [i_4]), (arr_14 [i_4]))))));
    }
    var_28 = ((/* implicit */unsigned short) var_9);
}
