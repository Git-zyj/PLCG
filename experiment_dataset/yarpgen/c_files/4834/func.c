/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4834
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
    var_10 |= ((/* implicit */_Bool) 1887121763U);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        arr_3 [(_Bool)1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -4357424918220776269LL)) ? (474150816) : (((/* implicit */int) (unsigned short)64418))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)64418)))) == (((((/* implicit */_Bool) (signed char)87)) ? (var_6) : (((/* implicit */int) (unsigned short)10)))))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            arr_8 [(unsigned char)6] [(unsigned char)6] [i_0] |= ((/* implicit */unsigned short) min((((unsigned char) max((((/* implicit */unsigned short) (signed char)-112)), ((unsigned short)1117)))), (((/* implicit */unsigned char) ((signed char) ((arr_1 [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
            arr_9 [(_Bool)1] = ((/* implicit */int) arr_4 [i_0 - 1]);
            arr_10 [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) << (((((((unsigned int) var_8)) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))))) - (167U)))));
        }
    }
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        arr_14 [i_2] = ((/* implicit */_Bool) (((+(((4238924521U) - (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) + (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_4)))))));
        arr_15 [i_2] = ((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) (unsigned short)1118)), (-1877719802119752147LL)))));
        arr_16 [i_2] = ((/* implicit */unsigned long long int) (+(min((4238924521U), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)67)), ((unsigned short)60722))))))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 10; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 4) 
            {
                {
                    arr_23 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((signed char) (signed char)0));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 2; i_6 < 10; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 3; i_7 < 12; i_7 += 3) 
                        {
                            {
                                arr_30 [i_3] [i_4] [i_5 - 2] [i_3] [i_7] [i_3] = ((/* implicit */unsigned short) ((signed char) (~(((/* implicit */int) (signed char)-67)))));
                                arr_31 [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_24 [i_5 + 2]))));
                                arr_32 [i_7] [i_4] [i_4] [i_4] [i_3] [i_3] = ((/* implicit */_Bool) ((int) var_7));
                            }
                        } 
                    } 
                    arr_33 [i_4] [i_4] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)));
                    arr_34 [i_3] |= ((/* implicit */long long int) (_Bool)1);
                    arr_35 [i_5 - 1] [i_4] [i_4] [(unsigned short)3] = ((/* implicit */unsigned int) ((((_Bool) var_4)) ? ((~(((/* implicit */int) arr_29 [i_3] [i_4] [i_4 + 3] [i_5 - 2] [i_4])))) : (((((/* implicit */int) (short)-27724)) ^ (((/* implicit */int) (unsigned short)65507))))));
                }
            } 
        } 
        arr_36 [i_3] [i_3] = ((/* implicit */int) var_9);
    }
}
