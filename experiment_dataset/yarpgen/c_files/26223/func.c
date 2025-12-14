/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26223
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
    var_18 = var_2;
    var_19 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) 156422228))))) || (((/* implicit */_Bool) (~(var_7)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)31))))) && (((/* implicit */_Bool) (~(var_6))))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_7)) ? (17179860992LL) : (((/* implicit */long long int) var_1))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [2] [2] |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [(unsigned char)18])) | (((/* implicit */int) arr_4 [i_1]))));
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((arr_2 [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_5 [8LL] [8LL] [i_1] [8LL])) < (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [(signed char)1] [i_2 - 1] [i_2 + 1])) != (var_8))))))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_7 [i_0] [i_1] [i_2 + 1]);
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_8))));
    }
    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        var_22 = ((/* implicit */long long int) ((((2083953210U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [(_Bool)1] [i_3]))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-35))))) & (var_13))))));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_2)) >= (((/* implicit */int) (unsigned char)16)))) ? (((((var_8) & (((/* implicit */int) (signed char)-40)))) * (((/* implicit */int) ((6686708454080973382LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)31)))))))) : (((/* implicit */int) max((((/* implicit */signed char) ((1574028494U) == (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))), ((signed char)37))))));
        arr_14 [i_3] [i_3] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_3]))))) ? (arr_2 [i_3]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_3])) | (((/* implicit */int) arr_1 [i_3]))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 2) 
    {
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            {
                var_23 = ((/* implicit */_Bool) min((var_23), (((((/* implicit */unsigned int) var_5)) > (min((min((((/* implicit */unsigned int) (short)-13839)), (944466396U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4126775259484933534ULL)) ? (-1100768339) : (((/* implicit */int) (signed char)39)))))))))));
                arr_20 [i_4] = ((/* implicit */unsigned short) arr_16 [i_4]);
            }
        } 
    } 
    var_24 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2196789388U)) ? (((/* implicit */int) (short)-13228)) : (((/* implicit */int) (signed char)31)))) + (((/* implicit */int) ((1574028494U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)42))))))))) ? (((((/* implicit */int) var_9)) * (((/* implicit */int) ((var_7) > (((/* implicit */unsigned long long int) var_12))))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)13228)) && (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) min((var_15), ((_Bool)1))))))));
}
