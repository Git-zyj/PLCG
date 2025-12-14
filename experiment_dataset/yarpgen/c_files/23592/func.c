/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23592
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
    var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17))));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((((/* implicit */long long int) (-(((/* implicit */int) var_16))))), (max((((/* implicit */long long int) (-(((/* implicit */int) (short)29802))))), (max((var_7), (((/* implicit */long long int) var_11)))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) ((((max((((/* implicit */long long int) var_5)), (4611686018427387902LL))) & (((/* implicit */long long int) ((/* implicit */int) max((var_18), (((/* implicit */unsigned short) var_3)))))))) != (((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) (signed char)(-127 - 1)))))))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) var_10))) % (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (arr_0 [i_0 + 2] [i_0 - 1]) : ((-(arr_0 [i_0] [i_0 + 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 3]))))), (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) - (arr_3 [i_1]))), (((/* implicit */unsigned int) max(((signed char)(-127 - 1)), (((/* implicit */signed char) arr_2 [i_0 - 4] [i_0 - 4] [i_0 - 4])))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_2 + 3] [i_1] = (~(((unsigned long long int) arr_9 [i_3] [i_2 + 4])));
                        var_24 = ((/* implicit */short) min(((-(((/* implicit */int) var_10)))), (((((/* implicit */int) max((var_17), (var_11)))) ^ (((/* implicit */int) min((var_16), (((/* implicit */unsigned short) (_Bool)0)))))))));
                        arr_11 [i_0 + 1] [i_1] [i_2 + 1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 - 2])) && (((/* implicit */_Bool) 18446744073709551594ULL)))))))) ? (max((((/* implicit */unsigned long long int) var_16)), (max((arr_7 [i_0] [i_2 + 4] [i_1] [i_0]), (((/* implicit */unsigned long long int) (short)29802)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2] [1ULL])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_2 [i_3] [i_1] [i_0]))))), (((long long int) var_3)))))));
                        arr_12 [i_0] [i_0 + 1] [i_0] [i_1] = ((/* implicit */int) var_12);
                    }
                } 
            } 
            var_25 -= ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */unsigned long long int) arr_3 [i_0 + 2])) : (var_8)))));
        }
        for (signed char i_4 = 3; i_4 < 17; i_4 += 2) 
        {
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_6 [i_0 - 4]) + (arr_6 [i_0 - 3])))) ? (arr_8 [i_4] [i_0 + 2] [i_4 - 3]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 5336336174171840513ULL))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_11)))))))));
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) / (min((arr_6 [i_0]), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)101))))) : (((max((var_8), (((/* implicit */unsigned long long int) var_14)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            var_28 = ((/* implicit */unsigned long long int) (_Bool)1);
            var_29 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(var_7)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_0] [i_0])))) + (arr_6 [(_Bool)0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0])))));
        }
        arr_21 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)(-127 - 1)))) || (((/* implicit */_Bool) max(((-(12ULL))), (((/* implicit */unsigned long long int) arr_2 [i_0 - 2] [i_0 - 2] [i_0 - 2])))))));
    }
    for (unsigned long long int i_6 = 4; i_6 < 16; i_6 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) var_4))));
        arr_25 [i_6] = (-(((((/* implicit */_Bool) var_17)) ? (arr_16 [i_6 - 2] [i_6] [i_6 + 2]) : (max((25ULL), (((/* implicit */unsigned long long int) arr_0 [i_6] [i_6])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 3) 
            {
                {
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((((arr_2 [i_7] [i_7] [i_6]) ? (var_13) : (((/* implicit */unsigned long long int) var_19)))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_6 - 3] [i_7] [i_8])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)-29803)))))))))) : (arr_8 [i_6] [i_7] [i_7])));
                    var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) (~(arr_18 [i_8 - 1] [i_7] [i_6]))))));
                }
            } 
        } 
    }
    var_33 = ((/* implicit */_Bool) (~(((/* implicit */int) var_15))));
    var_34 = ((/* implicit */int) var_7);
}
