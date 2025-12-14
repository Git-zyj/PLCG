/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28754
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] &= 1110089139U;
        var_17 |= ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 3])))) >= (((/* implicit */int) arr_1 [i_0 - 1]))));
    }
    for (unsigned int i_1 = 1; i_1 < 8; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)127))))) ? (((((/* implicit */int) arr_3 [i_1 + 3])) >> (((((/* implicit */int) (unsigned short)30445)) - (30421))))) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_8 [i_1])) ? (((((/* implicit */int) var_9)) - (((/* implicit */int) var_1)))) : (((/* implicit */int) max((var_13), ((unsigned short)65408)))))), (((/* implicit */int) var_16))));
            var_19 = ((/* implicit */signed char) arr_1 [i_1 + 3]);
        }
    }
    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (arr_1 [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) arr_11 [i_3])))))) : (1160650080U)))) && (((/* implicit */_Bool) var_6))));
        arr_12 [i_3] = ((((/* implicit */_Bool) (unsigned short)65409)) ? (((unsigned int) (-(((/* implicit */int) (signed char)127))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3]))));
        var_21 = ((/* implicit */unsigned short) arr_0 [i_3 + 3] [i_3 + 3]);
        var_22 = ((/* implicit */short) max((arr_11 [i_3]), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                {
                    var_23 += min((max((((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65408))) : (1673506226U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)13028))))))), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_2)))) ? (1240804030) : (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_5] [i_4] [i_3 + 3])) || (((/* implicit */_Bool) var_3)))))))));
                    arr_21 [i_3] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_15 [i_3 + 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_5] [i_3] [i_3] [i_3])))))))));
                    arr_22 [i_3 + 2] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_20 [i_4] [i_3]))))))), (var_15)));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned char) var_11);
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)19357)) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_2)) % (((/* implicit */int) (unsigned short)61880))))))) : ((+(min((12097624798350634474ULL), (((/* implicit */unsigned long long int) var_13))))))));
}
