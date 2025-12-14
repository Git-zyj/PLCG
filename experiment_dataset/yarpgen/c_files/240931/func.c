/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240931
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) var_9);
        var_18 = ((/* implicit */_Bool) min((var_18), ((!(((/* implicit */_Bool) (unsigned char)6))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_0] [10ULL]))));
        arr_4 [i_0] = ((/* implicit */long long int) 3382168907322971818ULL);
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_7 [i_1] = ((max((((/* implicit */long long int) 576117898U)), (-3157616368654726242LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) 2678282666459456888LL)) ? (576117898U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))));
        arr_8 [i_1] [i_1 + 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_0 [i_1 + 1] [i_1 + 1]), (arr_0 [i_1 + 1] [i_1 + 1]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            arr_12 [i_1] = ((/* implicit */short) arr_0 [i_1] [i_1]);
            arr_13 [i_1] [i_1] = ((unsigned int) -3157616368654726258LL);
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((arr_9 [i_2]) && (((/* implicit */_Bool) (signed char)-1)))))));
            var_20 = ((/* implicit */long long int) ((arr_9 [i_1]) || (((/* implicit */_Bool) ((arr_10 [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1]))))))));
        }
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((2678282666459456888LL), (((/* implicit */long long int) var_0))))) == (((17044793529233944918ULL) >> (((((/* implicit */int) (unsigned char)182)) - (163)))))))), (max((17044793529233944918ULL), (((/* implicit */unsigned long long int) arr_9 [(short)2])))))))));
    }
    var_22 = ((/* implicit */int) max((var_22), ((+(((/* implicit */int) (((~(3157616368654726255LL))) <= (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) (_Bool)0))))))))))));
}
