/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24715
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_4 = 4; i_4 < 14; i_4 += 2) 
                        {
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_12 [i_3] [i_1] [i_3] [i_4] [i_4]))));
                            arr_14 [i_4 + 2] = ((/* implicit */long long int) 65408);
                            var_18 = (unsigned char)202;
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_10 [i_0 + 2])))))));
                        }
                        for (short i_5 = 2; i_5 < 12; i_5 += 2) 
                        {
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_16 [i_0 + 1] [(_Bool)1] [i_1] [i_2] [(signed char)7] [i_3] [i_5]))));
                            var_21 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) -1873115788)) ? (((/* implicit */unsigned long long int) -1873115788)) : (arr_1 [i_1] [i_5 + 1]))), (arr_1 [i_3] [i_1])));
                        }
                        arr_18 [i_0] [i_1] = ((/* implicit */long long int) (signed char)(-127 - 1));
                        arr_19 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 + 2] [i_0 + 1])) ? (((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_6 [i_0 + 2] [i_0 - 1] [i_0 + 1])))) : (((/* implicit */int) arr_6 [i_0 + 2] [i_0 - 1] [i_0 - 1]))));
                        arr_20 [i_0 + 1] [i_0 + 2] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) ((_Bool) ((((((/* implicit */int) (short)32767)) * (((/* implicit */int) (_Bool)0)))) * (((((/* implicit */_Bool) 36028797018962944ULL)) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) arr_6 [i_0 - 1] [i_1] [i_3])))))));
                    }
                    for (unsigned short i_6 = 4; i_6 < 15; i_6 += 4) 
                    {
                        arr_24 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1873115757)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) << (((((((/* implicit */_Bool) -1873115788)) ? (1873115788) : (((/* implicit */int) var_11)))) - (1873115771)))))) : ((-(arr_3 [i_0 + 1])))));
                        arr_25 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)253)) & (((/* implicit */int) (_Bool)0)))))));
                    }
                    arr_26 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)223)))))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
                    arr_27 [i_0] [i_1] = ((/* implicit */short) 4380866641920LL);
                    var_22 -= ((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1]);
                    arr_28 [i_0] [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */_Bool) (+((-((((_Bool)1) ? (1873115788) : (((/* implicit */int) (unsigned char)3))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (int i_7 = 1; i_7 < 21; i_7 += 2) /* same iter space */
    {
        var_23 = 0LL;
        var_24 = ((/* implicit */long long int) (-((-(-6)))));
        var_25 -= ((/* implicit */_Bool) (~(((max((-9223372036854775800LL), (((/* implicit */long long int) 1873115802)))) << (((((((/* implicit */_Bool) (unsigned short)65521)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)253)))) - (14847)))))));
    }
    for (int i_8 = 1; i_8 < 21; i_8 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 22; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    var_26 = ((((/* implicit */_Bool) (~(arr_35 [i_8 - 1] [i_8 + 1])))) ? ((-(9223372036854775807LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_33 [i_9] [i_10]))))));
                    arr_40 [i_10] = ((/* implicit */short) (unsigned short)65533);
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) max((((/* implicit */long long int) 60324702U)), (-3LL))))));
    }
    for (int i_11 = 1; i_11 < 13; i_11 += 3) 
    {
        arr_44 [i_11 + 1] = ((/* implicit */long long int) arr_16 [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 1] [(unsigned short)5] [i_11] [i_11]);
        var_28 = ((/* implicit */long long int) (+((+(-6)))));
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((-1873115769) / (1873115769)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 2077721734U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) (short)15360)) : (((/* implicit */int) (_Bool)1))))) : (var_10))))));
        var_30 = (~(1873115785));
        var_31 = arr_16 [i_11] [3LL] [i_11] [i_11] [i_11 - 1] [i_11] [i_11 - 1];
    }
    var_32 = ((/* implicit */unsigned int) var_9);
    var_33 = ((/* implicit */int) var_10);
}
