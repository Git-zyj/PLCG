/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37768
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */signed char) ((unsigned short) ((arr_3 [i_1 - 1] [i_0 + 3]) >= (arr_3 [i_1 - 1] [i_0 - 1]))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) max((2715208124241384550LL), (((/* implicit */long long int) ((min((2715208124241384550LL), (-2715208124241384550LL))) >= (((2715208124241384531LL) / (((/* implicit */long long int) ((/* implicit */int) (short)8160))))))))));
                                arr_15 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) -2715208124241384531LL)) || (((/* implicit */_Bool) (unsigned char)255))))) << ((((-(2715208124241384550LL))) + (2715208124241384555LL)))));
                                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) (signed char)-86))));
                                arr_16 [i_3] [i_3] [i_3] [i_3] [(_Bool)1] = ((/* implicit */short) max((-314019657994797089LL), (((/* implicit */long long int) 3581576271U))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))) - (2170343720U))) != (((/* implicit */unsigned int) (~(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)15)))))))));
                }
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_0 - 1] [15ULL] [i_1 - 1] [i_1])))) / (((/* implicit */int) arr_13 [i_0] [i_0] [i_0 - 1] [i_0 + 4] [i_1 - 1] [i_0]))));
                    var_16 = ((signed char) -824150864669397621LL);
                }
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned int) ((((var_6) + (((/* implicit */long long int) ((int) arr_9 [i_0] [i_0] [i_0] [i_0]))))) >= (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)69)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_7 = 1; i_7 < 19; i_7 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_1 - 1] [i_1 - 1] [i_1])) && (((/* implicit */_Bool) var_0))));
                        var_19 = ((/* implicit */unsigned long long int) ((arr_23 [i_7 + 1] [i_0 + 3] [i_1 - 1] [i_7 + 1] [i_1] [i_0]) != (((/* implicit */unsigned int) ((arr_0 [i_1 - 1]) ? (((/* implicit */int) arr_8 [i_0 + 3] [18ULL])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_6] [i_0] [(short)0])))))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)69)) || (((/* implicit */_Bool) arr_13 [i_1 - 1] [i_7 + 1] [i_7 + 1] [i_7] [i_7] [i_7 + 1]))));
                        var_21 = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_0 + 2] [i_0 - 1])) - (((/* implicit */int) arr_8 [i_0] [i_0 + 4]))));
                        var_22 = ((/* implicit */short) ((arr_6 [i_0 - 1] [i_1 - 1] [i_7 - 1]) && (((/* implicit */_Bool) (unsigned char)84))));
                    }
                    var_23 += ((/* implicit */short) (!(((/* implicit */_Bool) (+(arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] [i_6]))))));
                    var_24 = ((/* implicit */unsigned long long int) (unsigned char)187);
                    var_25 = ((/* implicit */int) ((short) ((var_10) || (((/* implicit */_Bool) 1073741824)))));
                }
                var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
                var_27 ^= ((/* implicit */long long int) arr_4 [4ULL] [i_1 - 1] [(unsigned short)15]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_8 = 2; i_8 < 14; i_8 += 2) 
    {
        for (short i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            {
                var_28 ^= ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)69))) + ((+(4294967295U))));
                arr_28 [i_9] = ((/* implicit */unsigned long long int) (unsigned char)16);
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned char) (-(var_6)));
}
