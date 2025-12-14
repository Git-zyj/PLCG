/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26729
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    var_20 = ((/* implicit */short) (unsigned short)44024);
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-11014)) ? (((/* implicit */int) (unsigned short)64157)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))) : (((unsigned int) max((var_14), (((/* implicit */int) (unsigned char)0)))))));
                    var_22 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (((-(((/* implicit */int) var_5)))) >= (((/* implicit */int) (unsigned char)165)))))));
                    arr_11 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (unsigned char)128);
                }
                for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    arr_15 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [i_1] [i_1]), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)18)) > (((/* implicit */int) (unsigned char)4))))))))) ^ (15110317502583490843ULL)));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_1] [(unsigned char)10] [i_0] [i_0] = arr_1 [i_0] [i_0];
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_0 [i_3]))));
                                var_24 = (_Bool)1;
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    var_25 = ((/* implicit */signed char) (unsigned char)3);
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 12; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */short) ((((/* implicit */int) (signed char)55)) << (((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) == (12178391284035542ULL))))));
                                arr_27 [i_0] [i_0] [i_1] [i_0] [i_1] [(short)1] = ((/* implicit */short) var_0);
                            }
                        } 
                    } 
                    arr_28 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((short) var_8));
                }
                arr_29 [i_1] [i_1] = ((/* implicit */signed char) max((arr_19 [i_1 + 1] [7U] [(short)2] [i_1] [i_1]), (((/* implicit */unsigned long long int) 32767LL))));
                var_27 = ((/* implicit */unsigned int) arr_16 [(short)4] [i_1] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_0]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_9 = 2; i_9 < 12; i_9 += 1) 
    {
        var_28 -= ((/* implicit */unsigned long long int) var_11);
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (+(((/* implicit */int) (short)7042)))))));
        arr_33 [9U] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_9])) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))))))) < (max((((/* implicit */unsigned long long int) var_1)), (arr_26 [i_9] [i_9] [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 1] [i_9])))));
    }
}
