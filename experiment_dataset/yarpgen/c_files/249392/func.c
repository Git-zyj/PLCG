/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249392
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
    var_16 = ((/* implicit */unsigned int) ((min((((long long int) var_10)), (((/* implicit */long long int) var_12)))) | (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)137)) < (((/* implicit */int) var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((((/* implicit */int) var_4)) << (((((/* implicit */int) (unsigned char)137)) - (129))))))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) var_1))))) ? (var_7) : (((/* implicit */int) var_9))));
    var_18 = ((/* implicit */long long int) min((var_9), (var_8)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_19 = (-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))) : (arr_1 [i_0]))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((min((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0] [i_0])))) <= (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_2 [i_0] [i_0])))))))) : (max((((/* implicit */unsigned int) var_5)), (arr_2 [i_0] [i_0]))))))));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 9; i_2 += 4) 
        {
            for (long long int i_3 = 1; i_3 < 10; i_3 += 4) 
            {
                {
                    var_21 -= ((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */unsigned short) var_13)), (arr_6 [i_2 + 2] [i_2 + 2] [i_3 - 1]))));
                    var_22 -= ((/* implicit */unsigned int) (+(max((((((/* implicit */int) var_5)) / (((/* implicit */int) arr_5 [i_3 + 1])))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)4))))))));
                    var_23 *= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_3 [i_3 + 1])) < (((-487205764) - (arr_7 [i_3 + 1] [i_1]))))));
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((int) ((int) (unsigned char)253))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (4294967274U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-27893))))))) : (var_7)));
        arr_11 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))) < ((-(((/* implicit */int) var_15))))));
    }
    for (short i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        var_26 = ((/* implicit */unsigned char) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) max((var_14), (((/* implicit */long long int) (short)-27893))))) ? (((/* implicit */int) ((arr_14 [i_4] [i_4]) <= (var_6)))) : (((/* implicit */int) arr_13 [i_4]))))));
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                arr_23 [i_6] [i_5] [i_4] &= ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_4] [i_4] [i_4])) >> (((((/* implicit */int) arr_18 [i_6] [i_4] [i_4])) - (91)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_4]))))) : (((/* implicit */int) ((var_6) < (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5] [i_5] [i_6])))))));
                var_27 = ((/* implicit */unsigned long long int) max((((arr_13 [i_5]) ? (max((((/* implicit */long long int) var_12)), (arr_20 [i_4] [i_5] [i_4]))) : (((long long int) arr_16 [i_4] [i_4] [i_4])))), (arr_1 [i_4])));
            }
            var_28 = var_12;
            arr_24 [i_4] [i_4] [i_4] = ((/* implicit */short) arr_13 [i_5]);
        }
        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            arr_28 [i_7] = ((signed char) (+(((/* implicit */int) (signed char)-81))));
            var_29 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_5))))))), (15663046115600631639ULL)));
        }
        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_17 [i_4] [i_4] [i_4])) : (((/* implicit */int) var_2)))) == (((((/* implicit */_Bool) var_9)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_17 [i_4] [i_4] [i_4])))))))));
        arr_29 [i_4] [i_4] = var_11;
    }
    var_31 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */long long int) ((((_Bool) var_3)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))) : (((int) var_9))))) : (((var_14) - (((/* implicit */long long int) ((((/* implicit */int) var_11)) & (((/* implicit */int) (unsigned char)16)))))))));
}
