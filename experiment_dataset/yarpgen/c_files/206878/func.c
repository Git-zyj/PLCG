/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206878
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 3; i_2 < 9; i_2 += 3) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)94))) : (arr_1 [i_1 + 1]))))))));
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((arr_1 [i_2]), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) (unsigned char)3)))) : (((/* implicit */int) arr_2 [i_0] [i_1 + 1]))));
                    var_15 = ((/* implicit */unsigned short) (signed char)-81);
                    var_16 += (-(min((((/* implicit */long long int) ((unsigned int) (_Bool)1))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37508))) : (arr_7 [i_1 - 2] [i_0]))))));
                }
                for (long long int i_3 = 3; i_3 < 9; i_3 += 3) /* same iter space */
                {
                    var_17 = ((/* implicit */_Bool) ((int) (unsigned char)93));
                    var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned char) (signed char)116)), ((unsigned char)243)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_5] [i_4] [i_4] [i_4] [i_4] [(unsigned short)5] = ((/* implicit */unsigned short) (~(((unsigned int) max((((/* implicit */short) (unsigned char)17)), (arr_2 [i_1] [i_4]))))));
                                arr_16 [i_5] [i_5] [i_3] [i_5] [i_3] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) var_12)))))))));
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_9 [i_3 - 1] [i_5] [(unsigned short)6]))) ? (((/* implicit */int) max(((unsigned char)252), ((unsigned char)212)))) : (((/* implicit */int) min(((unsigned char)219), (((/* implicit */unsigned char) (signed char)-35)))))));
                                arr_17 [i_3] [i_1 - 1] [i_5] [i_4] [i_5] [i_5] [i_4] = ((/* implicit */_Bool) min((((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */int) (unsigned char)10)) ^ (((/* implicit */int) (unsigned char)206)))) : (((((/* implicit */int) arr_6 [i_0])) % (((/* implicit */int) var_11))))))), (((long long int) ((unsigned char) var_8)))));
                            }
                        } 
                    } 
                    var_20 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_3))))) && (((/* implicit */_Bool) var_5)))), (((((/* implicit */_Bool) (unsigned char)120)) && (((/* implicit */_Bool) (unsigned short)47759))))));
                }
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    var_21 = ((/* implicit */unsigned long long int) arr_4 [(unsigned short)8]);
                    var_22 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_6 + 1])) ? (((((/* implicit */_Bool) arr_3 [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_10 [i_0] [i_6]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_13))))))), (((/* implicit */unsigned long long int) 405762172U))));
                }
                for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 1; i_8 < 9; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_27 [i_8] [i_8] = ((/* implicit */_Bool) var_13);
                                var_24 = min(((unsigned char)218), ((unsigned char)36));
                                var_25 = ((/* implicit */long long int) (-(min((((/* implicit */unsigned int) ((signed char) var_1))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (1912066855U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
                            }
                        } 
                    } 
                    arr_28 [5] [(_Bool)1] [i_7] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2149419747U))), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */int) arr_19 [i_1 - 1] [i_1 + 1] [i_7])) << (((((/* implicit */int) arr_19 [i_1 - 1] [i_1 - 3] [i_7])) - (18))))) : (((/* implicit */int) (signed char)-68)));
                    var_26 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)171)) + (((((((/* implicit */_Bool) 9007199254740991ULL)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (short)21908)))) ^ ((+(((/* implicit */int) (_Bool)1))))))));
                    var_27 = ((/* implicit */unsigned short) arr_9 [i_1 - 3] [i_1 + 1] [i_1 - 3]);
                    var_28 += ((/* implicit */_Bool) 1687987430U);
                }
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)46378)) ^ (((/* implicit */int) (unsigned short)6691))));
                var_30 = (~(((/* implicit */int) (_Bool)1)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (int i_11 = 2; i_11 < 10; i_11 += 1) 
        {
            for (long long int i_12 = 0; i_12 < 11; i_12 += 1) 
            {
                {
                    var_31 = (((+(((/* implicit */int) arr_33 [i_11 - 2] [i_10] [i_11 - 2])))) + (((/* implicit */int) ((unsigned short) -2362614693260125860LL))));
                    var_32 = var_0;
                    var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (signed char)(-127 - 1)))));
                }
            } 
        } 
    } 
    var_34 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (((264306385U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43887)))))));
}
