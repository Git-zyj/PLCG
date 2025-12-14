/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25402
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
                {
                    arr_9 [i_0] [i_2] [i_0] [i_0] = (+((+(((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (unsigned char)58)))))));
                    var_19 = ((/* implicit */long long int) ((unsigned long long int) var_4));
                }
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        for (int i_5 = 3; i_5 < 15; i_5 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */_Bool) min((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_15 [i_1] [i_3] [i_1])))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_0] [i_0] [i_3] [2]))))) ? (((((/* implicit */int) (signed char)-36)) & (((/* implicit */int) (signed char)-24)))) : (((((/* implicit */int) arr_12 [i_0] [i_0] [(unsigned char)12] [i_0])) | (((/* implicit */int) (short)-16300))))))));
                                arr_19 [i_0] [(unsigned short)3] = (-((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (-2062336267))))));
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)65))) / (arr_11 [i_1 - 4]))) ^ (((/* implicit */long long int) ((arr_10 [i_5 + 2] [i_5 - 1] [7] [(signed char)13]) << (19)))))))));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_1 [i_1 + 1])))) ? (((/* implicit */int) var_16)) : ((-(((/* implicit */int) max(((signed char)-33), (((/* implicit */signed char) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    var_22 |= ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_20 [i_1] = ((/* implicit */unsigned long long int) ((var_6) == (((/* implicit */unsigned long long int) (-(max((((/* implicit */int) var_1)), (-2062336287))))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (-2062336274) : ((-(-381496023)))))) + (var_18))))));
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_0] [i_6] [i_7] [i_0] = ((/* implicit */_Bool) arr_4 [(unsigned short)6]);
                        arr_26 [i_7] [i_6] [i_7] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)30)) ? (arr_10 [(_Bool)1] [i_6] [i_1 - 2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_7] [i_7])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_0] [i_6])) && (((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_6]))))) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_6] [i_7])))), (((/* implicit */int) arr_5 [i_0]))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        arr_29 [i_8] [i_6] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)49152))));
                        arr_30 [i_0] [i_0] [i_6] [10ULL] [i_6] [i_1] = (unsigned short)46669;
                    }
                }
                var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_1 - 4]))))), (((((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) (+(893825907U)))) : (var_6)))));
            }
        } 
    } 
    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) var_17))));
}
