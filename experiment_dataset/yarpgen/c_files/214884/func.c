/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214884
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
    var_16 = ((/* implicit */_Bool) var_10);
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_13)), ((+(((/* implicit */int) (unsigned short)57664))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_9))) : (15981404455268157934ULL)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) var_9);
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 3414998208U)) ? (2293895005016142549ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58)))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) var_10)) == (((/* implicit */int) arr_2 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : ((-(((/* implicit */int) arr_2 [i_0]))))));
        arr_6 [i_0] = ((/* implicit */_Bool) (~(8224205084521028200ULL)));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (short i_3 = 2; i_3 < 20; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) arr_14 [i_3 + 1] [(signed char)1]);
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        arr_17 [i_1] = ((/* implicit */signed char) 8224205084521028200ULL);
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */long long int) 8224205084521028200ULL);
                            arr_20 [4] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (min((((/* implicit */unsigned long long int) (_Bool)0)), (15981404455268157949ULL)))))) && (((/* implicit */_Bool) ((int) var_0)))));
                            arr_21 [i_1] [i_2] [i_1] [i_4] [i_1] [i_5] &= ((/* implicit */signed char) (~(((unsigned int) arr_15 [i_3 - 2] [i_3] [i_3 - 1] [i_3 - 1] [i_4]))));
                            arr_22 [21U] [i_2] [i_3] [15] [21U] [i_5] [i_5] = ((/* implicit */long long int) (((~(-1))) ^ ((~(arr_16 [i_1] [i_2] [i_3 - 2] [i_2])))));
                        }
                        for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            var_20 = ((/* implicit */long long int) var_10);
                            arr_25 [i_1] [i_2] [(short)17] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4387985502548214057LL)) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (var_3) : (var_3))) : (((/* implicit */unsigned long long int) arr_11 [i_3] [i_3 + 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2465339618441393699ULL)) ? (((/* implicit */unsigned int) 38302519)) : (var_14)))) ? (((/* implicit */int) arr_14 [i_1] [i_2])) : (((/* implicit */int) arr_10 [i_6] [i_4]))))) : (((long long int) 8966847500829500085ULL))));
                            arr_26 [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) (+(((/* implicit */int) var_10))))), (min((((/* implicit */long long int) arr_9 [i_1] [i_1] [i_1])), (-6661252746681896938LL))))), (((/* implicit */long long int) (short)-32749))));
                            arr_27 [(unsigned char)14] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -6661252746681896937LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (8224205084521028200ULL))), (arr_12 [i_1] [i_6] [i_3 - 1])))) ? (max((((9084371506250065816ULL) / (((/* implicit */unsigned long long int) arr_11 [i_3 + 2] [i_4])))), (((/* implicit */unsigned long long int) arr_15 [i_1] [i_3] [(signed char)15] [i_4] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (-(((((/* implicit */_Bool) arr_8 [i_3 + 2])) ? (((/* implicit */long long int) -861729595)) : (var_8))))))));
                        }
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                for (short i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    {
                        arr_34 [i_1] [i_9] [i_9] &= ((/* implicit */_Bool) (~(max((-9223372036854775790LL), (((/* implicit */long long int) 814703719U))))));
                        arr_35 [i_1] [i_7] [i_8] [(unsigned char)20] = ((/* implicit */_Bool) (signed char)-109);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (((/* implicit */long long int) var_14)) : (arr_24 [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_19 [i_1] [i_1]), (((/* implicit */unsigned short) arr_10 [i_1] [i_1])))))) : ((-(var_12)))));
        arr_36 [(unsigned char)13] = ((/* implicit */signed char) 9362372567459485799ULL);
    }
    var_23 = ((/* implicit */unsigned short) var_15);
    var_24 += ((/* implicit */unsigned long long int) (~(var_9)));
}
