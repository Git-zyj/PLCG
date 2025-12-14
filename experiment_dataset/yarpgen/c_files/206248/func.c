/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206248
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
    var_13 = ((/* implicit */short) min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3 - 2] [i_4 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65530)) - (((/* implicit */int) min((((/* implicit */unsigned char) arr_10 [i_0] [i_0])), ((unsigned char)253)))))))));
                                arr_15 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)39)) ? (3778236888623529670ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1793)))))))) == (15450301313252493345ULL)));
                                arr_16 [i_0] [i_1] [i_2 - 1] [i_3] [i_4 - 2] = ((/* implicit */unsigned int) (short)1793);
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_2 + 1] [i_1] = ((/* implicit */signed char) (-((-(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (13140861136513877575ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
                    arr_18 [i_0] [i_1] [i_2 - 1] = ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) (unsigned char)199)), ((+(((/* implicit */int) (unsigned short)52960))))))));
                    arr_19 [i_0] [i_1] [i_0] = ((/* implicit */signed char) min(((short)1793), (((/* implicit */short) min(((unsigned char)45), (((/* implicit */unsigned char) (signed char)51)))))));
                    arr_20 [i_0] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (((+(((/* implicit */int) arr_13 [i_0] [i_2] [i_2] [i_2] [i_2 + 1] [i_2 + 1])))) + (((/* implicit */int) (signed char)102))))), ((~(2828315538U)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) (~(var_5)));
    var_15 = ((/* implicit */unsigned long long int) (+((((_Bool)1) ? (((/* implicit */int) (unsigned short)38927)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))))));
}
