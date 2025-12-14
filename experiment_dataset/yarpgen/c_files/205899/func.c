/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205899
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_8 [(unsigned char)1] [i_0] [i_1] [i_2] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))), (arr_2 [i_1 + 1] [i_1 + 1]))), (((/* implicit */unsigned long long int) max((22U), (((/* implicit */unsigned int) ((unsigned short) (unsigned char)120))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        arr_12 [i_0 + 1] [i_0 - 1] [i_1] [i_1 - 1] [i_2] [i_0 + 1] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned char)136))))));
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (unsigned char)120))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) (-(18446744073709551595ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) (unsigned short)41339))))) : (((unsigned long long int) arr_5 [i_1] [i_1 + 1] [3]))))));
                        var_18 = ((/* implicit */short) ((unsigned char) arr_7 [i_3] [i_2] [i_1] [i_0]));
                    }
                    for (signed char i_4 = 1; i_4 < 20; i_4 += 4) 
                    {
                        arr_16 [i_1] [(_Bool)1] [i_1] [i_1 - 1] [i_1] [i_1 + 2] = ((/* implicit */short) (~(5760897810167442953ULL)));
                        var_19 = ((var_16) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1554440749U))))), (arr_6 [i_1 + 2]))))));
                        arr_17 [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((short) (~(((/* implicit */int) var_5)))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 4) 
                        {
                            var_20 = ((/* implicit */short) arr_7 [i_1 + 1] [i_1 + 1] [i_4] [i_5 - 1]);
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) (unsigned char)206))));
                            var_22 -= ((/* implicit */unsigned char) ((unsigned short) arr_14 [i_0] [i_0 + 1] [i_0 + 1] [i_2] [i_4] [i_5 + 1]));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((max((max((arr_2 [i_4] [i_0]), (((/* implicit */unsigned long long int) 4409307744765315465LL)))), (((/* implicit */unsigned long long int) var_2)))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)16383)))))));
                            var_24 = ((/* implicit */unsigned short) var_16);
                            var_25 = ((((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 1]))) | (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)92))))));
                        }
                    }
                    var_26 = ((/* implicit */short) ((unsigned long long int) (+(arr_23 [i_0 - 1]))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned char) var_9);
    var_28 = ((/* implicit */_Bool) var_13);
}
