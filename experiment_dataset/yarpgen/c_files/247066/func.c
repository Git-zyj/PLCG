/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247066
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
    var_12 = ((/* implicit */unsigned char) (((((+(var_11))) / ((+(((/* implicit */int) var_8)))))) / (var_11)));
    var_13 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_14 = ((/* implicit */int) ((min((((/* implicit */unsigned int) max((arr_0 [i_0] [i_1]), (((/* implicit */unsigned short) (unsigned char)128))))), (2539183927U))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))));
            var_15 = ((/* implicit */unsigned int) var_1);
            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */int) min((arr_0 [i_0] [i_1]), (arr_0 [i_1] [i_0])))) < (((int) var_4)))))));
        }
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (+((+(((/* implicit */int) ((unsigned char) -1))))))))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)3))))) ? (((/* implicit */int) min((var_10), (arr_3 [i_0] [i_0] [i_0])))) : ((~(((/* implicit */int) var_8))))))), ((~(((((/* implicit */_Bool) var_3)) ? (1755783369U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) arr_5 [i_2] [i_2]);
        /* LoopSeq 3 */
        for (int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            var_20 = ((/* implicit */int) arr_7 [i_2] [i_2] [i_3]);
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_6 [i_3]))));
            var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((var_7), ((unsigned short)60822)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_2]))) < (2539183927U))))));
        }
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
        {
            var_23 -= ((/* implicit */_Bool) arr_12 [i_2] [i_4] [i_4]);
            var_24 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_2] [i_4]))));
        }
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_6 = 1; i_6 < 10; i_6 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_7 = 1; i_7 < 9; i_7 += 1) 
                {
                    var_25 += ((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_8 [i_5] [i_6])))), ((((!(((/* implicit */_Bool) (unsigned short)22440)))) ? (((/* implicit */int) arr_11 [i_6 - 1])) : (((/* implicit */int) arr_18 [i_2] [i_5] [i_6 + 2] [i_2]))))));
                    var_26 = (~((+(((/* implicit */int) arr_14 [i_6 - 1] [i_6 - 1] [i_6])))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    var_27 |= ((/* implicit */unsigned short) var_5);
                    var_28 = ((/* implicit */unsigned short) max((var_28), (var_2)));
                    var_29 = (i_6 % 2 == zero) ? (((/* implicit */unsigned long long int) (((((~(arr_16 [i_6] [i_5] [i_6 - 1]))) << (((((/* implicit */int) var_3)) - (186))))) >> ((((~(((((/* implicit */_Bool) (unsigned char)9)) ? (3U) : (arr_4 [i_6]))))) - (4294967263U)))))) : (((/* implicit */unsigned long long int) (((((((~(arr_16 [i_6] [i_5] [i_6 - 1]))) + (2147483647))) << (((((((/* implicit */int) var_3)) - (186))) - (1))))) >> ((((~(((((/* implicit */_Bool) (unsigned char)9)) ? (3U) : (arr_4 [i_6]))))) - (4294967263U))))));
                }
                var_30 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60822)))))) ? (min((arr_20 [i_6] [i_2]), (((/* implicit */unsigned int) arr_22 [(unsigned char)2] [6] [(_Bool)1] [(unsigned char)4] [i_2])))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)30995), (((/* implicit */unsigned short) (_Bool)1)))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)24513)))))));
            }
            for (int i_9 = 1; i_9 < 10; i_9 += 1) 
            {
                var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) arr_17 [i_2] [i_5] [i_2] [i_9])))));
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 8; i_10 += 4) 
                {
                    for (int i_11 = 1; i_11 < 11; i_11 += 1) 
                    {
                        {
                            var_32 |= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_11 - 1] [i_9 + 1] [i_9] [i_2]))) - (arr_17 [i_11 - 1] [i_9 + 1] [i_2] [i_10]))) < (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)102)))) ? (((((/* implicit */_Bool) arr_25 [i_5] [i_9] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (3706781480U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24513))))))));
                            var_33 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967284U)) ? (((/* implicit */int) (unsigned short)32050)) : (((/* implicit */int) (unsigned short)32050))))) ? (((/* implicit */int) arr_25 [(unsigned short)5] [i_5] [i_2])) : (((/* implicit */int) ((((/* implicit */int) arr_27 [i_2] [i_5] [i_2] [i_10])) < (var_5))))))));
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_5 [i_5] [i_5])))), (((/* implicit */int) ((unsigned char) ((unsigned char) (unsigned short)60822)))))))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */_Bool) arr_20 [i_2] [i_2]);
            }
            var_36 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned char) arr_6 [i_2])))))));
            var_37 = ((/* implicit */_Bool) (unsigned short)40280);
        }
    }
}
