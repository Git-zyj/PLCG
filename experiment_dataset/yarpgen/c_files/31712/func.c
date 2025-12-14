/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31712
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
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((signed char) arr_6 [i_0 - 1] [i_0] [i_0] [i_0] [i_1] [i_0 - 1])))))));
                                var_14 = ((/* implicit */short) arr_5 [13U] [13U] [13U]);
                                var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_10 [i_3 - 1] [i_4 - 1] [i_4] [i_4] [i_4 - 2] [i_4])) <= (((/* implicit */int) var_8)))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (((-(arr_5 [i_0] [i_0 + 1] [i_1]))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24073))))))));
                arr_12 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0 - 1] [i_1 + 1] [i_1 - 1] [i_1] [(unsigned char)4] [i_1])) << ((~(-1LL)))))) == (arr_7 [i_0] [i_1])));
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [(short)15]))))), (arr_13 [i_0] [i_1] [i_5])))) ? (((((/* implicit */_Bool) arr_13 [i_0] [(signed char)4] [i_5])) ? (((arr_6 [i_5] [i_1] [i_1] [i_0] [i_1] [i_0 - 1]) >> (((((/* implicit */int) var_3)) - (18))))) : (arr_6 [0ULL] [i_0] [i_0 + 1] [i_1 - 1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) var_8)), (arr_5 [i_0] [i_1] [i_5]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_5] [i_0] [i_1] [(signed char)13] [i_0] [i_0])) << (((arr_6 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_1] [i_0]) - (2216015170342051493ULL)))))))))));
                    var_18 = ((/* implicit */unsigned long long int) -2258742958289535907LL);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
    {
        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            {
                arr_22 [19] = ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) (short)32767)))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 3; i_8 < 20; i_8 += 3) 
                {
                    for (signed char i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) max((min((var_10), (((/* implicit */long long int) arr_27 [i_6] [(signed char)18] [0U] [i_9])))), (((/* implicit */long long int) ((arr_19 [i_6]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 880930609)) ? (max((1125889471), (((/* implicit */int) var_11)))) : (((/* implicit */int) ((arr_19 [i_6]) > (arr_25 [(signed char)4] [(signed char)4] [i_7]))))))) : ((+((+(arr_27 [i_8 - 1] [i_8 - 1] [i_7] [i_6]))))))))));
                            arr_30 [(signed char)7] [i_7] [i_7] [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((int) 3305188533U))) < (989778763U))) ? (min((((/* implicit */unsigned long long int) (+(var_2)))), ((~(arr_28 [(unsigned short)8] [(unsigned short)8] [16LL] [i_9]))))) : (((((/* implicit */_Bool) max((3426830537U), (((/* implicit */unsigned int) arr_21 [i_6] [i_8] [i_9]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) != (var_7))))) : (min((arr_29 [i_8] [i_8] [i_7] [i_6]), (arr_29 [i_6] [i_7] [1U] [i_9])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
