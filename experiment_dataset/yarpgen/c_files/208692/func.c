/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208692
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
    var_18 = ((/* implicit */unsigned int) var_16);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3 - 1] [i_1 + 3])))))));
                        var_20 += ((/* implicit */signed char) arr_2 [(short)11]);
                        arr_12 [i_1] = ((/* implicit */int) var_7);
                    }
                } 
            } 
            var_21 = (((+(((/* implicit */int) arr_0 [i_1])))) * (((((/* implicit */int) arr_4 [i_1])) / (((/* implicit */int) arr_4 [i_1])))));
            /* LoopSeq 2 */
            for (unsigned char i_4 = 3; i_4 < 12; i_4 += 1) 
            {
                var_22 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_1 + 1])) >> ((((~(((/* implicit */int) arr_3 [i_0])))) + (8))))))));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_1 + 4] [i_0] [i_1]))) & (((/* implicit */int) (short)-4557))));
                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (((-(((/* implicit */int) var_2)))) ^ (((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0]))))) * ((-(((/* implicit */int) var_14)))))))))));
                var_25 = ((((/* implicit */int) (unsigned char)245)) == (((((((/* implicit */int) var_15)) <= (((/* implicit */int) var_17)))) ? (((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_5 [i_4])))));
                var_26 = (_Bool)1;
            }
            for (unsigned short i_5 = 4; i_5 < 14; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        {
                            arr_23 [4LL] [4LL] [4LL] [i_1] = (unsigned short)65535;
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) arr_19 [i_6] [i_6] [1ULL]))));
                        }
                    } 
                } 
                var_28 += ((/* implicit */long long int) var_8);
            }
        }
        var_29 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [14ULL] [i_0] [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) var_1))))) | (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_7 [i_0] [i_0] [i_0] [i_0])))));
        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_20 [(unsigned short)8] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */int) arr_21 [i_0] [(unsigned short)3] [i_0] [i_0] [i_0] [i_0] [(unsigned short)3])) >> (((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - (8207228187438944681LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_7))))))))));
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0])), (var_2))))) <= (((((/* implicit */unsigned int) ((/* implicit */int) (short)27853))) * (max((arr_22 [i_0] [i_0] [6U] [i_0]), (((/* implicit */unsigned int) var_17))))))));
    }
    var_32 |= ((/* implicit */signed char) var_17);
}
