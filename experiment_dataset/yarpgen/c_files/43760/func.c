/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43760
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
    var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_16)) ? (var_18) : (((/* implicit */int) var_8)))), (((/* implicit */int) (signed char)-58))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_18)), (min((var_14), (((/* implicit */long long int) var_16)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_13)), (arr_3 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_3 [i_0])))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (var_4)))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_5 [i_0]))))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)-34)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) % (arr_3 [i_0]))))) : (((/* implicit */unsigned int) (-(((int) var_9)))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */_Bool) (-((+(var_18)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                var_21 ^= ((/* implicit */int) ((((unsigned long long int) var_10)) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_2])))));
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    var_22 = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned char)248));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((signed char) var_13)))));
                    arr_21 [i_2] [(unsigned short)5] [i_4] [i_5] = ((/* implicit */_Bool) ((signed char) (signed char)-10));
                    var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_8))));
                }
            }
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (+(arr_16 [i_2] [i_3] [i_3]))))));
        }
        arr_22 [i_2] [i_2] = (+(((/* implicit */int) ((signed char) var_17))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_9 = 1; i_9 < 12; i_9 += 2) 
                    {
                        var_26 = ((/* implicit */_Bool) (-(((long long int) var_15))));
                        var_27 = ((/* implicit */unsigned char) (+(arr_31 [3U] [i_9] [i_9] [i_9 + 1])));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 1; i_10 < 12; i_10 += 3) 
                    {
                        for (short i_11 = 0; i_11 < 13; i_11 += 2) 
                        {
                            {
                                arr_41 [i_6] [i_6] [i_6] [(signed char)0] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-58)) % (((/* implicit */int) (signed char)58)))))));
                                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */unsigned long long int) arr_3 [i_11])) : (var_4))))))));
                                var_29 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_10 - 1] [(signed char)4] [i_10 - 1] [i_10 - 1] [(signed char)4] [i_7])) && (((/* implicit */_Bool) arr_33 [i_10 - 1] [i_10] [i_10] [i_10 + 1] [i_10] [i_10]))));
                            }
                        } 
                    } 
                    arr_42 [10ULL] = ((/* implicit */signed char) (+(min((((/* implicit */int) max((var_11), (var_9)))), (-1932828268)))));
                }
            } 
        } 
        arr_43 [i_6] [i_6] = ((/* implicit */int) ((signed char) ((unsigned int) arr_35 [i_6] [i_6] [i_6] [i_6])));
    }
}
