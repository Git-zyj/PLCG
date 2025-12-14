/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237583
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
    var_13 = ((/* implicit */unsigned int) (~((~(var_6)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    arr_11 [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_2] [i_2 + 1] [i_2 + 4] [i_2])) ? (((/* implicit */int) arr_7 [i_2] [i_2 + 2] [i_2 + 2] [i_2])) : (((/* implicit */int) arr_7 [i_2] [i_2 - 1] [i_2 + 2] [i_2]))));
                    arr_12 [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))));
                    arr_13 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_7 [i_2 + 4] [i_2 + 2] [i_2] [i_0])) : (((/* implicit */int) arr_6 [i_2 - 1] [i_1] [i_2]))));
                }
                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (-(min((((/* implicit */int) arr_3 [i_0])), ((+(((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1]))))))));
                arr_15 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? ((~(((/* implicit */int) arr_4 [i_0] [i_0])))) : (((/* implicit */int) ((arr_2 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))))))) ? ((~((-(((/* implicit */int) arr_6 [i_0] [i_1] [i_1])))))) : (((/* implicit */int) arr_9 [i_0]))));
                /* LoopSeq 3 */
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_3 [i_1]);
                    arr_19 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_16 [i_0] [i_3]) ? (((/* implicit */int) arr_9 [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_3]))))) == (arr_5 [i_3])))) << (((((((/* implicit */_Bool) (-(arr_1 [i_1] [i_0])))) ? ((-(arr_5 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))) - (8198307010245570392ULL)))));
                    arr_20 [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_3] [i_3] [i_3])) | (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_3]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_3] [i_3] [i_1])) <= (((/* implicit */int) arr_8 [i_0] [i_3] [i_3] [i_3]))))) : (((arr_8 [i_3] [i_3] [i_3] [i_0]) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_3] [i_3]))))));
                    arr_21 [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_3]))))) <= (((((((/* implicit */int) arr_16 [i_0] [i_1])) == (((/* implicit */int) arr_0 [i_0])))) ? (((((/* implicit */_Bool) -9223372036854775807LL)) ? (13107474308493456630ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)107))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_3])))))));
                }
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    arr_24 [i_0] [i_1] [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_3 [i_0]), (arr_3 [i_1]))))));
                    arr_25 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((arr_1 [i_0] [i_1]) >> (((((/* implicit */int) arr_4 [i_0] [i_1])) - (2469))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)107), (((/* implicit */unsigned char) (_Bool)1)))))))))));
                }
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    arr_28 [i_0] [i_0] [i_1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_23 [i_5] [i_1] [i_0] [i_1])), (arr_5 [i_0])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) >= (arr_2 [i_5])))) : ((~(((/* implicit */int) arr_0 [i_5])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_5] [i_5])))))));
                    arr_29 [i_0] [i_1] [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (+(4687938789382919255LL)))) || (((/* implicit */_Bool) 9223372036854775789LL)))))));
                    arr_30 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_5] [i_5]))));
                }
                arr_31 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? ((~(-9223372036854775794LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0])))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_4);
    var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
}
