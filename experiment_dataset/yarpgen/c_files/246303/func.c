/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246303
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
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) var_7))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [4LL] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */signed char) (-((-((((_Bool)0) ? (((/* implicit */unsigned long long int) 2241711004U)) : (var_5)))))));
                        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) max((((((/* implicit */_Bool) 2241710996U)) ? (2488982475U) : (2053256291U))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_1]))) * (2241711000U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)7)) / (((/* implicit */int) arr_5 [(unsigned short)7] [(unsigned short)7] [(unsigned short)7] [i_0]))))))))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) 2241710998U);
        var_13 = (-(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [13] [i_0])) ? (((((/* implicit */_Bool) arr_0 [(signed char)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (var_8))) : (((2053256294U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))));
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
        {
            arr_16 [i_0] [i_0] [i_4] = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_4] [i_4] [i_4]);
            var_14 = ((/* implicit */unsigned short) ((_Bool) (+((-(var_10))))));
            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 2241711004U)))) && ((!(((/* implicit */_Bool) arr_7 [i_0] [(signed char)3] [i_0] [i_0] [i_0] [0]))))))))))));
            var_16 = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((long long int) var_5))) * ((+(arr_9 [i_0] [i_0] [(unsigned char)6] [(unsigned char)6])))))));
        }
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned long long int) var_1);
            arr_20 [i_0] = ((/* implicit */int) max((((/* implicit */long long int) max((arr_5 [i_0] [i_0] [i_5] [i_5]), (((/* implicit */unsigned char) arr_17 [i_0] [i_0] [(_Bool)1]))))), (((long long int) (!((_Bool)1))))));
            arr_21 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_3)))) * (((/* implicit */int) arr_5 [i_0] [i_0] [i_5] [i_5]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15189)) ? (2241711000U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))))));
        }
        var_18 = ((/* implicit */short) ((long long int) ((long long int) arr_9 [i_0] [i_0] [7U] [(_Bool)1])));
    }
    for (long long int i_6 = 3; i_6 < 11; i_6 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            var_19 = (unsigned char)137;
            arr_27 [i_7] = ((/* implicit */short) var_4);
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(var_5))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)5466)))))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6] [(unsigned char)3])))));
        }
        for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) var_3);
            var_22 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 9000093743611983089LL)) ? (3LL) : (((/* implicit */long long int) min((3792891017U), (((/* implicit */unsigned int) (signed char)-27))))))), (((/* implicit */long long int) 23U))));
            arr_30 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) (~(-9000093743611983093LL)));
            arr_31 [i_6 + 1] [i_6] [i_8] = arr_18 [i_6 + 4] [(unsigned short)2];
        }
        var_23 = ((/* implicit */unsigned long long int) var_0);
    }
    var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)31494))));
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)12241)) ? ((~((+(var_5))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)0)))))));
}
