/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53281
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                arr_8 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-82))) != (((((/* implicit */_Bool) arr_5 [i_0 + 1] [(_Bool)1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (8873794240319812124LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_1] [i_0])))) : ((-(min((((/* implicit */unsigned long long int) (signed char)76)), (arr_7 [i_1])))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_16 *= ((/* implicit */unsigned long long int) ((int) (-(arr_16 [i_2] [i_1 - 1] [i_1 - 1] [i_0 + 1] [i_0]))));
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((int) (signed char)121)) / (((/* implicit */int) ((((/* implicit */_Bool) 400409095U)) && (((/* implicit */_Bool) arr_2 [i_2] [i_4])))))))) ? (((/* implicit */int) ((((unsigned int) (signed char)27)) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)238)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) (unsigned char)16)))))) < (min((((/* implicit */unsigned long long int) (unsigned short)30512)), (arr_7 [i_3])))))))))));
                                var_18 = ((((((/* implicit */_Bool) -481238812)) || (((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1])))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_0)) : (var_7)))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)32761))) - (arr_5 [i_0] [i_1] [i_1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (unsigned char)10))))) ? (((/* implicit */int) (!(arr_1 [i_0])))) : (((/* implicit */int) arr_6 [(short)8] [i_3]))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [11U] = ((/* implicit */long long int) -2098014794);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((min((max((((/* implicit */unsigned long long int) -8873794240319812130LL)), (15234516433558123045ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-50)) / (((/* implicit */int) (unsigned char)238))))))) == (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) (unsigned short)11112)) : (((/* implicit */int) (!(((/* implicit */_Bool) 6275004816232479825LL)))))))))))));
}
