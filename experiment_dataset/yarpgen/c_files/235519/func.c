/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235519
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
    var_16 &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12)))), (var_11)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((unsigned long long int) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)58)))))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 3843905365U)) ? (10783984005176469430ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (short i_3 = 3; i_3 < 8; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) arr_1 [i_0 + 2] [i_2]);
                        arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(((max((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (3843905365U))) << (((((/* implicit */int) ((unsigned char) (unsigned char)198))) - (183)))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1))));
    }
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        for (signed char i_5 = 3; i_5 < 22; i_5 += 4) 
        {
            {
                arr_17 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (var_13)))) ? (min((2840847984U), (((/* implicit */unsigned int) (_Bool)1)))) : (((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)105))) : (arr_15 [i_4] [i_4] [i_4])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_16 [i_5 - 1] [i_5 - 3]))))) : (max((arr_15 [i_4] [i_4] [i_4]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3810757586U)) || (((/* implicit */_Bool) var_4)))))))));
                arr_18 [i_4] &= ((/* implicit */unsigned char) (short)23559);
            }
        } 
    } 
}
