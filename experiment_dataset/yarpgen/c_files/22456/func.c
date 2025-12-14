/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22456
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
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            arr_4 [(unsigned char)4] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) (short)22497)), (-4394092688139420343LL))) >> (((min((arr_1 [i_0 - 1]), (((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_0 + 1])))) - (11529U)))));
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)64632))))), (max((max((((/* implicit */unsigned int) (unsigned char)209)), (arr_1 [i_0]))), (((/* implicit */unsigned int) ((1022) ^ (arr_0 [i_0]))))))));
            arr_6 [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_3 [i_0] [i_1] [i_0])), (((long long int) max((var_2), (((/* implicit */int) var_8)))))));
            arr_7 [i_0 - 1] [i_1] = ((/* implicit */long long int) min((((/* implicit */int) (short)-16151)), ((-(((/* implicit */int) (signed char)-37))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 2; i_2 < 6; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 7; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) min(((unsigned short)903), ((unsigned short)903))))));
                        var_15 = ((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_2]);
                    }
                } 
            } 
        }
        arr_12 [(_Bool)1] = ((int) (~(((var_1) | (((/* implicit */int) var_12))))));
    }
    for (signed char i_4 = 1; i_4 < 12; i_4 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-37)), (-4394092688139420343LL))))));
        /* LoopSeq 1 */
        for (long long int i_5 = 3; i_5 < 12; i_5 += 2) 
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)29)) >> (((((/* implicit */int) (unsigned short)65535)) - (65504)))));
            arr_20 [i_5] = ((/* implicit */_Bool) arr_16 [i_4 + 1]);
            /* LoopNest 3 */
            for (unsigned int i_6 = 4; i_6 < 10; i_6 += 4) 
            {
                for (long long int i_7 = 3; i_7 < 9; i_7 += 3) 
                {
                    for (short i_8 = 4; i_8 < 11; i_8 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_23 [i_6] [i_5] [i_6] [i_7]))));
                            var_19 += ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_13 [i_4] [i_5 - 3])), ((unsigned short)64632)))) && (var_8)));
                        }
                    } 
                } 
            } 
        }
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((short) arr_14 [i_4] [i_4 - 1]))) / ((-((~(((/* implicit */int) var_12))))))));
        var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_26 [(unsigned short)8] [i_4] [i_4] [(unsigned short)8] [i_4] [(unsigned short)8])), (max((arr_15 [i_4] [i_4]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)27)))))))));
    }
    var_22 = ((/* implicit */unsigned long long int) (short)6547);
    var_23 = ((/* implicit */int) ((var_4) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    var_24 |= (!(((/* implicit */_Bool) (+(((var_7) - (var_7)))))));
    var_25 += ((/* implicit */unsigned short) var_1);
}
