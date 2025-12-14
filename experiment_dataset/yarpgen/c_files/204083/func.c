/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204083
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
    var_17 = ((/* implicit */int) (signed char)125);
    var_18 = ((((/* implicit */int) (signed char)-125)) & (((var_4) & (((/* implicit */int) var_13)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_8 [8LL] [i_3] [8LL] [i_0] [i_3] [i_0] &= ((/* implicit */_Bool) 800131648U);
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_0 - 2] [i_0 - 3] [i_1]))) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) ((unsigned char) (signed char)15))))) : (((/* implicit */int) max((((_Bool) 3115588000U)), ((!(((/* implicit */_Bool) 2508020774U)))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    var_20 = ((/* implicit */long long int) ((unsigned int) 7557697805903394215ULL));
                    var_21 = ((/* implicit */signed char) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)23965))));
                }
                for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    arr_15 [i_1] = ((/* implicit */int) (unsigned short)53999);
                    var_22 = ((/* implicit */long long int) (short)7625);
                    arr_16 [9U] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5] [i_5] [i_5]))) : (3LL))), (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0 - 1] [5LL] [i_0])))))));
                    var_23 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (-1171288333)))) ? (((/* implicit */int) arr_13 [(_Bool)1])) : (((/* implicit */int) arr_9 [i_0] [1LL]))))));
                }
                var_24 = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (41181393)));
                var_25 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)65526))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0 - 2] [i_1])) ? (arr_11 [i_1] [i_0] [i_0] [i_0]) : (arr_11 [i_0] [i_0] [i_0] [i_0]))))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0 - 1])), (arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 1]))))));
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    for (unsigned int i_7 = 1; i_7 < 6; i_7 += 3) 
                    {
                        {
                            var_26 = ((((/* implicit */_Bool) (short)-28406)) ? (arr_20 [i_7] [i_1] [i_0 - 1] [i_7] [i_0] [i_6]) : (((/* implicit */int) ((signed char) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)37270))))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) || (((/* implicit */_Bool) arr_20 [i_7 - 1] [i_0 + 1] [i_0] [(unsigned char)9] [i_0 + 1] [i_0]))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_8 = 1; i_8 < 6; i_8 += 4) 
                            {
                                arr_26 [i_1] [i_1] [i_6] [i_7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_5 [i_0 + 1]))) || (((/* implicit */_Bool) ((long long int) arr_5 [i_0 - 1])))));
                                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */int) var_12)) != (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (short)-7601))))))))));
                            }
                            var_29 = ((/* implicit */unsigned char) (~((~(arr_18 [i_0 - 3] [i_7 - 1] [8U] [i_7 + 3])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */_Bool) (+(var_4)));
    var_31 = (-(((/* implicit */int) min(((unsigned char)119), (((/* implicit */unsigned char) (_Bool)1))))));
}
