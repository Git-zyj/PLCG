/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231866
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_5))));
        var_18 = ((((/* implicit */int) (short)7066)) ^ (-1));
        var_19 -= ((/* implicit */long long int) (unsigned char)138);
        var_20 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (arr_2 [i_0]))) : (arr_2 [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_21 += ((/* implicit */unsigned short) ((signed char) ((((/* implicit */long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) (unsigned char)135))))) >= (arr_6 [i_1] [i_2] [i_2]))));
            arr_7 [i_1] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_2]))))), (((unsigned short) -7145002751746531282LL))));
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (unsigned char)138);
            var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)116))))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_3 [i_2] [i_1]), (arr_3 [i_2] [i_2])))) ? ((~(((/* implicit */int) arr_1 [i_1] [i_2])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_16))))))))));
            var_23 -= ((/* implicit */unsigned char) (((+(var_12))) <= (min((((long long int) var_12)), (((/* implicit */long long int) (unsigned char)129))))));
        }
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            arr_19 [i_1] [i_3] [i_3] [i_1] [i_5] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_3] [i_6]) % (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1])))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_1)) : (-733007717246662050LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */int) (unsigned short)3779)) : (424629807))))))) ? (arr_12 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)63)) + (((/* implicit */int) var_10)))))))))));
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) ((-4180646696410135071LL) != (((/* implicit */long long int) ((/* implicit */int) (short)-29554)))))) == (((/* implicit */int) ((unsigned short) ((signed char) arr_0 [i_1] [i_3])))))))));
                            arr_20 [i_1] [i_3] = ((/* implicit */int) var_12);
                            var_25 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_10 [i_6] [i_5] [i_4])))) ? (max((8614614757309285917LL), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_1] [i_3] [i_4] [i_3])) && (((/* implicit */_Bool) arr_14 [i_1] [i_3] [i_5]))))))));
                        }
                        for (unsigned int i_7 = 2; i_7 < 10; i_7 += 1) 
                        {
                            arr_25 [i_1] [i_3] [i_4] [i_5] [4] = ((/* implicit */short) (((-(arr_17 [i_3] [i_3] [i_3] [i_5] [i_3] [i_7 + 3]))) > (((((/* implicit */_Bool) var_4)) ? (arr_17 [i_1] [i_4] [i_5] [i_5] [i_3] [i_5]) : (2147483646)))));
                            arr_26 [i_1] [i_5] [i_4] [i_7 + 2] [i_3] = ((/* implicit */unsigned int) (((-(((/* implicit */int) ((short) var_2))))) != (((/* implicit */int) (!((!(((/* implicit */_Bool) var_2)))))))));
                            arr_27 [i_1] [i_3] [i_3] [i_3] [i_5] [i_5] [i_7] = ((/* implicit */long long int) ((int) ((max((arr_2 [i_4]), (((/* implicit */unsigned int) arr_3 [i_5] [i_5])))) >> (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_15))))));
                            var_26 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_3] [i_4])) ? (((/* implicit */int) (!(((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) 424629807))))))) : (((/* implicit */int) var_16))));
                        }
                        for (int i_8 = 3; i_8 < 11; i_8 += 3) 
                        {
                            var_27 -= ((/* implicit */signed char) arr_24 [i_4] [i_3] [i_1] [i_5] [i_4]);
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) arr_22 [i_8 + 2] [i_8] [(unsigned short)2] [i_8] [i_8 - 1]))));
                            var_29 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((min((1670682229377424613LL), (733007717246662049LL))), (((/* implicit */long long int) max(((unsigned char)139), (((/* implicit */unsigned char) (signed char)-83))))))))));
                            var_30 *= ((/* implicit */unsigned short) ((((unsigned long long int) var_9)) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_3] [i_4] [i_3] [i_4] [i_3] [i_4] [i_1])))));
                            arr_32 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [i_5] [i_3] [i_8 - 2] [i_8] [i_8 - 2] [i_8 + 1] [i_8]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_3)))))) - (arr_22 [i_8 - 1] [i_8 - 3] [i_8 - 1] [i_8 - 2] [i_8 - 3])))));
                        }
                        arr_33 [i_4] |= (((~(max((((/* implicit */long long int) arr_10 [i_1] [i_3] [(unsigned short)10])), (-1795328427963262877LL))))) / (((/* implicit */long long int) ((/* implicit */int) (signed char)48))));
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)39870))))))))));
}
