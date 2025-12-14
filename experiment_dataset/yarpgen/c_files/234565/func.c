/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234565
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            var_18 = ((/* implicit */_Bool) ((((var_5) ^ (((/* implicit */unsigned int) var_2)))) ^ (((/* implicit */unsigned int) (~(var_13))))));
            arr_5 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_13)) : (var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (var_4));
            arr_6 [i_0] [i_0] = ((/* implicit */_Bool) var_9);
        }
        for (short i_2 = 1; i_2 < 9; i_2 += 4) 
        {
            arr_9 [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((2064840458) + (((/* implicit */int) var_6))))))) || ((!(((/* implicit */_Bool) ((int) var_2)))))));
            arr_10 [(unsigned short)12] [i_0] [6ULL] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2064840458)) ? (((((/* implicit */int) (short)18925)) | (429979530))) : (((int) arr_4 [i_0] [(_Bool)1]))))) ? (((((long long int) var_16)) ^ (((/* implicit */long long int) ((int) var_1))))) : (((/* implicit */long long int) (~((~(arr_1 [i_2] [i_2]))))))));
        }
        for (int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_4 = 2; i_4 < 12; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        {
                            arr_19 [i_4 + 1] [i_4 - 1] [7] [i_4] [i_4] [i_0] = ((/* implicit */unsigned int) (+(var_2)));
                            arr_20 [i_0 + 2] [i_0] [i_4] [i_5] [i_4 - 1] = ((/* implicit */int) ((((((/* implicit */_Bool) (~(arr_13 [i_0])))) ? (var_7) : (((var_3) + (((/* implicit */unsigned int) arr_17 [i_0] [i_0 + 2] [i_0] [i_4] [i_5] [i_5] [i_6])))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0])) ? (var_12) : (((/* implicit */int) arr_11 [11LL]))))))))));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [(short)10] [i_5])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_12 [i_5] [i_4])))))) ? (((long long int) (+(arr_13 [i_4])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_3 [i_4] [i_4])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (2064840458) : (var_14)))))))))))));
                            arr_21 [i_3] [i_3] [i_0] [i_5] [i_6] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (-2064840459) : (-814117841)));
                        }
                    } 
                } 
            } 
            arr_22 [i_3] [i_0] = ((/* implicit */signed char) ((((long long int) (unsigned short)19974)) * (((/* implicit */long long int) ((/* implicit */int) ((((1491264515) >> (((-1258018125) + (1258018130))))) <= (((/* implicit */int) ((unsigned short) 1393353233)))))))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            arr_27 [i_0] = ((/* implicit */int) arr_16 [(short)0] [i_0] [i_7]);
            arr_28 [i_0] = ((/* implicit */unsigned short) var_13);
        }
        for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 4) 
        {
            arr_32 [i_0] [i_0] = (~((~(-2064840459))));
            arr_33 [i_0] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (((((+(arr_25 [i_8]))) + (2147483647))) >> (((arr_1 [i_0] [i_8 + 1]) + (1899557055)))))) ? (((/* implicit */unsigned int) ((int) min((((/* implicit */int) arr_2 [i_8] [i_0] [i_0 + 2])), (var_2))))) : (((max((((/* implicit */unsigned int) arr_23 [i_0 - 1])), (var_7))) >> (((((arr_3 [i_0] [i_8 + 1]) >> (((arr_31 [4] [4] [4]) + (374870919297001387LL))))) - (3453005U)))))));
            arr_34 [10U] [i_0] [i_8] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_11 [i_8 - 2])))) > (max((((/* implicit */int) var_15)), (arr_1 [i_8 - 2] [(signed char)0])))));
        }
        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
        {
            arr_38 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(var_9)));
            arr_39 [i_0] = ((/* implicit */int) ((arr_35 [i_0] [i_0]) >= (var_7)));
            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~((~(((((/* implicit */int) arr_15 [i_0] [i_9] [i_9] [i_0 + 2] [i_0 + 2] [i_0 + 1])) ^ (var_8))))))))));
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (+(max((((arr_13 [i_9]) - (((/* implicit */int) arr_8 [i_9] [i_0] [i_9])))), (arr_17 [i_0 + 1] [i_0] [i_9] [i_9] [i_9] [i_9] [(short)6]))))))));
        }
        var_22 ^= min((var_11), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_36 [(signed char)8] [i_0 + 1]))))));
    }
    var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) ((var_13) / (((/* implicit */int) var_15))))))));
}
