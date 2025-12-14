/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22792
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
    var_15 = ((/* implicit */unsigned int) (-(min((min((var_10), (((/* implicit */unsigned long long int) (signed char)64)))), (((/* implicit */unsigned long long int) var_14))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned short) arr_2 [i_0])))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [(signed char)9]))) == (((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-6644))) : (4641962019623948984LL)))))) : ((~(((/* implicit */int) (unsigned short)2298))))));
        var_17 = ((/* implicit */unsigned short) max((var_17), ((unsigned short)65535)));
        arr_3 [i_0] = ((/* implicit */signed char) max((2130405830068056574ULL), (((/* implicit */unsigned long long int) (unsigned char)229))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((unsigned short) ((((/* implicit */_Bool) (unsigned short)34715)) ? (-6119994660593344746LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        var_18 = ((/* implicit */unsigned int) 18446744073709551608ULL);
        var_19 = arr_5 [i_1];
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (long long int i_3 = 4; i_3 < 19; i_3 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_3 - 4] [i_3 + 1])) == (((/* implicit */int) arr_8 [i_3 + 3] [i_3 + 2]))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (short)24671)) != (((/* implicit */int) (short)-21454)))))));
                                var_22 = ((/* implicit */unsigned short) (unsigned char)107);
                                var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0))));
                                var_24 += ((/* implicit */unsigned char) ((arr_20 [i_5]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)95))) : (arr_17 [i_3] [i_2] [i_5] [i_4] [i_5])));
                                var_25 = ((/* implicit */unsigned char) (short)21816);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (unsigned char)160))));
                                var_27 = (unsigned short)38528;
                                var_28 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [9LL] [9LL] [10ULL]))))) <= (((((/* implicit */_Bool) (unsigned short)21780)) ? (arr_21 [2] [i_2] [i_6] [i_7]) : (arr_18 [i_1] [i_1]))));
                                var_29 -= ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) (short)-32027)))));
                                var_30 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)25576)) ? (3947030983U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55540))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-28597)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_31 = ((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_1] [(signed char)13] [i_1] [i_1] [i_1] [i_1] [i_1])) | (arr_21 [i_1] [i_1] [i_1] [i_1])));
    }
    var_32 |= ((/* implicit */long long int) (_Bool)1);
}
