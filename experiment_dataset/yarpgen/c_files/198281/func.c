/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198281
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_15))) ? (-2134545267) : (((/* implicit */int) (unsigned char)73))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) (unsigned char)73))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        var_22 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (short)0))) == (7829272921352957599LL))) ? (((((/* implicit */_Bool) (short)0)) ? (arr_3 [i_3 + 2] [i_2]) : (arr_3 [i_3 - 1] [i_0]))) : ((-(arr_3 [i_3 - 1] [i_0])))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) arr_8 [i_3 - 1] [i_0] [i_3 - 1] [i_3 - 1] [i_4])) : (((/* implicit */int) arr_8 [i_3 - 1] [1U] [2LL] [i_3] [i_4])))) - ((~(((/* implicit */int) var_12))))));
                            arr_10 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (890703040910002666LL) : (((/* implicit */long long int) ((/* implicit */int) (short)1589))))) > (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3 + 1] [i_4] [i_2] [i_3]))))))));
                            var_24 ^= ((/* implicit */unsigned long long int) -2134545267);
                        }
                        arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */short) ((((/* implicit */int) (signed char)-99)) > (2134545267)));
                    }
                    for (unsigned char i_5 = 4; i_5 < 22; i_5 += 3) 
                    {
                        var_25 ^= ((/* implicit */int) var_12);
                        arr_15 [i_1] = ((/* implicit */signed char) ((var_19) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((1309181850) >= (((/* implicit */int) var_12))))) : (((/* implicit */int) (unsigned short)26364))))) : ((-(var_10)))));
                    }
                    var_26 *= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) >= (5411225446353295581LL)));
                    arr_16 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */short) arr_4 [(_Bool)1] [i_1] [i_2])), ((short)32767)))) >= ((+(-2134545268)))));
                    arr_17 [i_0] [i_0] = ((/* implicit */int) arr_5 [(unsigned char)1] [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_27 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15))))), (((18446744073709551602ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32749)))))));
    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (short)-20733))))))) ? (((((/* implicit */_Bool) var_1)) ? ((-(var_10))) : (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((15657379795849381862ULL), (((/* implicit */unsigned long long int) var_15))))) || (((var_13) <= (var_13)))))))));
}
