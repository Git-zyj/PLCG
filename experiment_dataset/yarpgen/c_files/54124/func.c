/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54124
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
    var_18 -= ((/* implicit */short) (+(var_7)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((-1778083393) + (var_8)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_0 [i_0]))))))));
        var_20 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_1] [i_1]);
        arr_8 [i_1] = ((/* implicit */signed char) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(var_13))))) & (var_7))));
    }
    for (short i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            for (long long int i_4 = 1; i_4 < 17; i_4 += 3) 
            {
                {
                    arr_16 [14U] [i_4] [i_4] = ((/* implicit */unsigned long long int) -1778083393);
                    arr_17 [i_4] = ((/* implicit */long long int) arr_15 [(signed char)7]);
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        arr_21 [i_4] [i_4] [i_3] [i_4 + 2] [2LL] [i_3] = ((/* implicit */long long int) ((((((arr_0 [i_2]) != (((/* implicit */long long int) var_6)))) ? (((((/* implicit */int) arr_11 [i_2] [i_3] [i_3])) + (((/* implicit */int) var_15)))) : ((~(((/* implicit */int) var_3)))))) / (((((/* implicit */_Bool) ((arr_12 [i_2]) ^ (((/* implicit */long long int) 1))))) ? (((/* implicit */int) var_1)) : ((+(arr_19 [15] [i_3] [i_3] [i_3] [i_3] [i_3])))))));
                        arr_22 [i_2] [(unsigned short)11] [i_4 + 1] [(unsigned short)11] [i_4] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) max((arr_1 [i_2] [(unsigned char)2]), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_3] [5U])))), (var_12)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            var_21 ^= ((/* implicit */int) (+(((((/* implicit */_Bool) arr_12 [i_2])) ? (var_2) : (var_16)))));
                            var_22 = ((/* implicit */unsigned int) arr_11 [i_2] [i_4 + 2] [i_4]);
                        }
                    }
                    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        arr_28 [i_7] [i_7] [i_4] [i_4] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (var_16))), (((/* implicit */long long int) var_1))))) && (((/* implicit */_Bool) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) arr_11 [i_2] [i_3] [i_3])) : (((/* implicit */int) var_13))))))))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */int) var_15)) << (((/* implicit */int) ((((((/* implicit */_Bool) (short)-23086)) ? (arr_20 [i_2] [i_3] [i_3] [14U] [8ULL] [i_7]) : (((/* implicit */unsigned long long int) 1152921229728940032LL)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1586)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_16)))))))));
                        var_24 = ((/* implicit */short) ((((/* implicit */long long int) var_0)) > (var_2)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_8 = 1; i_8 < 16; i_8 += 4) 
                        {
                            arr_33 [i_8] [i_4] [i_4] [i_4] [15U] = ((/* implicit */unsigned short) ((arr_14 [i_3] [i_4]) & (((/* implicit */long long int) 4294967269U))));
                            arr_34 [i_3] [i_4] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_9))) ? (((/* implicit */long long int) ((unsigned int) var_6))) : (348947638549355993LL)));
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_7] [i_4] [(unsigned short)1])) >> (((var_7) - (7576103297331772259LL)))))) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */long long int) 1802689381)) & (var_17)))));
                        }
                    }
                    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned int) (((!(((((/* implicit */unsigned int) ((/* implicit */int) var_11))) <= (2169647846U))))) ? ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_15 [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                            arr_40 [i_4] [i_3] [i_3] [i_9] [i_10 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) >= ((-(2108880427U)))))) + ((-(((var_12) - (((/* implicit */int) var_3))))))));
                            var_28 ^= ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) (~(((/* implicit */int) (short)-3241))))))));
                            arr_41 [10LL] [i_2] [i_3] [i_4] [i_9] [i_10 - 1] = ((((/* implicit */_Bool) ((36028794871480320LL) + (((/* implicit */long long int) min((arr_35 [i_4] [(unsigned char)0] [i_4] [i_9]), (var_0))))))) ? (var_10) : (((((/* implicit */_Bool) max((var_14), (((/* implicit */long long int) (short)-11250))))) ? (((((/* implicit */_Bool) (short)-23099)) ? (var_10) : (var_5))) : (((/* implicit */long long int) var_6)))));
                        }
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned short) var_8);
    }
    var_30 -= ((/* implicit */signed char) var_4);
    var_31 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)19)), (var_2)))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_15))))))))));
    var_32 = ((/* implicit */int) (-(var_16)));
}
