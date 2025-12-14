/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196375
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
    var_14 = ((/* implicit */_Bool) (+(((var_8) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >> (((/* implicit */int) var_1)))))))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29924)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) var_5);
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_0 [i_1 + 1]), (((/* implicit */unsigned char) var_11))))) * (((/* implicit */int) var_11))));
                var_16 &= ((/* implicit */unsigned int) arr_3 [i_1] [i_0] [i_0]);
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    arr_8 [i_2] &= ((/* implicit */unsigned char) (unsigned short)47724);
                    var_17 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-4466)) : (((/* implicit */int) (unsigned char)43)))) : (((/* implicit */int) arr_2 [i_1] [i_2])))), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)13772)) ? (((/* implicit */int) (_Bool)0)) : (1188692446))) > (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_1])) >= (((/* implicit */int) arr_2 [i_1] [i_1]))))))))));
                }
                for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */short) (!((!(((((/* implicit */_Bool) arr_11 [i_0] [i_0])) && (((/* implicit */_Bool) -6815466964003858399LL))))))));
                                var_19 = var_11;
                                var_20 += ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((arr_1 [i_1 - 1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)11)))))))), (((((/* implicit */_Bool) (short)20)) ? (3615320618U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5772)))))));
                                var_21 = ((max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((((/* implicit */int) (unsigned short)15749)) - (15738)))))), (min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_1 + 2] [i_0] [i_0] [i_0] [i_4] [i_1 + 2])), (9983615253323852526ULL))))) < (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 6319983206077983159ULL)) ? (3615320636U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_3] [i_0] [i_5])))))))));
                            }
                        } 
                    } 
                    arr_16 [i_1] = ((/* implicit */signed char) ((arr_9 [i_1 + 2] [i_1 - 1] [i_1 - 1]) > ((~(12126760867631568471ULL)))));
                    arr_17 [i_1] = ((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_3]);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 3; i_6 < 11; i_6 += 4) 
    {
        for (long long int i_7 = 2; i_7 < 11; i_7 += 2) 
        {
            {
                arr_26 [i_6] = ((/* implicit */signed char) ((long long int) ((signed char) ((63) % (((/* implicit */int) (unsigned short)49792))))));
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_7] [i_6])) ? (-1188692446) : (((/* implicit */int) (short)-53))))) ? (var_12) : (max((var_2), (((/* implicit */unsigned long long int) arr_0 [i_7]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (short)32767))))) == (arr_20 [i_7 + 1]))))) : ((-(arr_7 [i_6 + 1])))));
                var_23 &= ((((max((1188692443), (((/* implicit */int) arr_11 [i_6] [i_6])))) & (((/* implicit */int) arr_15 [i_7 + 1] [i_6 + 1] [i_6 - 2] [i_6 + 1] [i_6 - 2])))) * (((/* implicit */int) (signed char)56)));
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_7 + 2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_14 [i_6] [i_6] [i_7] [i_7 + 2] [i_7] [i_7] [i_7]))))) : (min((((/* implicit */long long int) var_10)), (max((arr_3 [i_6] [i_6] [i_6]), (((/* implicit */long long int) arr_12 [i_6] [i_6] [i_6] [i_7] [i_6]))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))) < (var_2)))) == (((/* implicit */int) var_4))));
}
