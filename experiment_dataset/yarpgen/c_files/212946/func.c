/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212946
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_3] = ((((/* implicit */long long int) arr_0 [i_1])) ^ (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */long long int) ((arr_9 [i_3]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))))) : ((+(576460752303422976LL))))));
                            arr_15 [20LL] [i_1] [i_0] [i_3] = ((928661054) * ((~(((/* implicit */int) (((-2147483647 - 1)) == (((/* implicit */int) (unsigned short)0))))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_4 = 3; i_4 < 19; i_4 += 2) 
                            {
                                arr_19 [i_0] [i_1] [15U] [i_0] [i_4 - 3] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)11897))))));
                                var_12 = arr_6 [i_4];
                                var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14251))) : (1193444648257690501ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_0] [i_0])))));
                                var_14 = ((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0 - 1] [i_2] [(_Bool)1] [i_0]);
                                arr_20 [i_0] [i_0] [i_2] [i_2] [i_2] [(unsigned short)10] [i_2] = ((/* implicit */short) ((signed char) arr_0 [i_2]));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 19; i_5 += 4) 
                {
                    for (int i_6 = 1; i_6 < 19; i_6 += 2) 
                    {
                        {
                            arr_26 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)124)) ? (((((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_5] [i_6 + 2])) ? (67108863LL) : (((/* implicit */long long int) 2097120)))) * (((/* implicit */long long int) (+(arr_23 [i_0] [i_1] [(unsigned short)15] [i_6] [i_6])))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((-67108878LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-9))))))))));
                            arr_27 [i_0] [i_1] [i_1] [i_1] [(unsigned short)20] [i_6] = ((/* implicit */short) 39091093U);
                            arr_28 [i_0] [i_1] [i_0] [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)6014))));
                            var_15 -= ((/* implicit */unsigned long long int) (unsigned short)65535);
                            arr_29 [i_0] [15] [i_1] [0U] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0 + 1])) ? (((/* implicit */int) min(((unsigned short)22870), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))) : (((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) (short)-24473))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24461)) ? (arr_9 [i_0]) : (((/* implicit */unsigned int) arr_21 [i_1] [i_5] [i_0]))))) ? ((+(((/* implicit */int) (unsigned short)12)))) : (((/* implicit */int) (signed char)-86)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_10 [i_0 + 1] [i_0 + 1] [i_5] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) -1610324725)) ? (((/* implicit */int) (short)0)) : (arr_6 [i_0 - 1]))) : (arr_12 [i_0 - 1] [i_5 + 1] [i_5 + 2] [i_6 + 2])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) 3319265462U)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((var_4) > (((/* implicit */unsigned long long int) var_0))))))), (((/* implicit */unsigned long long int) ((max((var_9), (((/* implicit */int) var_7)))) / (((((((/* implicit */int) (short)-13786)) + (2147483647))) << (((((var_2) + (734653914698727318LL))) - (22LL))))))))));
    var_17 = ((/* implicit */int) var_4);
}
