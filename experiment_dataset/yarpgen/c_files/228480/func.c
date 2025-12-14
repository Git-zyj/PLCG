/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228480
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
    var_15 = ((/* implicit */short) max((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */int) var_12))))) ? (-4479605094532029589LL) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)225), (((/* implicit */unsigned char) var_12))))))))));
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)225)) ? (((((/* implicit */int) (unsigned char)30)) / (((/* implicit */int) (signed char)56)))) : (((/* implicit */int) var_10))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_9 [i_0 + 2] [i_0] [i_0 + 2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (var_14)));
                    var_18 ^= ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_0] [i_1]))));
                }
            } 
        } 
    }
    for (signed char i_3 = 1; i_3 < 13; i_3 += 2) 
    {
        var_19 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_3 - 1] [(signed char)4])) / (((/* implicit */int) arr_4 [i_3 - 1] [(_Bool)1])))) % (((((/* implicit */int) arr_10 [i_3])) - (((/* implicit */int) var_6))))));
        arr_14 [i_3] = ((/* implicit */signed char) (+((-(((/* implicit */int) max((var_6), ((signed char)47))))))));
        /* LoopNest 2 */
        for (long long int i_4 = 3; i_4 < 15; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (signed char)-47))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 2; i_6 < 14; i_6 += 2) 
                    {
                        for (int i_7 = 2; i_7 < 15; i_7 += 3) 
                        {
                            {
                                arr_26 [i_3] [i_4 - 3] [i_5] [i_4 - 3] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_25 [i_4 + 1] [i_4] [i_3])), (arr_13 [i_4 + 1] [i_4 + 1]))))) + (max((max((0ULL), (var_14))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5839929811551431835LL)) ? (((/* implicit */int) (unsigned char)30)) : (var_2))))))));
                                var_21 ^= ((/* implicit */_Bool) arr_3 [i_7 - 1] [i_6 + 2]);
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned char)30)) ? (((var_10) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) min(((signed char)-125), (arr_18 [i_3] [i_3] [i_5])))))))))));
                                arr_27 [i_3] [i_3] [i_5] [i_6 - 2] [i_7 - 2] [i_7 + 1] [i_3] = ((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */int) (unsigned char)0)), ((~(((/* implicit */int) (unsigned char)247))))))) > (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_3])) / (((/* implicit */int) arr_13 [i_3] [i_3]))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) arr_16 [i_3 + 3]))))) : (((((/* implicit */_Bool) 1770195289)) ? (7926766735834865785LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)47)))))))));
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)7053)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_17 [i_3 + 3] [i_7 - 2] [i_5] [i_3])))) : (((min((-4479605094532029613LL), (((/* implicit */long long int) arr_25 [i_3] [i_3 + 3] [i_3])))) * (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (arr_8 [i_3] [i_3] [i_3]))))))));
                            }
                        } 
                    } 
                    arr_28 [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) var_7);
                    arr_29 [i_3] [i_4 - 1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) -7926766735834865786LL))) ? (((3751670066U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (-1770195289))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (arr_6 [i_3])))) ? (((/* implicit */unsigned long long int) (-(-370831997)))) : ((~(var_7))))))));
                }
            } 
        } 
        arr_30 [i_3] = ((/* implicit */signed char) max((max(((+(((/* implicit */int) (signed char)-56)))), (((((/* implicit */int) var_12)) / (((/* implicit */int) arr_23 [i_3] [i_3] [i_3] [i_3 + 3] [i_3 + 2] [i_3] [i_3 - 1])))))), ((-(-625538650)))));
    }
}
