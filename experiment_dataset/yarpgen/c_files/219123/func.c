/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219123
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
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 2) /* same iter space */
                {
                    var_11 = ((/* implicit */unsigned int) var_0);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_1] [16ULL] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            arr_16 [i_1] [i_1] [i_2 + 2] [i_1] [i_4] [(signed char)8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)198)))))));
                            var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)58))));
                        }
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            arr_20 [i_0] [i_0] [3ULL] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_2 + 2] [i_2 + 2]))) : (var_8)));
                            arr_21 [i_0] [i_1] [15LL] [2ULL] [i_1] [i_0] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_1))))));
                            var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [(signed char)18] [i_3] [i_2] [i_0] [i_0] [13U])) & (((/* implicit */int) arr_8 [i_2 + 2] [i_1] [i_2 - 1]))));
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_3] [i_0])) ? ((-(((/* implicit */int) (unsigned char)57)))) : (((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) arr_2 [2ULL] [i_1] [i_2]))))));
                            arr_22 [i_1] [0U] [i_1] [i_2] [i_3] [i_5] [i_5] = ((/* implicit */long long int) 1353919593671392328ULL);
                        }
                    }
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        arr_25 [i_1] [i_1] [7U] [i_6] = ((/* implicit */signed char) (unsigned char)67);
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (signed char)16))));
                            arr_28 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_3))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)15210)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)20))))), (max((((/* implicit */unsigned int) (unsigned char)197)), (var_7)))))));
                        }
                        for (signed char i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            var_16 = ((/* implicit */signed char) (-(var_7)));
                            var_17 = var_4;
                            var_18 *= ((/* implicit */signed char) min((18446744073709551609ULL), (7ULL)));
                        }
                        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)57))) : (3464162330U))))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)57)))))) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) arr_2 [i_2 + 1] [i_1] [i_2 + 2]))))) ? ((((!(((/* implicit */_Bool) (signed char)77)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_6] [i_1])))))) : (arr_6 [i_1] [10ULL] [i_6]))) : ((((!(((/* implicit */_Bool) 2449688669U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)180), (((/* implicit */unsigned char) (signed char)-3)))))) : (arr_9 [i_2 + 1] [i_2 + 1] [i_2 - 1])))));
                        var_21 = ((/* implicit */unsigned int) min((0ULL), (8343838104765643610ULL)));
                    }
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-17)))))));
                }
                for (unsigned long long int i_9 = 1; i_9 < 17; i_9 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        var_23 = ((/* implicit */long long int) (signed char)-30);
                        arr_40 [i_0] [i_1] [i_9 + 3] [i_9] [i_1] = ((/* implicit */unsigned char) ((((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)111))))) == (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_9 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)30))) : (var_7)))));
                    }
                    var_24 = (unsigned char)210;
                }
                arr_41 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_0]))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [0U])) ? (var_1) : (min((arr_33 [i_0] [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) (signed char)6)))))));
            }
        } 
    } 
    var_25 = min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4294967295U)), (var_1)))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
}
