/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209818
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
    var_15 = ((/* implicit */short) ((((/* implicit */long long int) var_5)) / ((-(((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38718))) : (var_11)))))));
    var_16 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_0 [i_0]))));
    }
    for (int i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (-1897821465)))))))));
            arr_9 [i_2] &= ((/* implicit */unsigned int) arr_8 [i_1 + 2]);
            var_18 = (-(var_10));
        }
        /* LoopNest 3 */
        for (unsigned short i_3 = 2; i_3 < 10; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    {
                        var_19 *= ((/* implicit */unsigned char) var_4);
                        arr_17 [i_1] [i_3] [i_4] [i_5] = ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1 + 2]))) - (max((1511032138192835219LL), (((/* implicit */long long int) arr_13 [i_3 + 2] [i_3])))));
                        arr_18 [i_1 + 1] [i_3] = ((/* implicit */short) (_Bool)1);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_6 = 4; i_6 < 11; i_6 += 3) 
        {
            arr_22 [i_6] = ((/* implicit */long long int) (((+(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_6 [i_1 + 1])))))) % ((+(((/* implicit */int) (signed char)-44))))));
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                arr_25 [i_1] [i_6] [i_7] [i_7] = ((/* implicit */long long int) (!((_Bool)1)));
                arr_26 [i_1] [i_6 + 3] [i_7] [i_6] = ((/* implicit */signed char) (_Bool)0);
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (+((((~(((/* implicit */int) (signed char)43)))) & (((((/* implicit */_Bool) arr_20 [12] [i_6 - 1] [i_7])) ? (((/* implicit */int) arr_15 [i_1] [i_6 + 3])) : (((/* implicit */int) var_14)))))))))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 1; i_8 < 13; i_8 += 2) 
                {
                    for (unsigned int i_9 = 3; i_9 < 10; i_9 += 3) 
                    {
                        {
                            arr_33 [i_1] [i_6 - 1] [i_7] [i_8] [i_9 - 2] [i_7] [i_6] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 3459634878U)) ? (((/* implicit */int) (short)-19853)) : (((/* implicit */int) (signed char)102))))));
                            var_21 = ((/* implicit */short) arr_16 [i_1 + 2]);
                        }
                    } 
                } 
            }
            var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-1)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-55)))))))) + (((/* implicit */int) arr_31 [8ULL] [i_6 - 2] [i_1] [i_6 + 1] [i_6 - 2]))));
        }
    }
}
