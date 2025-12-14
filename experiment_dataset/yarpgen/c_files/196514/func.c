/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196514
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
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_15 *= ((/* implicit */_Bool) ((short) (~(((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1])))));
                    arr_7 [2] [i_1] [i_1] [i_2] = ((/* implicit */short) arr_2 [i_0]);
                }
                var_16 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_3 [i_1] [i_0])), ((~((~(4294967285U)))))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_1 [i_1]))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-11555))))) : (arr_0 [i_1])))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)92))))) ? (((unsigned long long int) arr_1 [i_0 - 1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~((+(arr_18 [i_7] [i_5] [i_5] [i_4] [i_3])))))) == ((-(16884058849160590024ULL)))));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_8 [i_6] [i_4]))));
                            }
                        } 
                    } 
                    arr_19 [i_5] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) 2238349107U))) & (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (unsigned short)35678))))))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [(short)0])) ? (((/* implicit */int) arr_21 [i_8])) : (((/* implicit */int) (signed char)0))))) ? (((((/* implicit */_Bool) arr_21 [i_4])) ? (879135991U) : (((/* implicit */unsigned int) -1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_21 [i_8]))))));
                    arr_22 [i_8] [4U] [4U] [i_8] = ((/* implicit */short) 11U);
                }
                for (long long int i_9 = 1; i_9 < 12; i_9 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) arr_15 [7ULL] [i_4] [i_3] [i_3])))) ? (2413667150U) : (arr_24 [i_9] [i_9 - 1] [i_9 + 3] [i_9]))), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_10 [i_4])) != (((/* implicit */int) var_6)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))))));
                    var_22 = ((/* implicit */unsigned short) min(((((+(((/* implicit */int) (short)19828)))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))), (((/* implicit */int) ((short) 10468955025975689957ULL)))));
                }
                for (long long int i_10 = 1; i_10 < 12; i_10 += 3) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned long long int) ((signed char) var_6));
                    var_24 = ((/* implicit */short) min((((11U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_10 + 3] [i_10 + 3]))))), (((/* implicit */unsigned int) arr_21 [i_10 + 2]))));
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_17 [i_3] [i_3] [i_4] [i_4] [i_10 - 1] [i_10]) | (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */unsigned long long int) (~((~(var_3)))))) : (arr_20 [i_3] [i_4] [i_10]))))));
                    var_26 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((arr_12 [i_10] [i_3] [i_3]) ^ (arr_20 [i_3] [i_4] [i_10])))) ? (((((/* implicit */int) arr_15 [i_3] [i_4] [i_3] [i_3])) | (((/* implicit */int) var_6)))) : (((/* implicit */int) ((short) arr_14 [i_10 + 3] [i_10] [i_4] [i_3])))))));
                }
                arr_28 [i_4] = ((/* implicit */long long int) var_1);
            }
        } 
    } 
}
