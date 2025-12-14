/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28721
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
    var_14 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (1960968835U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) / (((((/* implicit */_Bool) 13725454538539707716ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_5))))), (((/* implicit */long long int) 1065156517U))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)28068)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) (short)-28068))))))))) : (11259084857342601743ULL)));
                                arr_15 [i_1] [i_3] [9] [9] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_13)) - (var_5)))) ? (((15146989163133270215ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_3 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [16LL] [i_2])), (var_10)))))));
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)28062)) ? (((((/* implicit */_Bool) arr_9 [i_3 - 2] [(short)19] [i_2] [i_0 - 2] [i_4] [i_4 + 3])) ? (((/* implicit */int) arr_9 [i_3 + 1] [i_1] [i_4] [i_0 + 2] [i_4] [i_4 - 1])) : (((/* implicit */int) arr_9 [i_3 - 2] [9] [i_3 - 2] [i_0 - 2] [i_1] [i_4 + 3])))) : ((-(((/* implicit */int) arr_9 [i_3 + 1] [i_1] [i_0] [i_0 - 2] [i_4 + 3] [i_4 - 1]))))));
                                arr_16 [i_1] [i_4 - 1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) ((max((arr_0 [i_4 + 3] [i_4 + 3]), (((/* implicit */long long int) (short)28062)))) != (((/* implicit */long long int) ((/* implicit */int) ((1151811516) == (((/* implicit */int) (_Bool)0))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_5 = 3; i_5 < 20; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 3; i_6 < 19; i_6 += 1) 
                    {
                        for (long long int i_7 = 1; i_7 < 20; i_7 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min((min(((~(9057721579222177416ULL))), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-1)) % (1564173798)))))))));
                                arr_25 [(unsigned short)1] [i_1] [i_6] [i_1] [i_1] [(unsigned short)9] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0 + 3] [i_5 + 2])), (var_7))))));
                                var_18 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)32765)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_18 [i_0 - 1] [i_1] [i_0 - 1]))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_0 + 1] [i_1] [i_1])) && (((/* implicit */_Bool) var_9)))))))) <= (((unsigned int) ((((/* implicit */_Bool) 18446744073709551614ULL)) || (((/* implicit */_Bool) (unsigned char)120)))))));
                    arr_26 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) < (9057721579222177409ULL)))) : (((((/* implicit */_Bool) var_4)) ? (2147483647) : (((/* implicit */int) var_11))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_21 [i_1] [i_1] [i_5])))) ? (((/* implicit */int) ((short) var_13))) : (((((/* implicit */_Bool) arr_5 [i_0] [6ULL])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) arr_14 [i_1] [i_0] [i_5 - 3] [i_5] [17] [i_1])) ? (min((((/* implicit */long long int) arr_24 [(unsigned short)4] [i_1] [i_5])), (arr_21 [14LL] [i_1] [i_5]))) : (arr_21 [i_0 + 3] [i_1] [(signed char)7])))));
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 20; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 21; i_9 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_14 [i_8 - 2] [i_8 - 2] [i_8] [i_8 - 2] [i_8] [i_1]), (arr_14 [i_8 + 1] [i_8] [i_8] [i_8 - 2] [i_8 - 3] [i_1])))) + (((/* implicit */int) max((arr_14 [i_8 - 2] [i_8] [18U] [i_8 - 3] [9ULL] [i_1]), (arr_14 [i_8 - 3] [(signed char)9] [i_8 + 2] [21U] [i_8 - 2] [i_1]))))));
                                arr_31 [i_0] [i_1] [i_0] [i_0] [i_0] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32766)))))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [19ULL] [i_1] [i_5] [i_8 - 1])) ? (((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
                                var_21 = ((/* implicit */unsigned long long int) var_13);
                                var_22 = arr_9 [8LL] [i_1] [(unsigned short)12] [4U] [i_9 - 1] [i_5];
                            }
                        } 
                    } 
                    arr_32 [i_1] [16ULL] [i_5] = ((/* implicit */unsigned short) var_13);
                }
            }
        } 
    } 
    var_23 -= ((/* implicit */unsigned int) var_7);
}
