/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38892
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [18ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (9787490528800387214ULL)))) || (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) || (((/* implicit */_Bool) arr_1 [i_1])))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3] [14] [i_2 - 2] [i_3] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 9079256848778919936ULL)))) || ((!(((/* implicit */_Bool) ((short) (unsigned char)1)))))));
                            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(8659253544909164401ULL)))) ? ((~(((/* implicit */int) (unsigned char)7)))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)127)) || (((/* implicit */_Bool) arr_5 [19U] [i_2])))))))))))));
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [(short)9])) ? (((((/* implicit */_Bool) var_9)) ? (arr_2 [18U] [i_2]) : (((/* implicit */int) (!(((/* implicit */_Bool) 9787490528800387214ULL))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)7)) || (((/* implicit */_Bool) (short)2416)))) || (((/* implicit */_Bool) (unsigned short)53302)))))));
                            arr_12 [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) (~(18446744073709551615ULL)))) || (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2 - 1] [i_3])))))));
                            var_16 += ((/* implicit */unsigned int) 2147483647);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (int i_6 = 2; i_6 < 19; i_6 += 3) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) var_7);
                                var_17 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_4] [i_5] [i_6])) ? (((/* implicit */int) arr_9 [i_0] [i_4])) : (((/* implicit */int) (short)7439))))))) || (((/* implicit */_Bool) (+((-(arr_8 [i_0] [i_4] [i_4] [i_0] [i_0] [(unsigned short)10]))))))));
                                arr_21 [i_4] = ((/* implicit */_Bool) (~(15859538188459466744ULL)));
                            }
                        } 
                    } 
                } 
                var_18 = min(((-((~(-2147483647))))), (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_7 [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 19; i_7 += 1) 
    {
        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            {
                var_19 += ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                /* LoopSeq 1 */
                for (unsigned int i_9 = 1; i_9 < 15; i_9 += 1) 
                {
                    var_20 += ((/* implicit */unsigned long long int) min(((~(-4527917070401857829LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)25197)) || (((/* implicit */_Bool) arr_26 [2LL] [i_9 - 1])))))));
                    arr_31 [i_9 + 4] [13ULL] [14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)254)) || (((/* implicit */_Bool) 9787490528800387215ULL)))))))) || (((((((/* implicit */_Bool) (unsigned short)25197)) || (((/* implicit */_Bool) -2147483647)))) || (((/* implicit */_Bool) (+(2147483647))))))));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_7] [i_8] [i_9 + 1] [i_7] [i_7]))))))), ((!((_Bool)0))))))));
                    var_22 = ((/* implicit */short) (((!(((((/* implicit */_Bool) (unsigned char)10)) || (((/* implicit */_Bool) arr_1 [i_9])))))) || (((/* implicit */_Bool) var_4))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_10 = 0; i_10 < 19; i_10 += 4) 
                {
                    arr_35 [(signed char)7] [i_8] [(signed char)7] [i_10] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (short)2416)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)40338)) || (((/* implicit */_Bool) (short)-7435))))) : ((~(((/* implicit */int) (short)-7430))))));
                    var_23 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (short)7436)) || (((/* implicit */_Bool) 7092761103681980661ULL)))));
                    arr_36 [i_10] [i_8] [i_10] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) (unsigned short)17756)) || (((/* implicit */_Bool) arr_27 [i_7] [i_7] [i_7]))))));
                }
                for (long long int i_11 = 2; i_11 < 17; i_11 += 1) 
                {
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_7])) || (((/* implicit */_Bool) var_4))));
                    arr_40 [i_8] [i_8] [i_8] |= min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -859104857))))), (((unsigned long long int) 14007132927926557LL)));
                }
                arr_41 [i_7] [1ULL] [i_7] = ((/* implicit */short) min((((/* implicit */long long int) var_5)), (min((arr_29 [i_7] [i_7] [i_7] [i_7]), (((/* implicit */long long int) (~(((/* implicit */int) (short)3202)))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((int) var_13)))));
}
