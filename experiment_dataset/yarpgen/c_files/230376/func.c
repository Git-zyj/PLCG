/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230376
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), ((-(((((/* implicit */unsigned long long int) var_5)) | (arr_1 [12LL] [i_0])))))));
                                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_7 [i_2] [i_2 + 2] [14] [i_2])))) - ((~(-5425893462002773023LL))))))));
                                var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_4 [12] [i_2 - 1] [i_2 - 1] [0]) - (arr_4 [i_2] [i_2 + 1] [i_3] [i_2 + 1]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_0] = ((unsigned int) ((int) ((int) arr_14 [i_0])));
                        var_15 += ((/* implicit */unsigned long long int) min((-5425893462002773023LL), (((/* implicit */long long int) -1))));
                        arr_16 [i_0] [i_2] [i_2] [i_5] [10] &= ((/* implicit */long long int) ((unsigned char) 1));
                        var_16 = ((/* implicit */unsigned short) arr_2 [i_0] [(unsigned char)7]);
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max((((int) 1)), (((-1) ^ (-1)))))), (min((((/* implicit */unsigned int) arr_18 [i_0])), (min((((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_0])), (0U)))))));
                            var_18 = ((/* implicit */unsigned int) (signed char)42);
                            var_19 = ((/* implicit */int) -5425893462002773023LL);
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) min((arr_10 [i_1]), (((/* implicit */unsigned int) (signed char)42)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-1) + (-1587071703)))) ? (((((/* implicit */int) arr_0 [i_1] [i_2])) >> (((-1) + (27))))) : ((~(((/* implicit */int) arr_6 [(unsigned char)3] [i_1]))))))) : (((unsigned long long int) -1)))))));
                        }
                        for (long long int i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max((((long long int) (unsigned short)11849)), (((/* implicit */long long int) max((-726469861), (((/* implicit */int) arr_9 [i_2 + 1] [i_1] [i_2] [i_0] [(unsigned short)11])))))))) ? (min((((/* implicit */long long int) (unsigned short)4305)), (max((((/* implicit */long long int) (signed char)40)), (var_3))))) : (((/* implicit */long long int) ((min((((/* implicit */unsigned int) (signed char)42)), (arr_13 [i_0] [i_0] [i_0] [i_0]))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_8] [i_0])) ? (-1587071703) : (((/* implicit */int) var_1))))))))));
                            var_22 &= ((/* implicit */unsigned long long int) ((unsigned int) var_3));
                        }
                        var_23 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) - (-726469861)))) > (((((/* implicit */_Bool) max((6878740585913932204ULL), (((/* implicit */unsigned long long int) -2))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [4] [12] [i_6] [i_2] [i_0]))))) : (min((3333991527478357598ULL), (var_10)))))));
                        var_24 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 115971254U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (0U)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)31034))) ^ (arr_22 [i_0] [i_2] [i_6]))))), (((/* implicit */unsigned long long int) var_7))));
                        var_25 *= ((/* implicit */unsigned short) min((min((((/* implicit */int) arr_3 [i_2] [i_2] [i_2])), (arr_2 [i_2] [i_2 - 2]))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(1)))))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (min((((/* implicit */unsigned long long int) ((((unsigned int) arr_20 [i_0] [i_1] [2LL] [i_9])) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_2])))))), ((-(3333991527478357598ULL)))))));
                        var_27 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_8 [i_0] [i_9] [(unsigned char)5])))) <= (max((arr_11 [i_2 + 1] [i_2 - 1] [i_2 - 1]), (((/* implicit */unsigned long long int) var_9)))));
                    }
                    arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((max((((((/* implicit */int) (unsigned char)240)) + (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) 9596377232131081246ULL)) ? (-1485198085) : (-2))))), (max(((+(((/* implicit */int) arr_9 [i_0] [i_0] [10LL] [i_0] [i_2])))), (((/* implicit */int) ((unsigned char) 8850366841578470369ULL)))))));
                    /* LoopSeq 1 */
                    for (long long int i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        var_28 = arr_21 [i_0] [i_1] [i_2 + 1] [i_10] [i_10] [i_2 - 2] [i_1];
                        arr_29 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_14 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))) - (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_20 [i_0] [2] [2] [2])), ((unsigned short)12517)))))))) ? (((/* implicit */int) ((((/* implicit */long long int) 0U)) <= (((((/* implicit */long long int) -1587071703)) / (var_3)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)17)))))));
                    }
                    var_29 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 6106018426553588786LL)) ? (arr_10 [i_2 - 1]) : (arr_10 [i_2 + 1]))), (((((/* implicit */_Bool) 1433730192U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42496))) : (arr_10 [i_2 - 2])))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */unsigned char) ((min((min((var_5), (var_3))), (((/* implicit */long long int) ((unsigned int) var_6))))) / (var_0)));
}
