/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193389
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) ((signed char) 3221225472U)))));
            var_18 = ((/* implicit */unsigned short) (~(arr_1 [i_0])));
        }
        for (unsigned long long int i_2 = 4; i_2 < 12; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    for (unsigned short i_5 = 3; i_5 < 11; i_5 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) arr_16 [i_4] [i_2 + 1]);
                            arr_17 [i_4] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((_Bool) var_12));
                        }
                    } 
                } 
            } 
            arr_18 [i_2] [(short)12] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_2 - 2]))));
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 1; i_7 < 12; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        {
                            var_20 -= ((((/* implicit */_Bool) arr_14 [i_2] [i_2 - 3] [i_2] [i_8])) ? (((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [(_Bool)1] [(unsigned short)6] [i_0] [i_7 + 1]))))));
                            var_21 = ((/* implicit */_Bool) ((arr_8 [i_2 - 2] [i_2 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_2] [i_6] [i_0]))) : (arr_21 [i_0] [i_2] [i_2 - 4] [i_7] [i_0] [i_0])));
                            arr_25 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1073741852U)) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) arr_7 [i_2 + 1] [i_2 - 1]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_9 = 3; i_9 < 10; i_9 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (((((/* implicit */_Bool) 7165931539240580365ULL)) ? (4252800316U) : (3221225489U))))))));
            /* LoopNest 2 */
            for (unsigned short i_10 = 2; i_10 < 12; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    {
                        var_23 ^= ((/* implicit */_Bool) 273172441U);
                        var_24 = ((/* implicit */_Bool) -2002101070);
                        var_25 = ((/* implicit */unsigned long long int) arr_5 [i_9] [i_9] [i_11]);
                        var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) var_2)))));
                        var_27 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [(signed char)2] [i_10 + 1]))));
                    }
                } 
            } 
        }
        for (unsigned short i_12 = 3; i_12 < 10; i_12 += 3) /* same iter space */
        {
            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_12 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))) : (((((/* implicit */_Bool) 3221225472U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3))) : (4021794854U))))))));
            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 3221225472U)) ? (((/* implicit */int) (short)-17812)) : (((/* implicit */int) arr_7 [i_12 + 1] [i_12 + 1])))))));
            arr_37 [i_12] = ((/* implicit */unsigned int) ((arr_8 [i_12 - 1] [i_12 - 1]) || (arr_8 [i_12] [i_12 + 2])));
        }
        arr_38 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127))))) ? (((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)25))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        arr_39 [i_0] [12U] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    var_30 = ((/* implicit */long long int) var_7);
    var_31 = ((/* implicit */unsigned long long int) var_11);
    var_32 = ((/* implicit */unsigned int) var_3);
    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((var_5) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17804)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)17809))))))))))));
}
