/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42127
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
    for (short i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 += ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) (_Bool)1)))) / ((-((+(562197746740541681LL)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
                    {
                        arr_13 [(unsigned short)17] [i_0] [i_2] [(unsigned short)17] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_12 [i_0 + 1] [i_1] [i_2] [i_0 + 1] [i_0]))))));
                        arr_14 [i_0] [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0] [i_0 + 3])) : (((/* implicit */int) arr_3 [i_0] [i_0 - 1]))))));
                        arr_15 [i_0] [i_1] [i_1] [i_0] [(unsigned char)3] = var_11;
                    }
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                    {
                        var_17 &= ((/* implicit */short) (+(var_13)));
                        arr_20 [i_0] [i_1] [(_Bool)1] [i_4] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551586ULL)) ? (34359214080LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 3]))))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_18 -= ((/* implicit */short) var_12);
                                arr_25 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) != (arr_22 [i_0] [(unsigned char)12] [17U] [17U]))) ? (((/* implicit */int) ((signed char) (_Bool)0))) : (((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_2]))))) : (((168956411U) * (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) min((((/* implicit */int) (short)-8192)), ((-2147483647 - 1)))))));
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)33451)) != (-919924833))))) : ((((_Bool)0) ? (3115893450759488890LL) : (((/* implicit */long long int) var_3)))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 16; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            {
                                arr_32 [i_0] [i_1] [(unsigned short)10] [13ULL] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (-34359214059LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32757)))))) && (((/* implicit */_Bool) min((1390461958U), (((/* implicit */unsigned int) var_3))))))) ? (((unsigned int) arr_6 [i_0 + 3] [i_0 + 2] [i_0 + 2])) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (((/* implicit */unsigned char) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_8)))))))))));
                                var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((1443477808U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))))) < (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1))))) - ((((_Bool)1) ? (34359214091LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                                arr_33 [i_1] [12LL] [i_2] [12LL] [8LL] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_1] [i_1] [4U] [i_2] [12LL] [12LL] [12LL])) ? ((-(arr_22 [i_0] [i_0] [(_Bool)1] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 34359214059LL)) && (((/* implicit */_Bool) var_14))))))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_8))) - (((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */long long int) 919924814)) : (562197746740541681LL))))) : (((/* implicit */long long int) (~(4294967273U)))));
                                arr_34 [i_0] [i_0] [i_1] [11] [i_0] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-6228)) : (((/* implicit */int) var_6))))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)32748), (((/* implicit */short) (unsigned char)209)))))))) : (((/* implicit */unsigned long long int) (+(var_15))))));
}
