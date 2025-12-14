/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189750
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
    var_10 = ((/* implicit */unsigned short) var_1);
    var_11 ^= (-(((/* implicit */int) var_1)));
    var_12 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            arr_8 [i_0] [i_1] |= ((/* implicit */signed char) ((unsigned short) (short)-29378));
            /* LoopSeq 1 */
            for (short i_2 = 3; i_2 < 8; i_2 += 3) 
            {
                arr_11 [i_1] [i_1] [i_2 - 3] [i_2 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (((/* implicit */int) (!(arr_7 [i_1 - 2] [i_2 - 3] [i_2 + 3])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 1868836687U)) > (4060547368171318993ULL))))));
                /* LoopSeq 3 */
                for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    arr_14 [i_1] [i_1] [i_1] [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)4092))));
                    var_13 = ((/* implicit */short) arr_1 [i_2] [(_Bool)1]);
                    arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) ((short) arr_3 [i_0])))))));
                }
                for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    var_14 = ((/* implicit */unsigned char) (+(var_9)));
                    var_15 -= ((/* implicit */_Bool) (-((~(((/* implicit */int) (_Bool)1))))));
                    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned long long int) arr_16 [i_0 + 1] [i_0 + 1])))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))))));
                    var_17 = (!(((/* implicit */_Bool) var_7)));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 4) 
                {
                    arr_23 [i_5] [i_5] = ((/* implicit */unsigned short) (-(var_9)));
                    arr_24 [i_0] [i_1] [(_Bool)1] [(_Bool)1] = ((arr_19 [3LL] [i_2 - 3] [3LL] [(unsigned char)2]) == (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5 - 1] [i_5]))));
                }
                arr_25 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
            }
            /* LoopNest 2 */
            for (unsigned int i_6 = 3; i_6 < 10; i_6 += 3) 
            {
                for (short i_7 = 2; i_7 < 9; i_7 += 4) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) var_9);
                        var_19 = ((/* implicit */long long int) ((signed char) (+(((unsigned long long int) arr_5 [i_7] [i_1] [i_0])))));
                    }
                } 
            } 
            arr_31 [i_1] = ((unsigned int) (!(((/* implicit */_Bool) arr_6 [i_1 - 2] [i_0 + 4]))));
            var_20 = ((/* implicit */unsigned char) (!(((((arr_30 [i_0]) & (var_8))) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_1] [4])))))))));
        }
        for (signed char i_8 = 1; i_8 < 11; i_8 += 3) 
        {
            var_21 = ((/* implicit */short) var_9);
            var_22 = var_6;
        }
        for (int i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            var_23 += ((/* implicit */short) var_9);
            arr_36 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_6);
        }
        arr_37 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((int) var_7)) >= (((/* implicit */int) var_1)))))));
    }
    for (unsigned long long int i_10 = 1; i_10 < 8; i_10 += 4) /* same iter space */
    {
        arr_40 [7] [7] = ((/* implicit */signed char) var_1);
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_6))));
    }
}
