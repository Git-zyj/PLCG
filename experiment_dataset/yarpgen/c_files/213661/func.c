/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213661
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
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 17104219322490424253ULL))) ? (((/* implicit */int) ((((/* implicit */_Bool) 228125675U)) && (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (max((((/* implicit */long long int) var_7)), (((-6535259839506104988LL) / (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_4 [(short)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) var_11)), (var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_3 [i_0])))) : (max((((/* implicit */unsigned long long int) arr_3 [i_0])), (var_3)))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) max(((unsigned short)16384), (max((max(((unsigned short)32752), (((/* implicit */unsigned short) var_10)))), (((/* implicit */unsigned short) max((((/* implicit */short) var_15)), (var_14))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 3; i_2 < 13; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    {
                        arr_17 [i_1] [i_2] [(signed char)8] [i_4] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */int) var_13)) + (((((/* implicit */int) arr_9 [i_4])) + (((/* implicit */int) var_13))))))));
                        arr_18 [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (!(arr_9 [i_2 - 3])))) << (((((/* implicit */int) ((signed char) ((signed char) arr_7 [i_1])))) - (37)))));
                    }
                } 
            } 
        } 
        arr_19 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)32762))))))) ? (((/* implicit */int) (signed char)115)) : (min((((/* implicit */int) max((var_5), (((/* implicit */unsigned short) (signed char)-102))))), (((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) var_5)) - (3702)))))))));
        arr_20 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */short) (signed char)10)), ((short)24546)))) + (((((/* implicit */_Bool) arr_16 [i_1])) ? (arr_16 [i_1]) : (arr_16 [i_1])))));
    }
    for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        var_17 = ((/* implicit */short) arr_1 [i_5]);
        var_18 = ((/* implicit */long long int) 17104219322490424230ULL);
    }
}
