/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228216
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        arr_9 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                        arr_10 [i_0] [i_0] [i_2] [(unsigned char)9] = ((/* implicit */unsigned char) (((-(((((/* implicit */int) var_6)) >> (((((/* implicit */int) arr_0 [i_0] [i_1])) - (204))))))) & (((/* implicit */int) (short)-28844))));
                    }
                    arr_11 [i_0] [(_Bool)1] [i_1] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (((((/* implicit */_Bool) 2196875771904ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_0])))))), (((((/* implicit */_Bool) min((11229228739529139961ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))))) ? (14670920830429077214ULL) : (((/* implicit */unsigned long long int) 1234220781))))));
                    var_20 ^= ((/* implicit */unsigned int) (_Bool)1);
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_4))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 17; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_6] = ((((/* implicit */_Bool) arr_1 [i_5 + 2] [i_5 - 2])) ? (((/* implicit */int) arr_1 [i_5 - 2] [i_5 - 2])) : (((/* implicit */int) (unsigned short)41477)));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-127))))) & (((2113929216U) << (((((/* implicit */int) var_4)) - (62318)))))));
                            }
                        } 
                    } 
                }
                var_23 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [(signed char)16] [i_1] [(signed char)16])) ? (((((((/* implicit */_Bool) var_5)) ? (var_17) : (((/* implicit */unsigned long long int) var_19)))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_0] [(unsigned short)18])) - (arr_17 [i_1] [i_1] [i_1] [(_Bool)1] [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
                var_24 -= ((/* implicit */unsigned int) (-(((((/* implicit */int) (_Bool)1)) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))))));
                arr_21 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (arr_8 [i_0] [i_1] [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_0] [i_0] [i_0])) ? (var_19) : (((/* implicit */long long int) arr_8 [i_0] [i_1] [i_1] [i_1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_1])) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            for (int i_9 = 1; i_9 < 14; i_9 += 3) 
            {
                {
                    arr_28 [i_8] [i_8] [i_9 - 1] [i_8] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_22 [i_8])), (arr_18 [i_7] [i_7] [i_7] [i_8] [i_9] [i_7])))) <= (((15ULL) << (((/* implicit */int) arr_16 [i_7] [i_7] [i_9]))))))), (var_1)));
                    var_25 = ((/* implicit */signed char) min((((min((((/* implicit */unsigned long long int) var_11)), (var_9))) - (((/* implicit */unsigned long long int) (+(arr_23 [i_9])))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) 595984891))))), (((((/* implicit */_Bool) -6680144973475049435LL)) ? (1234220781) : (((/* implicit */int) arr_13 [i_7] [i_7] [i_7])))))))));
                    arr_29 [i_8] = ((/* implicit */_Bool) arr_18 [i_9 - 1] [13LL] [i_9 + 1] [i_9] [i_9] [i_9]);
                    var_26 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_9] [i_8] [i_7]))))) ? (((/* implicit */int) arr_5 [(signed char)9])) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_0 [4LL] [i_7])))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */int) var_18);
    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) ((unsigned char) var_1))) ? (var_9) : (max((var_17), (((/* implicit */unsigned long long int) (unsigned short)31877)))))))))));
}
