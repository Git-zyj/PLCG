/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240729
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_9 [(unsigned char)9] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_1 [(unsigned char)9])));
                    var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1]))) <= ((+(var_17)))));
                    var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_1 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))))))) ? (max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) (-(var_17)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_8 [(unsigned short)0] [i_0])) : (((/* implicit */int) arr_8 [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((unsigned char) var_12))))) ? ((((!(((/* implicit */_Bool) var_16)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32613))) % (var_16))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (short)-264)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14)))))))));
    /* LoopSeq 1 */
    for (signed char i_3 = 1; i_3 < 14; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (short i_4 = 2; i_4 < 14; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                for (short i_6 = 1; i_6 < 15; i_6 += 2) 
                {
                    {
                        arr_20 [(_Bool)1] [i_3] [i_4] [i_5] [(signed char)6] &= ((/* implicit */short) (+(((((/* implicit */int) min((arr_13 [8U]), ((_Bool)0)))) << ((((~(var_16))) - (1405502231U)))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 3; i_7 < 15; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned char) var_15);
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_4]))))) ? ((~(((/* implicit */int) min((((/* implicit */unsigned char) arr_16 [i_5] [(unsigned short)7])), ((unsigned char)228)))))) : (((/* implicit */int) var_12))));
                        }
                        for (short i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((arr_10 [i_3]) + (9223372036854775807LL))) << (((((/* implicit */int) var_12)) - (120)))))))))));
                            var_24 = ((/* implicit */_Bool) ((2139643168U) >> (((/* implicit */int) ((((/* implicit */int) min(((unsigned short)24576), (((/* implicit */unsigned short) (_Bool)1))))) <= (((/* implicit */int) ((short) 6957994788684846812LL))))))));
                            var_25 = ((/* implicit */unsigned int) min((arr_14 [i_3 + 2] [i_3]), (((/* implicit */long long int) (unsigned short)24579))));
                            arr_25 [i_3] [i_4] [i_5] [i_5] [i_6] [i_8] = ((/* implicit */_Bool) arr_21 [i_3 + 1] [i_6] [i_5] [i_6 + 1] [5ULL] [7U]);
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((_Bool) arr_14 [i_4] [i_3])))));
                        }
                        var_27 &= ((/* implicit */signed char) ((arr_11 [(unsigned short)6]) ? ((~(((/* implicit */int) arr_11 [i_4 + 2])))) : (((((/* implicit */int) arr_11 [15])) - (((/* implicit */int) arr_11 [i_3 - 1]))))));
                        var_28 ^= ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [i_6 - 1] [i_3 + 2]))))) * ((-(4294967295U)))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */short) arr_13 [(short)14]);
    }
}
