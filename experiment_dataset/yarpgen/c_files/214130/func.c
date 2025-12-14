/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214130
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
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_8))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-109952016)))) ? (1320267246972656225LL) : (((/* implicit */long long int) 1998624609U))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_17 &= ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [(short)14] [i_1] [i_1])) || (((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)94)) >> (((((/* implicit */int) arr_5 [(unsigned short)7] [i_1] [i_2])) - (225)))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) -7048775533784889422LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                    arr_9 [7LL] [(_Bool)1] [i_2 + 2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) & ((~((~(arr_7 [(unsigned short)9] [i_1] [i_2 - 1])))))));
                    var_18 = ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))))) ? (min((arr_7 [i_2 + 1] [i_2 + 2] [i_2 - 1]), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [1] [i_2 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2 - 1]))))));
                    var_19 += ((/* implicit */int) var_1);
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((((/* implicit */unsigned long long int) var_11)) * (0ULL))) : (((/* implicit */unsigned long long int) -1320267246972656225LL))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2 + 1])) || (((/* implicit */_Bool) arr_6 [i_2 + 2]))))) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) ((arr_3 [(short)16] [i_0]) ? (((/* implicit */int) ((((/* implicit */int) max(((_Bool)1), (var_3)))) == (((((/* implicit */int) arr_6 [i_0])) * (((/* implicit */int) arr_8 [(_Bool)1] [(unsigned char)14] [(unsigned char)14]))))))) : (((/* implicit */int) max((arr_3 [i_0] [i_0]), (((var_11) <= (2888437187U))))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 4) 
    {
        for (unsigned int i_4 = 3; i_4 < 14; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                {
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_5])), (var_12))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3 + 2] [(unsigned short)10] [i_5] [i_3]))) : (var_11))) == (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))))))) : ((+(arr_7 [i_3] [i_3 - 1] [i_4])))));
                    var_23 = ((/* implicit */long long int) (-(((((((/* implicit */_Bool) 2756139497U)) || (((/* implicit */_Bool) 3744657504U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (min((((/* implicit */unsigned int) arr_15 [i_5] [i_4 + 1] [0U] [(signed char)5])), (179604420U)))))));
                }
            } 
        } 
    } 
}
