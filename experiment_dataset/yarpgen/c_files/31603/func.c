/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31603
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9)))))) ? (((/* implicit */int) var_5)) : (min((((((/* implicit */_Bool) (short)-18919)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (unsigned short)63043)))), (((/* implicit */int) ((((/* implicit */int) var_1)) != (var_3))))))));
    var_15 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) var_11)), (var_2)));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */int) min(((unsigned short)1), (((/* implicit */unsigned short) (_Bool)1)))))));
    var_17 = ((/* implicit */short) var_9);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_18 &= ((/* implicit */unsigned short) var_5);
                        var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max(((short)-21414), (((/* implicit */short) (signed char)2))))), (((unsigned long long int) arr_7 [i_2] [i_1] [i_3 + 1] [i_3 - 1]))));
                        var_20 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_7 [(unsigned short)10] [i_1] [(unsigned short)10] [i_3 + 2])) ? (((/* implicit */long long int) var_6)) : (var_2))));
                        var_21 = ((/* implicit */short) var_8);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            arr_13 [i_4] = ((/* implicit */unsigned int) arr_12 [i_0] [i_4]);
            arr_14 [i_0] = ((/* implicit */int) var_7);
        }
        for (int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    for (signed char i_8 = 2; i_8 < 16; i_8 += 3) 
                    {
                        {
                            var_22 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_21 [i_8 + 1] [i_8 + 1] [i_8 + 1])) : (((/* implicit */int) arr_21 [i_8 - 1] [i_5] [i_5]))))), (min((var_6), (((/* implicit */unsigned int) arr_24 [5ULL] [i_8] [i_8 - 1] [i_8 - 2] [i_8] [i_8 - 1] [i_8 - 1])))));
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_6]))))) ? (arr_3 [i_0] [i_0] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_7 [i_0] [i_6] [i_8 + 2] [i_7])))))))))));
                            arr_25 [i_8] [(unsigned char)0] [i_6] [i_7] [i_7] = ((/* implicit */unsigned int) ((int) (short)-29142));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_23 [i_0] [i_0] [i_6] [i_7] [i_8 - 2]) ^ (arr_23 [i_6] [i_8 + 2] [i_8] [i_8 + 2] [i_8 + 1])))) || (((/* implicit */_Bool) (~(arr_15 [i_0] [(_Bool)1] [i_0]))))));
                        }
                    } 
                } 
            } 
            var_25 *= ((/* implicit */unsigned short) ((min((((/* implicit */int) min((((/* implicit */unsigned short) (short)8649)), (arr_10 [i_0])))), (var_4))) >= (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_5])) > (((/* implicit */int) arr_6 [i_0] [i_0])))))));
        }
        var_26 &= ((/* implicit */long long int) var_8);
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_0] [6U] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [(_Bool)1] [(_Bool)1])) == (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0]))))))) : (((arr_15 [i_0] [i_0] [i_0]) / (((/* implicit */int) arr_10 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            var_28 = ((/* implicit */int) var_8);
            var_29 = ((/* implicit */unsigned short) ((max((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) ((var_4) | (var_0)))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_9]))) : (var_6))))));
            arr_29 [i_9] [i_9] [i_0] = ((/* implicit */short) var_5);
        }
    }
}
