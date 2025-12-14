/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50810
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((1048575) >> (((-1048576) + (1048584)))))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))) & (var_14)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_16 = ((/* implicit */unsigned short) ((-1048576) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (short)-28135))))) > (min((((/* implicit */unsigned long long int) 1048567)), (arr_1 [i_0] [i_0]))))))));
            arr_6 [i_0] [4ULL] [i_1] = ((/* implicit */unsigned char) ((((arr_4 [i_1]) <= (arr_4 [i_1]))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) <= (arr_0 [i_1])))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [8]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0])))))))));
        }
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 1048575)) & (arr_1 [(short)6] [i_2]))))));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_13 [(signed char)0] [i_3] [i_3] [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_5 [i_3]), (((/* implicit */unsigned short) (short)29888))))) && (((/* implicit */_Bool) arr_11 [i_0] [i_3])))))) * (((((((/* implicit */_Bool) 440233626U)) ? (17992348005014206007ULL) : (((/* implicit */unsigned long long int) arr_12 [i_0])))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1048586)) ? (63) : (((/* implicit */int) arr_7 [i_3] [i_0]))))))));
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))) - (arr_1 [10U] [i_0]))) - (((/* implicit */unsigned long long int) ((arr_9 [(unsigned short)7] [i_2] [0U]) + (arr_9 [i_3] [i_2] [i_0]))))))) ? (((/* implicit */unsigned long long int) arr_9 [(unsigned char)6] [i_2] [i_0])) : (min((((/* implicit */unsigned long long int) min((1048586), (((/* implicit */int) (short)(-32767 - 1)))))), (((arr_8 [i_0]) << (((15857415240247986301ULL) - (15857415240247986260ULL)))))))));
            }
            arr_14 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (unsigned char)179)) && (((/* implicit */_Bool) -1)))) && (((/* implicit */_Bool) 1048575)))) && (((/* implicit */_Bool) arr_11 [i_0] [i_0]))));
        }
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))) % (((arr_2 [(_Bool)1] [(short)5]) >> (((arr_10 [(unsigned char)6]) - (1907863931U))))))));
            var_20 = ((/* implicit */int) min((var_20), (((min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) arr_7 [i_0] [i_0])) << (((-7381559224176345414LL) + (7381559224176345420LL))))))) * (((((/* implicit */int) ((((/* implicit */_Bool) -9223372036854775801LL)) || (((/* implicit */_Bool) arr_4 [i_0]))))) >> (((((/* implicit */int) (short)-1)) + (10)))))))));
            arr_18 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0])) > (((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) 641182801U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))) : (0ULL)))));
        }
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_22 [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_11 [i_0] [i_5])) % (576458553280167936ULL)))) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (10523908919342701625ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31133))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1331712945)) && (((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_5])))))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_5] [i_0] [i_0])) ? (arr_20 [i_0] [i_5] [i_5]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1331712953)) ? (((/* implicit */int) arr_7 [i_0] [i_5])) : (((/* implicit */int) (short)-18229))))))))));
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) (short)19064)) << (((((/* implicit */int) (unsigned short)65531)) - (65516))))))));
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_7 [i_0] [i_5])) : (((/* implicit */int) arr_7 [i_0] [i_5]))))) ? (17992348005014206007ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 144044819331678208LL)) || (((/* implicit */_Bool) (unsigned short)10408))))))));
        }
    }
}
