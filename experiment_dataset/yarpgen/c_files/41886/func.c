/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41886
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
    var_20 = ((/* implicit */unsigned long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) ((((/* implicit */int) var_1)) == (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (signed char)-1))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 ^= ((/* implicit */signed char) var_17);
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */int) ((unsigned short) arr_1 [i_1] [i_2]));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_1] [11U] [i_3] [i_0] [11U] = ((/* implicit */unsigned short) (+(arr_13 [i_0] [i_3 + 2] [i_2] [i_0] [i_4] [i_4 + 1])));
                                var_22 *= ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 1372804832)) / (arr_2 [12U])))) && (((/* implicit */_Bool) var_12)));
                                arr_16 [i_4] [(_Bool)1] [i_0] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (1372804861))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 17; i_5 += 3) 
                    {
                        for (long long int i_6 = 1; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_17 [i_0] [i_5] [i_2] [17] [17] [i_0])))) <= (arr_11 [i_1])));
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_6 - 1] [i_2] [i_5 + 1])) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_5 - 1] [(unsigned char)9]))));
                                var_25 = ((/* implicit */_Bool) (unsigned char)0);
                                var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5 - 1] [i_5])) ? (((/* implicit */int) arr_20 [i_5] [12] [i_5] [i_5 - 1] [i_5] [i_5 - 1])) : (((/* implicit */int) arr_20 [i_5] [8ULL] [8ULL] [8ULL] [i_5] [i_5 - 1])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) /* same iter space */
                    {
                        arr_24 [i_0] [i_1] [i_7] [i_7] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_0] [15U])) : (((/* implicit */int) (_Bool)0)))));
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)22486)) : (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (unsigned char)1)))) : (((/* implicit */int) arr_19 [(_Bool)0] [i_1] [i_1] [i_7])))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) /* same iter space */
                    {
                        arr_27 [i_0] [i_2] [(unsigned short)14] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_17)))))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_2])) ? (((/* implicit */int) (unsigned short)14720)) : (1372804816))) : (((/* implicit */int) arr_6 [i_0] [6] [i_1]))));
                        var_28 |= (unsigned char)131;
                        arr_28 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3231611385U)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)6821))))) : (((/* implicit */int) arr_25 [i_0] [i_2]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            arr_31 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_4 [i_9] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)-71)))) : (1120326824930187204ULL));
                            var_29 *= ((/* implicit */_Bool) var_13);
                        }
                    }
                }
                var_30 = (-(((unsigned long long int) (_Bool)1)));
            }
        } 
    } 
}
