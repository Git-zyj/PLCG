/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212392
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) - (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_17 -= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_3] [7])))))) == ((((_Bool)1) ? (arr_3 [i_3]) : (((/* implicit */unsigned long long int) arr_7 [i_3] [i_3] [i_3] [i_3] [(unsigned char)6] [(short)11])))))));
                            /* LoopSeq 3 */
                            for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                            {
                                var_18 -= ((/* implicit */long long int) var_10);
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_0] [i_2] [i_3] [i_4]))))), (max((((/* implicit */unsigned int) arr_11 [i_0] [i_1 - 1] [i_2] [i_3])), (4294967295U)))));
                                var_19 = ((/* implicit */signed char) (+(max((arr_7 [i_0] [i_0] [i_0] [i_1 - 1] [i_4] [i_3]), (arr_7 [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_4] [i_1])))));
                            }
                            for (signed char i_5 = 4; i_5 < 22; i_5 += 4) 
                            {
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (((-(arr_3 [i_1 - 1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 1] [i_5 - 1] [i_5 - 2]))))))));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_7))));
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)23197)) ? (((min((-5423884179289512698LL), (((/* implicit */long long int) (signed char)36)))) & (((/* implicit */long long int) ((/* implicit */int) arr_15 [(_Bool)1] [i_1] [i_2] [i_3] [i_6]))))) : ((~(max((8889336792943183437LL), (((/* implicit */long long int) var_3)))))))))));
                                var_23 -= max((max((arr_5 [6U] [i_1] [i_1 + 1] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)17572)))), (min((((/* implicit */unsigned long long int) var_0)), (arr_5 [i_0] [i_1] [i_1 - 1] [i_1]))));
                                var_24 = ((/* implicit */short) var_15);
                                arr_18 [i_0] [i_1] [4LL] [i_1] [i_0] [i_3] [i_1] |= ((/* implicit */long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)47963)));
                                var_25 -= ((/* implicit */long long int) arr_9 [(_Bool)1] [i_1 - 1] [i_2] [i_3]);
                            }
                            var_26 -= ((/* implicit */signed char) arr_5 [i_0] [i_2] [i_0] [(unsigned short)20]);
                            var_27 = ((/* implicit */unsigned char) (~(var_15)));
                        }
                    } 
                } 
                var_28 = ((/* implicit */int) max((arr_9 [(_Bool)1] [i_1] [i_1 + 1] [i_1]), (((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_1 + 1] [15LL] [i_1 + 1] [i_0])) != (((/* implicit */int) arr_9 [6ULL] [13LL] [i_1 - 1] [i_0])))))));
                var_29 -= max((((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [4LL] [4LL] [i_0]))))), (arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1])))), (max((((long long int) arr_11 [i_1 - 1] [i_0] [i_0] [i_0])), (((/* implicit */long long int) 4294967295U)))));
                arr_19 [(unsigned short)22] [i_0] = min((((/* implicit */int) (!(arr_1 [i_1 + 1])))), ((-2147483647 - 1)));
                var_30 = ((/* implicit */unsigned char) (signed char)-10);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 23; i_7 += 3) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            {
                var_31 *= ((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) 2147483647))));
                var_32 = min((min((((/* implicit */unsigned long long int) max(((unsigned short)56579), (((/* implicit */unsigned short) var_14))))), ((+(0ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (-1371551012)))) < (min((3059943299258039123LL), (-7652444548317423768LL)))))));
                var_33 = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_10 [i_7] [i_7] [i_7] [i_7] [(_Bool)1])))) * ((+(((/* implicit */int) (unsigned char)255))))));
            }
        } 
    } 
    var_34 = ((/* implicit */int) ((signed char) max((((2147483647) << (((((/* implicit */int) (short)5)) - (5))))), ((-(((/* implicit */int) (short)-32742)))))));
}
