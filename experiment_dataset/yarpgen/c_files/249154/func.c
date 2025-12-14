/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249154
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
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_11 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((3320186948U) % (((/* implicit */unsigned int) var_3))))) == (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [(unsigned short)8]) : (arr_1 [i_0]))))))) ^ (((((/* implicit */_Bool) ((unsigned char) 1673099384U))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (arr_1 [i_0 - 1])))));
        arr_2 [i_0 - 1] &= ((/* implicit */_Bool) var_8);
    }
    for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */short) ((_Bool) max((var_5), (((/* implicit */long long int) var_2)))));
        arr_6 [i_1] [(unsigned char)15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (unsigned short)10510)) : (((/* implicit */int) (_Bool)1))));
        var_12 = ((/* implicit */short) min((max(((-(var_5))), (((/* implicit */long long int) min((arr_4 [i_1]), (((/* implicit */unsigned int) var_0))))))), (((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned char)59)))))))));
    }
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        for (signed char i_3 = 4; i_3 < 16; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_13 *= ((/* implicit */unsigned char) var_1);
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) arr_10 [i_2]))));
                                arr_20 [14] [i_3] [i_2] [i_5] [i_3] = (i_2 % 2 == 0) ? (((/* implicit */unsigned int) ((((((var_1) >> (((arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]) + (101245043))))) + (((/* implicit */unsigned long long int) arr_3 [i_5])))) + (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_18 [i_2] [i_6 - 1] [14ULL] [i_2] [(unsigned short)11])), (arr_13 [i_2] [i_5] [i_4] [i_2] [i_2]))))))) : (((/* implicit */unsigned int) ((((((var_1) >> (((((arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]) + (101245043))) - (729237412))))) + (((/* implicit */unsigned long long int) arr_3 [i_5])))) + (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_18 [i_2] [i_6 - 1] [14ULL] [i_2] [(unsigned short)11])), (arr_13 [i_2] [i_5] [i_4] [i_2] [i_2])))))));
                                arr_21 [i_2] [i_2] [i_2] [i_2] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_10))) >> (((((/* implicit */int) ((short) (signed char)-100))) + (113)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) 1640647643)) | (arr_3 [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_19 [i_2] [i_2]), (((/* implicit */unsigned char) (_Bool)1)))))) : (min((arr_13 [i_2] [i_2] [i_4] [i_5] [i_6]), (arr_3 [i_6]))))) : (((/* implicit */unsigned int) max((((((/* implicit */int) arr_16 [i_2] [i_2] [i_2])) / (var_3))), (((((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_4] [i_5] [i_6 - 3])) / (((/* implicit */int) arr_9 [i_6] [i_6] [i_2])))))))));
                            }
                        } 
                    } 
                    arr_22 [i_2] [i_3] [i_3] [i_4] = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_19 [i_3 + 1] [i_2]))))));
                    var_15 = (i_2 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((((/* implicit */int) arr_10 [i_2])) << (((((/* implicit */int) arr_19 [i_2] [i_2])) - (63))))) : (((/* implicit */int) ((((/* implicit */int) (short)-24335)) == (420856204)))))) : (((((/* implicit */int) var_9)) | (((/* implicit */int) arr_9 [(unsigned short)8] [(unsigned char)13] [i_2]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((((/* implicit */int) arr_10 [i_2])) << (((((((/* implicit */int) arr_19 [i_2] [i_2])) - (63))) + (28))))) : (((/* implicit */int) ((((/* implicit */int) (short)-24335)) == (420856204)))))) : (((((/* implicit */int) var_9)) | (((/* implicit */int) arr_9 [(unsigned short)8] [(unsigned char)13] [i_2])))))));
                }
            } 
        } 
    } 
}
