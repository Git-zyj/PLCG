/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49207
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
    var_18 = ((/* implicit */unsigned int) (unsigned char)224);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            {
                var_19 |= ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) var_16))))), (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) arr_0 [i_1] [i_0 - 2])) - (((/* implicit */int) var_11)))) : (((/* implicit */int) (short)32754))))));
                var_20 = ((/* implicit */signed char) ((unsigned long long int) ((signed char) min((((/* implicit */unsigned short) (short)32754)), ((unsigned short)58499)))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    var_21 = ((/* implicit */signed char) -1492690518);
                    var_22 = (short)-32754;
                }
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    arr_10 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned short) max((arr_4 [i_0]), (((/* implicit */short) arr_7 [i_1]))))), (((unsigned short) (short)32754))))) > (((/* implicit */int) var_6))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 4503599627354112ULL)) ? (((/* implicit */int) (unsigned short)17340)) : (((/* implicit */int) (signed char)-73))))))) ? (((((/* implicit */_Bool) ((signed char) 4503599627354088ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-12371)) || (((/* implicit */_Bool) var_1)))))) : (4503599627354063ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48196)))));
                }
                for (int i_4 = 1; i_4 < 22; i_4 += 4) 
                {
                    var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551599ULL)) ? (((/* implicit */int) arr_8 [(_Bool)1] [i_1 + 1] [i_1])) : (((/* implicit */int) (short)32754))))), (arr_6 [i_1] [(short)4] [i_4 + 1])));
                    var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_1] [(unsigned char)15] [i_1 - 4] [i_1]))));
                    var_26 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)36910))))) ? ((-(((/* implicit */int) arr_7 [(short)4])))) : (max((((/* implicit */int) var_8)), (((((/* implicit */int) (unsigned short)58499)) | (((/* implicit */int) var_1))))))));
                }
                for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    arr_16 [i_5] [i_5] &= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_8 [i_0] [i_1 + 3] [i_5])) : (((/* implicit */int) (unsigned short)28625)))));
                    var_27 = ((/* implicit */signed char) var_15);
                    arr_17 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1)) ^ (max((((((/* implicit */int) var_0)) / (((/* implicit */int) var_7)))), (((/* implicit */int) var_9))))));
                    arr_18 [i_0 - 2] [i_1] [i_0 + 2] [i_0] = (~(((/* implicit */int) ((((unsigned long long int) 18442240474082197504ULL)) == (((((/* implicit */_Bool) -10LL)) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))))));
                }
                var_28 = ((/* implicit */signed char) ((unsigned short) 18442240474082197528ULL));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) var_4))));
}
