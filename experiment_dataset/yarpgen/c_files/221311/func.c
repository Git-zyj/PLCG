/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221311
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
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) min(((~(((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_0)))))), (((/* implicit */int) var_0)))))));
    var_12 = ((/* implicit */short) var_0);
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((7326960094937844134LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [i_1])) == (((/* implicit */int) arr_3 [i_0] [i_0]))))), (arr_3 [i_0] [i_0])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (long long int i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
                            {
                                var_14 = ((/* implicit */_Bool) var_4);
                                var_15 |= max(((+(((unsigned int) arr_3 [i_3] [i_3])))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)243)) >= (((/* implicit */int) (unsigned char)245))))));
                                arr_12 [(_Bool)0] [i_0] [(_Bool)0] [i_2] [i_0] [(_Bool)0] [18LL] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) % (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_4])) < (((/* implicit */int) var_0))))))) <= ((-(((/* implicit */int) arr_0 [i_0] [i_0 + 1]))))));
                            }
                            /* vectorizable */
                            for (long long int i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                            {
                                arr_16 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0 - 3] [i_0] [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 1])) ^ (((/* implicit */int) arr_14 [i_0 + 1] [i_0] [i_2 + 1] [9] [i_2 - 1] [i_2 - 1]))));
                                arr_17 [i_0] [(unsigned short)15] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                                var_16 = ((/* implicit */short) (-((-(arr_6 [i_0] [i_3])))));
                                var_17 = ((/* implicit */unsigned short) arr_10 [i_1] [i_0] [i_0] [i_3]);
                                var_18 = ((/* implicit */unsigned int) arr_14 [i_3] [i_0] [i_3] [i_3] [i_3] [i_3]);
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                            {
                                arr_20 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */short) (-(min((((/* implicit */long long int) var_5)), (((long long int) arr_8 [i_0] [i_0] [i_2] [(unsigned short)0] [i_0] [(unsigned short)0]))))));
                                var_19 *= ((/* implicit */unsigned short) max((((((var_1) ? (arr_8 [i_0 + 1] [i_6] [i_2] [i_2] [1LL] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_6] [(unsigned short)10] [i_0] [6ULL] [0ULL]))))) / (((/* implicit */unsigned long long int) ((arr_11 [i_6]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0 + 1] [i_3] [i_2 - 2] [i_3] [4LL] [i_6])))))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)3584)) : (((/* implicit */int) (_Bool)1)))))));
                                var_20 = ((/* implicit */long long int) var_7);
                                var_21 = ((/* implicit */unsigned long long int) min((((((((/* implicit */int) (signed char)-126)) <= (((/* implicit */int) (short)3556)))) || (((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) var_2))))))), (((((/* implicit */unsigned long long int) max((arr_11 [i_0]), (((/* implicit */unsigned int) arr_2 [i_0 + 1] [i_0 + 1]))))) > (arr_13 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1])))));
                            }
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) <= ((-(-1LL)))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_8))));
            }
        } 
    } 
}
