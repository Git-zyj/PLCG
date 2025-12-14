/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51199
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
    var_19 ^= ((/* implicit */long long int) min((((/* implicit */unsigned short) var_2)), (var_12)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((signed char) arr_2 [i_0] [i_0])))));
        var_21 -= ((/* implicit */int) ((((/* implicit */int) (unsigned short)65531)) == ((+(((/* implicit */int) (unsigned short)65522))))));
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((int) arr_2 [i_0] [i_0])))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */short) ((max((((/* implicit */long long int) arr_0 [i_1] [i_1])), (var_10))) != (((/* implicit */long long int) min(((-2147483647 - 1)), (2147483647))))));
        arr_6 [i_1] = ((/* implicit */unsigned short) ((unsigned char) (_Bool)1));
        var_23 = ((/* implicit */signed char) max((var_23), (((signed char) var_7))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [(unsigned char)0])) != (((/* implicit */int) (signed char)-106))));
    }
    for (short i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)106)) && (((/* implicit */_Bool) var_6))))), (((unsigned short) max((((/* implicit */unsigned int) (signed char)111)), (var_15))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                {
                    var_26 -= ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        for (signed char i_6 = 3; i_6 < 15; i_6 += 1) 
                        {
                            {
                                var_27 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_6 + 1] [i_6 - 3])))))));
                                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) max(((~(((/* implicit */int) arr_11 [i_2] [i_3] [i_4])))), (((/* implicit */int) min((arr_9 [i_2] [i_3] [i_6 - 1]), (arr_0 [i_4] [i_2])))))))));
                                var_29 = ((signed char) ((signed char) arr_14 [i_6 - 3] [i_6] [(short)9] [i_6 - 3]));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_30 += ((/* implicit */int) ((((/* implicit */int) ((_Bool) ((2147483643) / ((-2147483647 - 1)))))) != ((+(((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]))))));
        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) max((((/* implicit */long long int) ((unsigned int) arr_13 [(unsigned short)9] [i_2] [i_2] [i_2]))), (max((arr_2 [i_2] [i_2]), (arr_2 [i_2] [i_2]))))))));
        arr_21 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2]))));
    }
    var_32 = ((/* implicit */unsigned short) var_15);
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        for (signed char i_8 = 1; i_8 < 12; i_8 += 4) 
        {
            {
                var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((/* implicit */unsigned int) max((((/* implicit */int) arr_13 [i_7] [i_7] [i_7] [i_7])), (((((/* implicit */int) (unsigned short)65515)) + (((/* implicit */int) (signed char)-106))))))) % (arr_19 [i_8 + 2] [(unsigned char)2] [i_8 + 2] [i_8 + 2]))))));
                var_34 += ((/* implicit */unsigned int) ((((unsigned long long int) ((unsigned short) (signed char)-42))) ^ (min((((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) var_15))))), (arr_1 [i_8] [i_7])))));
                var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) arr_2 [i_8 + 1] [i_8]))));
            }
        } 
    } 
}
