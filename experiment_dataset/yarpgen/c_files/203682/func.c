/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203682
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
    var_16 += ((max((var_15), (((/* implicit */int) var_4)))) <= (((/* implicit */int) var_0)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_5))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_10 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (short)-12);
                var_18 = ((/* implicit */short) arr_3 [18] [i_1 + 2]);
            }
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_13))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                arr_13 [6] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3] [i_1] [i_3] [i_1]))))) != (((/* implicit */int) (unsigned short)0))));
                var_20 += ((/* implicit */unsigned char) (-(max((min((((/* implicit */int) arr_1 [i_0])), (arr_4 [i_0] [i_1] [i_0]))), (((/* implicit */int) (!(((/* implicit */_Bool) 9610884950302690872ULL)))))))));
            }
        }
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 4) 
                {
                    arr_22 [i_0] [(short)6] [i_4] [(short)6] [8] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) max(((short)32762), (((/* implicit */short) var_3))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) var_2))))))) ? (max((arr_20 [i_4] [i_4] [i_0] [i_6 + 1] [i_0] [15ULL]), (arr_20 [i_0] [i_4] [i_5] [i_6 - 1] [i_4] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || ((!(((/* implicit */_Bool) (unsigned short)16687))))))))));
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        var_21 = arr_14 [i_7] [17];
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((unsigned char) ((((arr_3 [i_5] [i_5]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)69)))) + (((/* implicit */int) arr_16 [i_6 + 1] [i_4])))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned char) arr_3 [i_0] [i_6]);
                        arr_27 [(short)3] [i_4] [11] = ((/* implicit */_Bool) max((((((174476241) % (((/* implicit */int) var_14)))) / (((((/* implicit */_Bool) arr_19 [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)90)))))), (((((((/* implicit */_Bool) 12922997891451698072ULL)) ? (-1790087592) : (((/* implicit */int) arr_3 [(signed char)15] [i_4])))) & (((/* implicit */int) max((arr_25 [i_0] [10] [i_0]), (arr_16 [i_4] [i_4]))))))));
                    }
                    var_24 = ((/* implicit */int) var_5);
                    var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)25773)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (min((((/* implicit */unsigned long long int) (unsigned short)7)), (var_7))))) / (((unsigned long long int) arr_23 [(unsigned short)11] [i_0] [i_5] [i_0] [i_0]))));
                    var_26 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [(short)17] [i_6] [i_5] [i_6 + 2] [i_6 + 1]))) > (((arr_20 [i_6] [i_5] [i_5] [(unsigned char)18] [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_12)), (var_0)))))))));
                }
                var_27 += ((/* implicit */short) min((max((((unsigned long long int) (short)7833)), (min((((/* implicit */unsigned long long int) var_6)), (var_8))))), (((/* implicit */unsigned long long int) ((_Bool) ((-1477880008) % (((/* implicit */int) (short)15497))))))));
                arr_28 [i_5] [i_5] [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_26 [(short)15] [i_0] [i_4] [i_4] [i_5]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_4] [i_4] [i_5])) ? (((((/* implicit */_Bool) var_10)) ? (arr_23 [i_0] [i_0] [i_4] [i_4] [i_5]) : (((/* implicit */int) var_12)))) : (((((/* implicit */int) (unsigned char)224)) % (((/* implicit */int) arr_2 [14ULL]))))))) : (var_11)));
                var_28 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0])) || (((/* implicit */_Bool) var_15)))))));
            }
            var_29 = ((/* implicit */unsigned char) 11499318040083428927ULL);
        }
        arr_29 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)15851))))), ((unsigned short)4415)))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)-22056)) ? (((/* implicit */int) (short)-16707)) : (((/* implicit */int) var_1)))), (((/* implicit */int) (_Bool)1))))) : ((-(720660870126808848ULL))));
    }
    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
    {
        arr_32 [(short)4] |= ((/* implicit */int) (+(((unsigned long long int) var_14))));
        arr_33 [(short)13] [i_9] = ((/* implicit */unsigned short) arr_14 [(_Bool)1] [i_9]);
        arr_34 [i_9] [(short)4] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((arr_19 [(unsigned char)4]), (((/* implicit */unsigned long long int) arr_4 [i_9] [i_9] [i_9])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)10334)))))))) ? (((((/* implicit */int) (short)16348)) * (((/* implicit */int) ((arr_17 [0ULL] [i_9] [0ULL] [0ULL]) && (((/* implicit */_Bool) var_5))))))) : (((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))) * (((/* implicit */int) arr_12 [i_9] [i_9] [i_9] [i_9]))))));
    }
}
