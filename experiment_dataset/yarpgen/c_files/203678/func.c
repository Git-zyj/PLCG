/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203678
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
    var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_1)) << (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))) - (16616))))) - (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-70))))) ? (((((/* implicit */int) (signed char)114)) << (((var_4) - (2457927641218822112ULL))))) : (((((/* implicit */int) (unsigned short)35744)) + (((/* implicit */int) var_6)))))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) | (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_9)) - (((/* implicit */int) (unsigned short)29784)))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) (-(((12U) << (((4294967284U) - (4294967265U)))))));
                        var_17 = ((/* implicit */long long int) ((var_13) / (((/* implicit */int) var_12))));
                        var_18 = ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) == (10255470332316975401ULL)))) == (((/* implicit */int) var_6))))) ^ ((-(((/* implicit */int) var_0)))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */unsigned long long int) 4072273451U)) != (((11062191324412648428ULL) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)35744))))))))))));
                        var_20 += ((/* implicit */unsigned char) 251658240);
                    }
                    arr_15 [i_0] [6U] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)35744)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35744))))) | (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_12)))))))));
                    var_21 += ((/* implicit */signed char) ((((((/* implicit */_Bool) 8191273741392576208ULL)) ? (((/* implicit */int) (unsigned short)29533)) : (((/* implicit */int) (unsigned short)35744)))) | ((-(((/* implicit */int) (unsigned char)182))))));
                }
            } 
        } 
    } 
}
