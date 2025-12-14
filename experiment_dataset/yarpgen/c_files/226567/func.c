/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226567
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
    var_19 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_20 -= ((/* implicit */_Bool) (~(1)));
                        var_21 = (+(((((/* implicit */_Bool) arr_9 [i_0] [7LL] [i_0] [i_0])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_4 [i_1])))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            var_22 = ((/* implicit */signed char) ((_Bool) (unsigned char)207));
            var_23 = var_3;
        }
    }
    for (int i_5 = 1; i_5 < 15; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 2; i_9 < 13; i_9 += 3) 
                    {
                        {
                            arr_27 [i_5] [i_6] [i_9] [i_8] [i_5] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (+(3740078519U)))) ? (((((/* implicit */int) arr_24 [i_5] [i_6] [i_7] [5LL] [i_9])) - (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_26 [i_5] [i_5] [i_5 - 1] [i_7] [i_9 + 2])))));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-413)) && (((((/* implicit */_Bool) (short)18736)) || ((_Bool)0))))))));
                            arr_28 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_17))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_9 + 3] [i_5 - 1] [3U])) && (((/* implicit */_Bool) arr_18 [i_5] [i_6] [i_5])))))));
                            arr_29 [i_5] [0LL] [i_8] [i_7] [i_6] [i_5] = arr_8 [(signed char)17] [i_9] [(unsigned char)5] [i_9 - 1] [i_9 - 1];
                            var_25 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned int) arr_5 [i_5] [i_5 - 1] [i_9 + 3] [i_8]))), (((long long int) var_4))));
                        }
                    } 
                } 
            } 
            var_26 ^= ((/* implicit */unsigned int) (((-2147483647 - 1)) / (((/* implicit */int) (signed char)67))));
            var_27 = ((/* implicit */int) 9223372036854775807LL);
        }
        /* vectorizable */
        for (unsigned long long int i_10 = 4; i_10 < 13; i_10 += 4) 
        {
            var_28 = ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_5 - 1])) - (((/* implicit */int) ((_Bool) (short)-29188)))));
            arr_32 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_5 + 1] [i_10 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5 - 1] [i_5 + 1]))) : (15586678983278736360ULL)));
            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((_Bool) arr_4 [i_5 - 1])))));
        }
        /* LoopSeq 3 */
        for (signed char i_11 = 0; i_11 < 16; i_11 += 1) /* same iter space */
        {
            var_30 = var_0;
            var_31 = ((/* implicit */int) var_15);
        }
        for (signed char i_12 = 0; i_12 < 16; i_12 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) min(((short)-29558), (((/* implicit */short) var_17))))), (arr_21 [i_5 + 1]))))));
            var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -1480430325))));
        }
        for (signed char i_13 = 0; i_13 < 16; i_13 += 1) /* same iter space */
        {
            var_34 = ((/* implicit */long long int) var_9);
            var_35 += ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_9)), (((((/* implicit */long long int) var_4)) | (var_0))))) < (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)18736))) ^ (var_11))))))));
            var_36 -= ((/* implicit */short) -157623556);
        }
    }
}
