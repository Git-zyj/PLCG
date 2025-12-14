/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240049
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
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) var_3)) & ((-((-(((/* implicit */int) (short)(-32767 - 1))))))))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)32748)) & (((/* implicit */int) (unsigned short)52901))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) (_Bool)0)))))));
                    arr_8 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) (short)32767))))), (((((/* implicit */int) var_6)) + ((((_Bool)1) ? (((/* implicit */int) (unsigned short)42707)) : (((/* implicit */int) (short)-32764))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)32755)) : (((/* implicit */int) (unsigned char)101))))) ? (min((((/* implicit */long long int) (signed char)-48)), (932014868390009044LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32762)))))));
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            arr_16 [i_1] [i_1] = ((/* implicit */unsigned short) max((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3251518174933181419LL)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned char)190))))))))));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_4] [i_0] [i_1])))))) | (((((/* implicit */long long int) ((/* implicit */int) var_6))) | (144080003703767040LL)))))))));
                            arr_17 [i_1] [i_1] [(unsigned char)8] [i_2 + 2] [i_1] = var_9;
                        }
                        /* vectorizable */
                        for (long long int i_5 = 2; i_5 < 11; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */signed char) arr_11 [i_0] [i_1]);
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 144080003703767040LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49921))) : (5927296337391661343LL)));
                            var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19994)) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */_Bool) var_8)) ? (var_1) : (arr_11 [i_5] [i_1]))) : ((-(((/* implicit */int) (_Bool)1))))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_15 [i_2] [(unsigned short)10] [i_2 - 1] [i_2] [i_0] [i_3]))));
                            arr_20 [i_0] [i_1] [i_0] [4LL] [i_1] = ((/* implicit */short) arr_18 [i_1]);
                        }
                        for (unsigned short i_6 = 2; i_6 < 12; i_6 += 2) 
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_21 [i_0] [i_0] [i_2] [i_1] [i_6 - 1] [i_1]), ((signed char)(-127 - 1))))) ^ (((/* implicit */int) arr_9 [i_0] [i_1] [i_6 - 2] [i_3] [i_6] [i_1]))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) && ((_Bool)0)))), (((unsigned long long int) (short)0)))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)-19)))) ? (((((/* implicit */_Bool) (signed char)3)) ? (var_8) : (((/* implicit */long long int) 1376155608)))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2 - 3] [i_3] [(signed char)1] [i_1]))))))));
                            var_25 += ((/* implicit */unsigned short) ((18304425330349020719ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                            var_26 = ((/* implicit */long long int) var_4);
                        }
                    }
                }
            } 
        } 
    } 
}
