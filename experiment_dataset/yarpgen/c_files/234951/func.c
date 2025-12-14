/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234951
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                for (unsigned short i_3 = 3; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_3] [i_0] [i_3 + 1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((-6807718685509119558LL) & (((/* implicit */long long int) 2985152321U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_8 [i_0] [i_1] [i_1] [i_2] [i_0] [i_0])))) : (((unsigned long long int) var_1)))) | (arr_3 [i_0])));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            arr_16 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)15650);
                            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((_Bool) arr_1 [i_1])))));
                            arr_17 [i_0] [i_0] [i_2] [i_2] [i_2] [10ULL] [i_2] = ((((/* implicit */_Bool) ((long long int) arr_7 [i_0] [i_0] [i_0]))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30053))));
                        }
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            var_15 ^= ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [(unsigned char)12]))))));
                            var_16 *= ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_5)))));
                        }
                        var_17 = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)30053)))) && (((_Bool) arr_3 [i_0]))));
                        arr_20 [i_2] [i_0] [7LL] [i_2] = ((/* implicit */short) arr_10 [i_3 - 3] [i_3] [i_3 - 3] [i_3] [i_3 + 3] [i_3 + 3]);
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            arr_25 [i_0] [i_0] [i_2] [i_2] [i_3] [i_0] = ((/* implicit */long long int) min((((/* implicit */short) (unsigned char)56)), ((short)27640)));
                            arr_26 [i_0] [i_0] = ((/* implicit */long long int) var_3);
                            arr_27 [i_0] [i_1] [i_0] [i_3] [i_6] = ((/* implicit */_Bool) ((signed char) var_10));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_32 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (var_1) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
            var_18 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_8 [i_7] [(signed char)11] [i_7] [i_0] [i_0] [i_0])) ? (arr_22 [(unsigned char)10] [i_7] [(unsigned char)10] [i_7]) : (arr_22 [(unsigned short)10] [i_0] [(unsigned char)12] [(unsigned char)12]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_7])) ? (((/* implicit */int) arr_31 [i_7] [(unsigned short)11] [i_7])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_7])))))));
            arr_33 [i_0] [1U] [i_0] = ((/* implicit */unsigned char) ((min((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_7]), (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [4U]))) / (min((arr_21 [i_0] [i_0] [i_7] [4ULL] [8U] [i_7]), (arr_21 [i_0] [i_0] [i_0] [i_0] [12LL] [i_7])))));
        }
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 1) 
        {
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (+(var_4))))));
            var_20 = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) var_7)))));
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_42 [i_0] [i_8] [i_9] [i_0] = ((/* implicit */_Bool) (~(var_10)));
                        var_21 = ((/* implicit */unsigned long long int) ((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_0] [i_0])))));
                    }
                } 
            } 
        }
        var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((1058965828), (((/* implicit */int) var_3))))))) || (((/* implicit */_Bool) var_1))));
        arr_43 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((unsigned long long int) (unsigned short)49885))))) : (arr_15 [i_0] [i_0])));
    }
    var_23 = ((/* implicit */short) var_2);
    var_24 = ((/* implicit */unsigned short) var_12);
}
