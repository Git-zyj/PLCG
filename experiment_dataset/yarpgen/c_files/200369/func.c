/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200369
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
    var_18 = ((/* implicit */signed char) ((unsigned short) min((var_6), (((/* implicit */unsigned char) var_9)))));
    var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(var_8)))) < (var_2)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_1 [i_0])))));
        arr_3 [16U] = ((/* implicit */long long int) min((((signed char) var_17)), (((/* implicit */signed char) ((_Bool) arr_0 [i_0])))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 2) /* same iter space */
        {
            var_20 = (_Bool)1;
            var_21 = ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) ((signed char) arr_4 [i_1]))), ((unsigned short)63013)))) >= (((/* implicit */int) ((unsigned char) (_Bool)1)))));
            arr_6 [(unsigned short)16] [i_1] = ((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1]);
        }
        for (unsigned int i_2 = 1; i_2 < 20; i_2 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        {
                            arr_18 [i_0] [i_0] [i_2 - 1] [5LL] [i_3] [i_4] [i_5] = ((/* implicit */short) ((unsigned int) max(((+(((/* implicit */int) (unsigned short)29100)))), (((int) 7300910487139499530LL)))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (((((_Bool)1) ? (1940569514829078244ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) * (8662676982073528835LL)));
                            var_23 = ((/* implicit */_Bool) ((min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (4969933886678649681LL))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)12764))))))) / (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)2522)) - (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)52745)) : (((/* implicit */int) (_Bool)1)))))))));
                            arr_19 [i_0] [i_0] [(signed char)12] [i_3] [i_5] &= ((((((/* implicit */_Bool) (+(var_0)))) ? ((~(-9223372036854775807LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_3))))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_0]))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) min((arr_15 [i_0] [i_0] [i_0] [i_2 + 1] [i_0] [i_2 + 1]), (var_9)))), (min((((/* implicit */unsigned long long int) (unsigned short)504)), (1511817719454419173ULL))))))))));
            arr_20 [i_0] &= ((/* implicit */_Bool) (((+(((/* implicit */int) arr_15 [i_0] [i_2 + 1] [i_0] [9LL] [i_0] [i_0])))) / (((/* implicit */int) max(((signed char)15), (((/* implicit */signed char) (_Bool)1)))))));
        }
        for (unsigned int i_6 = 1; i_6 < 20; i_6 += 2) /* same iter space */
        {
            arr_24 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (unsigned short)2523)) : (((/* implicit */int) (unsigned short)25880))))));
            arr_25 [i_0] &= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)23175))));
        }
    }
    var_25 = ((/* implicit */unsigned long long int) var_17);
    var_26 ^= ((/* implicit */long long int) ((unsigned long long int) var_17));
}
