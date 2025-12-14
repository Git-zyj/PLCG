/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236831
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
    var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) ((_Bool) var_0)))));
    var_11 |= ((/* implicit */unsigned short) var_0);
    var_12 *= ((((/* implicit */int) var_3)) / ((-(((((/* implicit */int) var_7)) * (((/* implicit */int) var_5)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_13 += ((/* implicit */_Bool) min((arr_3 [i_0]), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_2 [i_0])))) && (((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned short) (short)(-32767 - 1)))))))))));
        arr_4 [i_0] = ((/* implicit */signed char) arr_3 [i_0]);
        arr_5 [i_0] = ((/* implicit */signed char) arr_3 [i_0]);
        arr_6 [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */int) (short)(-32767 - 1))) & (((/* implicit */int) ((unsigned char) (unsigned char)25))))), (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_14 = ((/* implicit */unsigned short) ((unsigned char) (-(((/* implicit */int) arr_0 [i_0] [i_1])))));
            var_15 = ((/* implicit */short) ((((/* implicit */int) ((9862678626652141486ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))) << (((unsigned long long int) ((arr_7 [i_0] [i_0]) / (var_9))))));
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((unsigned char) (_Bool)1)))));
        }
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            arr_12 [i_0] [i_0] [(unsigned short)4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)19796)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1))));
            var_17 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) (short)24987)) ? (((/* implicit */int) (unsigned short)37225)) : (((/* implicit */int) arr_8 [i_2] [i_0])))) : (((/* implicit */int) ((unsigned char) (signed char)124)))))));
            var_18 ^= ((/* implicit */short) (-(((arr_7 [i_2] [i_0]) * (arr_7 [i_0] [i_0])))));
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                arr_15 [i_3] [i_3] = ((/* implicit */short) arr_1 [i_2]);
                arr_16 [i_0] = ((/* implicit */long long int) (-(((unsigned long long int) ((((/* implicit */int) (unsigned short)16384)) != (((/* implicit */int) arr_11 [i_3] [i_0])))))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((((((arr_7 [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)37196)) * (((/* implicit */int) arr_8 [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_14 [(signed char)9] [i_0] [i_2] [i_3]))))))))));
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 10; i_4 += 2) 
    {
        arr_20 [i_4] [i_4] = ((/* implicit */unsigned short) ((255) & (((/* implicit */int) (short)10118))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            for (int i_6 = 1; i_6 < 10; i_6 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
                    arr_25 [(signed char)10] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_23 [i_4]))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4]))) <= (3818907833U))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            var_21 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
            arr_28 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_4 - 2] [i_4])) ? (arr_26 [i_4 + 2] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (short)-16887)))));
            arr_29 [i_4] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_4))));
        }
        for (long long int i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            arr_33 [i_4] [i_8] [(unsigned short)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15682360501741986667ULL)) ? (((/* implicit */int) ((unsigned char) 2764383571967564949ULL))) : (((/* implicit */int) ((signed char) (_Bool)1)))));
            var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)37223))))) ? (((/* implicit */int) var_1)) : (255)));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)-4798)))) : (3866690952U)));
        }
        for (unsigned short i_9 = 3; i_9 < 8; i_9 += 2) 
        {
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (signed char)31)) % (((/* implicit */int) (_Bool)1))))))));
            arr_37 [i_4] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned long long int) arr_22 [i_4] [i_9]))))) ? (((/* implicit */int) ((15682360501741986686ULL) >= (((/* implicit */unsigned long long int) arr_26 [i_4] [i_4]))))) : (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_0))))));
            var_25 = ((/* implicit */int) ((arr_35 [i_4 - 2] [i_9 + 1]) < (arr_35 [i_9 + 1] [i_4 - 2])));
            var_26 += ((signed char) ((arr_22 [i_4] [1U]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)124)))));
        }
        arr_38 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) 15682360501741986667ULL))) ? (((/* implicit */int) ((unsigned short) var_6))) : (((/* implicit */int) arr_21 [i_4]))));
    }
}
