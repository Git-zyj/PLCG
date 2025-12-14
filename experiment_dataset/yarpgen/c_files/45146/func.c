/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45146
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
    var_13 |= ((/* implicit */long long int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)33291)) ? (2905723501645755660ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17673))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_3 [i_0] [(short)9])))) ? (max((2775938979954557794LL), (arr_1 [(unsigned short)10] [i_0]))) : (var_8)))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_12 [(short)13] [(short)13] [i_2] [i_2] = ((/* implicit */unsigned long long int) (((~((((_Bool)1) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)7433)))))) > (((/* implicit */int) (short)7441))));
                                var_15 = ((/* implicit */unsigned char) min((var_15), ((unsigned char)154)));
                            }
                        } 
                    } 
                } 
                var_16 += (unsigned char)29;
                arr_13 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? ((+(((((/* implicit */_Bool) 5750018965501421470ULL)) ? (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1])) : (var_1))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)1329)) <= (((/* implicit */int) (unsigned short)1332))))) >= (max((((/* implicit */int) arr_10 [i_1] [i_1])), (arr_7 [i_0] [i_1] [i_0] [i_1])))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)1354)) != (((/* implicit */int) (unsigned short)56768))));
    var_18 = ((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) (unsigned char)158)));
    var_19 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_6)) ? (((var_1) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4044))))) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_3))))))), (((/* implicit */long long int) max(((unsigned char)163), ((unsigned char)100))))));
}
