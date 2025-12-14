/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217007
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
    var_14 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned int) var_0)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_15 += ((/* implicit */unsigned int) ((signed char) max((arr_1 [(short)6]), (arr_1 [(_Bool)1]))));
        arr_2 [i_0] = ((/* implicit */unsigned char) min((min((((arr_1 [i_0]) + (((/* implicit */int) var_7)))), (((/* implicit */int) var_7)))), (((/* implicit */int) ((unsigned char) var_11)))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            var_16 = ((/* implicit */signed char) var_4);
                            arr_13 [i_0] [i_1] [(short)15] [13] [i_4] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_12 [i_0] [i_2] [(unsigned short)7] [(short)1] [(short)1] [i_2])) ? (((/* implicit */int) var_1)) : (arr_4 [15U] [i_1] [i_0]))), ((+(((/* implicit */int) var_6))))))), (max((((((/* implicit */_Bool) var_12)) ? (0ULL) : (((/* implicit */unsigned long long int) 1840317212)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) / (arr_1 [i_0]))))))));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_2 + 3] [i_2] [i_0]))) ? (((var_4) ? (arr_4 [i_2 + 3] [i_2 + 3] [i_0]) : (arr_4 [i_2 + 3] [i_2] [i_0]))) : (((((/* implicit */_Bool) arr_12 [i_2 + 3] [i_2] [i_3] [i_3 - 1] [i_3] [i_3])) ? (-1840317212) : (((/* implicit */int) arr_12 [i_2 + 3] [i_3] [i_3] [i_3 - 1] [12LL] [i_3]))))));
                            var_18 &= ((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */int) var_7)), ((~(((/* implicit */int) (unsigned short)18927)))))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (+(arr_14 [i_3 - 2] [i_2 - 1] [i_3 - 2] [i_2 - 1]))))));
                            var_20 -= ((/* implicit */signed char) max((min((arr_6 [i_2 + 1] [i_2] [i_5]), (arr_6 [i_2 + 2] [i_2] [i_2]))), (((/* implicit */unsigned short) ((arr_14 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_3 - 2]) <= (arr_14 [i_2 + 1] [4] [i_2 + 3] [i_3 + 1]))))));
                            var_21 = ((/* implicit */unsigned char) ((short) ((long long int) (~(((/* implicit */int) var_4))))));
                        }
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_7 [(unsigned short)11] [(unsigned short)11] [i_1])))))) && (((/* implicit */_Bool) ((long long int) var_5))))))));
                        var_23 += ((/* implicit */short) max((arr_14 [i_0] [i_1] [i_2] [i_2]), (((/* implicit */unsigned int) (_Bool)1))));
                        var_24 += ((/* implicit */short) (((!(((/* implicit */_Bool) arr_17 [i_0] [i_0])))) && ((!((_Bool)1)))));
                    }
                    var_25 = arr_8 [4LL] [i_1];
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_17 [(signed char)11] [i_2])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [7U] [i_0]))))), (((var_2) ? (5913230842283698164LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))) ? (((min((-566726594), (((/* implicit */int) var_13)))) + ((-(((/* implicit */int) var_8)))))) : ((+(((/* implicit */int) var_1))))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            {
                                var_27 += ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_16 [i_2 - 1] [i_1] [i_0] [i_0] [i_0])))), (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_6))))))));
                                var_28 &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((int) var_4)), (((((/* implicit */int) var_13)) / (arr_0 [i_0] [i_1])))))) ? (((int) min((((/* implicit */long long int) var_10)), (var_5)))) : (((/* implicit */int) var_13))));
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_3 [i_0] [i_2 - 2] [i_2 - 2])), (((((/* implicit */_Bool) arr_10 [i_2] [i_2 - 1] [i_0] [i_2 + 2] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_2 - 2] [i_0]))) : (var_5)))));
                }
            } 
        } 
    }
    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
    {
        var_29 += max((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_8] [i_8] [i_8])) + (((var_4) ? (((/* implicit */int) var_13)) : (var_0)))))), (min((min((((/* implicit */long long int) var_4)), (var_5))), (((/* implicit */long long int) max((arr_3 [i_8] [i_8] [i_8]), (((/* implicit */short) var_9))))))));
        var_30 = ((/* implicit */signed char) (~(arr_5 [i_8] [(_Bool)1] [i_8] [(_Bool)1])));
    }
    var_31 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) min((((/* implicit */signed char) var_6)), (var_9)))), (max((((/* implicit */unsigned short) var_2)), (var_8)))))) && ((!((!(((/* implicit */_Bool) var_8))))))));
}
