/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197114
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) var_4))));
    var_13 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_1 [(short)4]);
        var_14 += ((/* implicit */short) var_7);
        var_15 = arr_2 [(unsigned short)9];
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) < (var_4)));
        arr_7 [i_1] = ((((/* implicit */int) var_8)) << (((arr_4 [i_1] [i_1]) - (487807438))));
    }
    for (unsigned short i_2 = 3; i_2 < 20; i_2 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) arr_9 [(signed char)2])))))))) != (((/* implicit */int) min((max((((/* implicit */unsigned short) var_1)), (var_2))), (((/* implicit */unsigned short) arr_9 [i_2 + 1])))))));
        /* LoopNest 3 */
        for (signed char i_3 = 3; i_3 < 21; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                for (int i_5 = 2; i_5 < 22; i_5 += 2) 
                {
                    {
                        arr_20 [(unsigned char)8] [i_2 + 3] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) (_Bool)1))))) <= (((/* implicit */int) (_Bool)1))))) != (max((((((/* implicit */int) var_10)) - (((/* implicit */int) var_0)))), (((/* implicit */int) var_3))))));
                        arr_21 [i_3] [i_4] [i_3] [i_4] = ((/* implicit */short) max((((/* implicit */unsigned char) max((min((((/* implicit */signed char) var_6)), (var_0))), (((/* implicit */signed char) var_1))))), (var_7)));
                        /* LoopSeq 2 */
                        for (signed char i_6 = 4; i_6 < 20; i_6 += 1) 
                        {
                            arr_24 [i_2 + 2] [9] [(unsigned short)10] [(unsigned char)19] [(signed char)5] [(signed char)3] [i_6] = max((((/* implicit */int) max((((/* implicit */signed char) var_8)), (var_0)))), (max((((((/* implicit */int) arr_19 [18] [i_3 - 2] [(unsigned short)17])) / (((/* implicit */int) arr_13 [i_2 + 2] [(unsigned char)22] [(unsigned char)22] [i_5 - 1])))), (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_2)))))));
                            arr_25 [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 2] [(_Bool)1] [17] [(signed char)19] = var_4;
                            arr_26 [i_2 - 1] [(short)10] [1] [i_5 - 1] [i_6] = ((/* implicit */short) var_3);
                            var_17 *= ((/* implicit */unsigned short) var_11);
                            var_18 ^= ((/* implicit */unsigned char) max((((/* implicit */int) ((var_4) >= (((/* implicit */long long int) ((/* implicit */int) var_5)))))), (arr_23 [i_6] [i_2 + 2])));
                        }
                        for (int i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_2)))) <= (((/* implicit */int) var_5))))) <= (((/* implicit */int) var_8)))))));
                            var_20 = ((/* implicit */unsigned short) min((((((/* implicit */int) var_6)) - (arr_18 [i_7] [i_7] [21] [i_5]))), (((/* implicit */int) var_6))));
                            var_21 = ((/* implicit */short) max((16711680), (((/* implicit */int) (_Bool)1))));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_12 [i_4]))));
                        }
                        arr_29 [(signed char)17] [i_3 + 2] [(signed char)7] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) ((((/* implicit */int) (unsigned char)237)) >= (((/* implicit */int) arr_22 [(signed char)16] [i_3] [(signed char)16] [i_5 + 1] [i_5])))))))) | (((/* implicit */int) arr_28 [(short)17] [(short)18] [(signed char)21] [(signed char)21] [i_4]))));
                        arr_30 [2] [4ULL] [20] [i_3 - 3] [2] [20] = ((/* implicit */signed char) arr_27 [i_2 - 2] [i_3] [i_2 - 2] [i_4] [(short)12] [i_2] [i_2 - 2]);
                    }
                } 
            } 
        } 
        arr_31 [(_Bool)1] [(_Bool)1] = ((/* implicit */short) var_6);
    }
}
