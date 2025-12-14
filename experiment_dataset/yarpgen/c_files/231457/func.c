/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231457
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
    var_13 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) : (min((var_11), (((/* implicit */unsigned long long int) var_1))))))));
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) var_1))) <= (((/* implicit */int) ((short) (short)4095))))))) > (((unsigned int) (-(((/* implicit */int) var_9))))))))));
    var_15 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    var_16 -= ((/* implicit */unsigned long long int) ((long long int) (short)-32755));
                    var_17 = ((/* implicit */signed char) var_10);
                    var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_1 + 1]))));
                }
                var_19 ^= ((/* implicit */unsigned int) max(((signed char)48), (max(((signed char)127), ((signed char)-29)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    var_20 = ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_1 - 1] [i_3]);
                    var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((arr_4 [i_3]) / (arr_4 [i_3]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                    var_23 = ((/* implicit */unsigned short) ((unsigned long long int) (+(arr_0 [i_1] [i_3]))));
                }
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_5 - 1])) ? (((/* implicit */int) arr_14 [i_5 - 1])) : (((/* implicit */int) arr_14 [i_5 - 1]))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 1]))) / (((((/* implicit */_Bool) var_7)) ? (arr_7 [i_5 - 1] [i_4] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0])))))));
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */long long int) ((int) (short)-16384));
                        var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)(-32767 - 1)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_4])))))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 35150012350464LL)) ? (((/* implicit */int) (unsigned short)46228)) : (((/* implicit */int) (signed char)0))));
                        }
                    }
                    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (short)-32756))) || ((!(((/* implicit */_Bool) arr_15 [i_4] [i_4]))))));
                    var_31 += ((/* implicit */signed char) ((int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) * (var_12))));
                }
            }
        } 
    } 
}
