/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25450
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
    var_16 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */int) (unsigned char)149)) : (max((var_15), (((/* implicit */int) (unsigned char)166)))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_6)) | ((((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)97))) : (15229344941266575189ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) min((var_2), (((/* implicit */long long int) (-(max((0U), (((/* implicit */unsigned int) (unsigned char)161)))))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)86)) ? (15229344941266575198ULL) : (((/* implicit */unsigned long long int) -1840495196))));
    }
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        arr_10 [(unsigned short)6] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)148)) == (((/* implicit */int) (!(((/* implicit */_Bool) (+(15229344941266575189ULL)))))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) max((2096640U), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_2)) ? (-752048062) : (((/* implicit */int) var_3)))), (((/* implicit */int) (unsigned char)143)))))));
                    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)10))))) : (((((/* implicit */_Bool) 2305843009213691904ULL)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) (+(arr_11 [i_2] [(signed char)9])));
        arr_17 [i_2] = max((((((((/* implicit */int) (unsigned char)133)) + (((/* implicit */int) arr_16 [i_2] [(unsigned short)5] [i_2])))) ^ (((/* implicit */int) arr_15 [i_2] [i_2] [i_2])))), ((+(((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned char)166)))))));
        var_20 -= ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52833)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7))) : (var_6)))) ? (((unsigned int) arr_4 [i_2])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) var_5)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (unsigned short)18))))))));
    }
    var_21 ^= ((/* implicit */unsigned short) (unsigned char)94);
}
