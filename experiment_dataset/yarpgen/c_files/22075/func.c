/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22075
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) < (var_11)));
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) var_4)))) - (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_2)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_3] [i_1] [i_3] = ((/* implicit */unsigned short) min((((arr_10 [i_2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (max((((/* implicit */unsigned long long int) var_11)), (arr_10 [i_3])))));
                                var_14 += ((/* implicit */short) ((((/* implicit */int) max((arr_1 [i_2] [i_1]), (var_4)))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_5))))) < ((+(((long long int) (_Bool)0)))))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */_Bool) 2337657756U);
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_5 = 1; i_5 < 16; i_5 += 4) 
    {
        arr_18 [i_5 - 1] [(signed char)11] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_5]))))) > (arr_16 [i_5 - 1])));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-4741)) != (((/* implicit */int) var_6)))))));
        var_18 = ((/* implicit */unsigned char) (signed char)71);
    }
    for (signed char i_6 = 1; i_6 < 19; i_6 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6 + 1] [i_6]))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) (-(((int) (signed char)71)))))));
        var_20 = ((/* implicit */long long int) ((((_Bool) (_Bool)1)) ? (((((/* implicit */int) arr_21 [i_6] [i_6])) + (arr_19 [i_6 - 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_6 + 1])))))));
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_26 [i_7] = ((/* implicit */_Bool) (short)-18216);
            arr_27 [i_6] [i_6] &= ((/* implicit */unsigned short) ((max((arr_20 [i_6 + 1]), (arr_20 [i_6 + 1]))) << (((arr_22 [i_6] [i_6]) - (2014147658)))));
        }
        var_21 = ((/* implicit */short) ((unsigned int) (signed char)71));
    }
    for (signed char i_8 = 1; i_8 < 19; i_8 += 2) /* same iter space */
    {
        var_22 = (signed char)92;
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-101)))))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [7U] [7U] [i_8])))))) - (((arr_28 [i_8 - 1] [i_8]) - (((/* implicit */unsigned int) var_10))))))) ? ((+(((/* implicit */int) arr_23 [i_8] [i_8 - 1] [i_8 - 1])))) : (((int) arr_28 [i_8 - 1] [i_8 + 1]))));
    }
}
