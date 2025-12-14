/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234537
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
    var_20 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_17)) ? (((8355840U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)24)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) min(((+(((/* implicit */int) (signed char)-125)))), (((/* implicit */int) arr_4 [i_1]))));
                var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                var_23 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) != ((~(var_0))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 2; i_2 < 14; i_2 += 2) 
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_11)))))))) * (((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_1 [i_2])), (var_17)))) ? (((/* implicit */unsigned int) ((int) (unsigned short)1731))) : (min((((/* implicit */unsigned int) var_17)), (4294967295U)))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 3; i_3 < 14; i_3 += 1) 
        {
            for (signed char i_4 = 4; i_4 < 14; i_4 += 4) 
            {
                {
                    var_25 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)1732))))), (min((var_0), (((/* implicit */unsigned long long int) var_16))))))));
                    var_26 = (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)-1)))))));
                }
            } 
        } 
        arr_13 [i_2] = ((/* implicit */unsigned int) var_5);
        var_27 = ((/* implicit */signed char) var_12);
        /* LoopNest 2 */
        for (signed char i_5 = 4; i_5 < 14; i_5 += 4) 
        {
            for (unsigned int i_6 = 1; i_6 < 13; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 12; i_8 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_18)) ^ (((/* implicit */int) arr_8 [i_8 - 1] [i_8 + 3]))))));
                                arr_24 [i_2 - 1] [i_2] [i_5 - 1] [i_5] [i_8] [i_7] [i_5 - 1] = ((/* implicit */long long int) (+((~(((((/* implicit */int) var_15)) ^ (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    arr_25 [i_2] [i_5] [i_6 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)1745))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_16 [i_5] [i_2]))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_8)))))));
                }
            } 
        } 
    }
    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 3) 
    {
        arr_28 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_19)) + (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) max((((/* implicit */short) var_18)), (var_13))))))) ? (((((((/* implicit */_Bool) (short)31)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_1)))) | (((/* implicit */int) var_15)))) : (((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (signed char)-116))))));
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 22; i_10 += 4) 
        {
            for (signed char i_11 = 0; i_11 < 22; i_11 += 1) 
            {
                {
                    arr_33 [i_9] [i_10] [i_9] = ((/* implicit */unsigned short) max((arr_26 [i_9]), (((/* implicit */unsigned int) min(((unsigned short)19082), (((/* implicit */unsigned short) var_19)))))));
                    var_29 = (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)63805)) > (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_31 [(unsigned short)8] [i_10]))))))));
                }
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned short) var_6);
}
