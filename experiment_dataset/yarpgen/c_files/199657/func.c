/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199657
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
    var_19 = ((/* implicit */signed char) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                var_20 ^= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) arr_2 [i_0]))))) >= (((max((var_2), (arr_5 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (min((((/* implicit */long long int) arr_6 [i_1])), (var_14)))))));
                var_21 += ((/* implicit */short) arr_2 [i_0]);
                var_22 *= ((/* implicit */unsigned int) var_5);
                var_23 = ((/* implicit */unsigned char) min((var_23), (((unsigned char) ((((/* implicit */_Bool) (short)15274)) ? (((/* implicit */int) (short)-15266)) : (((/* implicit */int) (_Bool)1)))))));
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(unsigned char)5] [i_0] [i_1]))));
                    var_25 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0]))) : ((-(var_1))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_13))))) ? ((~(-822812480))) : (((/* implicit */int) ((unsigned char) arr_7 [i_0]))))))));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-15300))))) ? (((arr_4 [i_1 + 1]) | (arr_4 [i_1 + 1]))) : (((/* implicit */int) arr_8 [i_2] [i_1]))));
                }
                for (unsigned long long int i_3 = 2; i_3 < 6; i_3 += 1) 
                {
                    var_27 ^= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_8 [i_1] [i_1 - 2])), (var_8))))));
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((_Bool) var_4)) ? (((/* implicit */int) min((arr_8 [i_1] [i_3 + 3]), (arr_3 [i_3] [i_3] [i_3])))) : (((/* implicit */int) ((var_3) || (((/* implicit */_Bool) arr_4 [(short)0])))))))) ? (((/* implicit */int) ((((unsigned long long int) arr_4 [i_0])) != (((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)159)))))) : (((/* implicit */int) min((arr_1 [i_1 - 2] [i_1 - 2]), (((/* implicit */signed char) var_3)))))));
                }
                for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    var_29 &= ((/* implicit */unsigned char) min((((((arr_10 [i_1 + 1] [i_1 - 2] [(_Bool)0] [i_1]) + (2147483647))) >> (((/* implicit */int) arr_7 [i_1 + 1])))), (((/* implicit */int) arr_7 [i_1 - 1]))));
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)-15273)))), (((var_2) ? (((/* implicit */int) var_13)) : (arr_4 [i_1]))))) * ((-(((/* implicit */int) var_8)))))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
    {
        for (short i_6 = 1; i_6 < 8; i_6 += 2) 
        {
            for (signed char i_7 = 1; i_7 < 8; i_7 += 4) 
            {
                {
                    var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_11 [4ULL] [i_6 + 1] [2]), (((/* implicit */int) var_10)))))))))))));
                    var_32 = ((((/* implicit */unsigned int) ((((/* implicit */int) ((short) (_Bool)1))) + ((~(arr_10 [i_5] [i_5] [i_5] [i_5])))))) == (var_1));
                }
            } 
        } 
    } 
}
