/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213899
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_10 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0])))))));
        var_11 += ((((((/* implicit */int) ((arr_1 [i_0] [i_0]) > (((/* implicit */int) (signed char)116))))) >= (((/* implicit */int) (unsigned short)255)))) ? (((long long int) min((var_1), (((/* implicit */unsigned int) (signed char)-112))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_0))))));
    }
    var_12 = ((/* implicit */signed char) (+(var_7)));
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        for (unsigned int i_2 = 1; i_2 < 24; i_2 += 2) 
        {
            {
                var_13 -= ((/* implicit */unsigned short) var_9);
                /* LoopSeq 3 */
                for (unsigned short i_3 = 1; i_3 < 22; i_3 += 1) /* same iter space */
                {
                    arr_12 [(signed char)3] [i_3] [(signed char)3] = var_7;
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 23; i_4 += 4) 
                    {
                        for (signed char i_5 = 1; i_5 < 24; i_5 += 3) 
                        {
                            {
                                arr_18 [i_2] [i_2] [(unsigned short)0] [i_2] [i_2] = ((/* implicit */_Bool) var_0);
                                arr_19 [i_1] [i_1] [i_3] [(unsigned short)19] [i_1] = ((/* implicit */unsigned short) (~(((arr_17 [i_5] [i_4 - 1] [i_4] [i_4] [4LL] [4LL] [18]) ? (((((/* implicit */_Bool) arr_9 [i_4] [i_4] [(short)23] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))) : (var_3))) : (((/* implicit */unsigned long long int) min((arr_14 [i_1] [10LL] [23U] [10LL]), (((/* implicit */long long int) var_6)))))))));
                                var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)27899))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)27899)) || (((/* implicit */_Bool) (signed char)-54))))) : ((+(arr_15 [i_1]))))) | (((/* implicit */int) (unsigned short)10151))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_6 = 1; i_6 < 22; i_6 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((458756492), (((/* implicit */int) (unsigned short)35552))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) max((var_9), (((/* implicit */signed char) arr_3 [i_1]))))))))) : (((arr_5 [i_1] [i_2 + 1]) ? (arr_14 [i_1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) : (arr_14 [i_1] [i_2 + 1] [i_6] [i_6])))));
                    var_16 -= ((/* implicit */signed char) arr_22 [i_1] [13] [i_2] [i_6]);
                    var_17 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-27899)), (arr_10 [(unsigned short)18])))) ? (arr_14 [i_6 + 2] [i_6] [4] [i_2 - 1]) : (((/* implicit */long long int) arr_7 [i_1]))))), (((((_Bool) 1158760279199141306ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [10U] [i_2] [i_1]))) : (((unsigned long long int) arr_10 [i_1]))))));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 25; i_8 += 3) 
                        {
                            {
                                arr_30 [i_6] [1] [2U] [1] [i_8] [i_8] = ((/* implicit */int) arr_9 [i_2] [i_2] [i_7] [i_8]);
                                var_18 = ((/* implicit */unsigned short) arr_23 [i_1] [2LL] [i_6] [i_6]);
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-27901)) ? (-1756216608) : (((/* implicit */int) var_6))));
                                var_20 = ((/* implicit */unsigned short) -7458666417227420535LL);
                            }
                        } 
                    } 
                    arr_31 [i_6] = ((/* implicit */_Bool) ((unsigned int) max((((var_3) & (((/* implicit */unsigned long long int) arr_15 [21ULL])))), (((/* implicit */unsigned long long int) (~(arr_15 [(unsigned short)6])))))));
                }
                for (unsigned short i_9 = 1; i_9 < 22; i_9 += 1) /* same iter space */
                {
                    var_21 *= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) arr_6 [i_9 + 2])) : (((/* implicit */int) arr_6 [i_9 + 3]))))));
                    arr_36 [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((15222201441306716954ULL) * (((/* implicit */unsigned long long int) 0LL))));
                    arr_37 [i_1] [8LL] [i_9] [(_Bool)1] = ((/* implicit */unsigned int) ((int) arr_7 [i_2]));
                }
                arr_38 [i_1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_35 [i_1] [(short)9] [(short)9] [(_Bool)1]), ((+(arr_35 [i_1] [12] [(unsigned short)13] [i_1])))))) ? (((/* implicit */int) arr_17 [i_2] [i_2 + 1] [i_2] [(_Bool)1] [(_Bool)1] [i_2] [i_2 + 1])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (var_3) : (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */int) arr_28 [i_2 - 1] [i_2 - 1] [(unsigned short)6] [(unsigned char)4] [i_1] [(unsigned short)6] [i_2 + 1])) : (((/* implicit */int) var_9))))));
            }
        } 
    } 
}
