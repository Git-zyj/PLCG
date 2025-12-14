/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217966
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
    var_20 |= max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)62362)) >= (((/* implicit */int) (unsigned short)65520))))), (var_19)))), (((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)32)) * (((/* implicit */int) (unsigned short)65525))))) + (max((1719552767U), (((/* implicit */unsigned int) (unsigned short)21)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
                    {
                        var_21 ^= ((/* implicit */short) arr_3 [i_2]);
                        arr_15 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)9))));
                        var_22 = arr_8 [i_1] [i_2 + 1] [i_2] [i_3];
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_8)))) && (((/* implicit */_Bool) var_11))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */short) max((min(((-(((/* implicit */int) var_4)))), ((+(((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_2 + 1])) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) var_19))))));
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8092887773330201110LL)) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) (short)9))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_19))))) : (((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_2 + 1] [i_2 + 1] [i_2 + 1]))) : (arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_4]))))))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -2266772045552616308LL)) ? (2266772045552616309LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3))))), (((/* implicit */long long int) arr_17 [i_0] [i_2] [i_4]))))) ? ((+(-2266772045552616294LL))) : (min((2266772045552616327LL), (((/* implicit */long long int) arr_19 [i_0] [i_0] [i_0] [i_1] [i_2] [10]))))));
                        arr_20 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) arr_9 [i_1] [i_2] [i_4]);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 14; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                var_27 += ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned short)2)), (2266772045552616326LL)));
                                var_28 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_5 - 1] [i_6] [i_6]))) | (((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) % (((((/* implicit */_Bool) (unsigned short)23)) ? (arr_2 [(short)0]) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_5] [i_0])))))))));
                                arr_26 [i_0] [i_1] [i_2] [i_5] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)57), (((/* implicit */unsigned short) (short)-32749))))) ? (((/* implicit */int) (short)31744)) : (((/* implicit */int) var_12))));
                                var_29 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7794946348181890124ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (4068993143U)))) ? (((long long int) min((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [(unsigned short)6] [i_5])), (var_13)))) ? (((/* implicit */int) var_6)) : ((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
