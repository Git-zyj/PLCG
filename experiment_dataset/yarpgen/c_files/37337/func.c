/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37337
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
    var_12 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 8661418536467948549LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (8661418536467948549LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_1 [i_0] [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) >> (((arr_1 [i_0] [i_0]) - (10980807921319032710ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)203)))))) : (min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_0))))));
        arr_4 [i_0] |= ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0])) ^ (((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_2 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((var_7) > (((/* implicit */int) (signed char)6))));
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_14 [i_3] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 1]))) / (8661418536467948549LL)))) ? (((/* implicit */int) (signed char)-42)) : (2135461261))), (((/* implicit */int) (signed char)3))));
                        var_14 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) -2135461262)), (arr_9 [i_1 + 2] [i_1 + 2] [i_3] [i_3 - 1]))) & (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)53715)) % (576205402))))));
                        var_15 = ((/* implicit */signed char) -2135461261);
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [(unsigned short)18] [i_3])) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) max((arr_6 [i_1 - 1] [i_1] [(unsigned short)4]), (((/* implicit */unsigned short) (signed char)-52)))))));
                        arr_15 [i_0] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */signed char) max((((2135461256) + (arr_7 [i_1 + 1]))), (arr_7 [i_1 - 2])));
                    }
                } 
            } 
        } 
    }
}
