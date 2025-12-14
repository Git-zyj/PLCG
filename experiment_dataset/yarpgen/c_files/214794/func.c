/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214794
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
    for (int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */unsigned char) arr_3 [i_2 + 2] [i_0 + 2]);
                        var_13 = max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) (short)285))))));
                        arr_10 [i_2] = ((/* implicit */unsigned int) (~(0ULL)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
                        {
                            arr_14 [i_2] [(_Bool)1] [i_2] [(_Bool)1] [i_4] [i_4] [i_2] = ((/* implicit */unsigned char) ((var_7) ? (((/* implicit */int) (short)-284)) : (((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 1] [i_2 + 3]))));
                            arr_15 [i_0] [i_2] [i_2] = (!(((/* implicit */_Bool) (short)-276)));
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((8052241306798562034LL) >> (((/* implicit */int) var_7))))) ? (arr_7 [(unsigned short)6] [i_2 + 4] [i_0 - 2]) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)9)))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
                        {
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((var_1), (((/* implicit */unsigned char) var_0))))), (var_3)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 2] [i_3]))))) : ((~(arr_9 [i_0] [0U] [i_2])))));
                            arr_18 [i_0] [i_2] [i_0 + 2] [i_0 + 2] [i_0] = ((/* implicit */unsigned char) var_8);
                            arr_19 [i_2] = (!(((/* implicit */_Bool) (~(arr_17 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0])))));
                            var_16 = ((/* implicit */_Bool) arr_2 [i_0]);
                        }
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        arr_24 [i_0 + 1] [i_0] [i_0 + 1] [i_2] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) > (1298492998694285178ULL)))), (((min((((/* implicit */unsigned int) (signed char)63)), (arr_2 [i_0]))) ^ (((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [i_0] [i_0] [i_2] [i_2] [i_6] [i_6 - 1])))))))));
                        var_17 &= ((/* implicit */short) ((((((/* implicit */_Bool) 2147483635)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)302))))) << (((max((((var_5) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-285)))), (-1282455047))) + (295)))));
                        var_18 = ((/* implicit */long long int) arr_9 [6LL] [i_0] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (-(arr_8 [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_2] [i_0 - 2])));
                                arr_29 [i_2] [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned short) (+((+(min((((/* implicit */unsigned int) var_1)), (arr_9 [i_0] [i_0] [i_0])))))));
                                arr_30 [i_0 + 1] [i_7] [i_1] [i_2 + 1] [i_2 + 1] [i_8] |= ((/* implicit */signed char) var_1);
                                var_20 ^= ((/* implicit */int) var_7);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) -5541014246271112862LL);
    var_22 = ((/* implicit */unsigned char) var_10);
}
