/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196665
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? ((~((~(var_7))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)23034))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) -1545950875)) : (5679601736104396931LL)))) ? (max((((/* implicit */int) (_Bool)1)), (1545950875))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1545950876)) ? (var_5) : (((/* implicit */long long int) 1545950881))))) && (((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) var_9)))))))) : (((int) ((((/* implicit */_Bool) var_3)) ? (1545950886) : (-1545950903))))));
                                var_14 *= ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -4079962260792357245LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5679601736104396943LL)))) ? (1545950881) : (2073440671)))));
                                var_15 = ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((((var_4) + (-2070475365))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 2; i_5 < 23; i_5 += 2) 
                {
                    for (unsigned short i_6 = 1; i_6 < 22; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */int) max((var_16), (((((arr_11 [i_6] [i_6 + 1] [i_1] [i_1]) / (arr_11 [i_6] [i_6 - 1] [i_6 + 1] [i_0]))) - ((+(((/* implicit */int) var_11))))))));
                            var_17 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) var_8)) % (((/* implicit */int) arr_8 [i_5 - 1] [i_5] [i_6 + 1] [i_6 + 1])))));
                            var_18 = ((/* implicit */int) min(((~(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((int) var_4)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    arr_18 [i_7] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((((((/* implicit */int) (_Bool)1)) | (arr_9 [i_0]))) <= (((/* implicit */int) (unsigned short)65534)))) ? (((/* implicit */long long int) ((unsigned int) ((18446744073709551615ULL) - (var_2))))) : (((((-5679601736104396943LL) + (9223372036854775807LL))) >> (10ULL)))));
                    var_19 -= ((/* implicit */short) (unsigned char)231);
                    arr_19 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned short) var_3)))))))) & ((+(((/* implicit */int) (short)20981))))));
                    arr_20 [i_1] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (18446744073709551605ULL)))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) <= (-1545950880)))) : (((/* implicit */int) (unsigned char)175))))), (5374519698204303288LL)));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) < (var_4))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned short) var_4)))))) & (((((/* implicit */_Bool) -2098944256)) ? (var_7) : (((/* implicit */long long int) max((var_4), (12))))))));
    var_21 = ((/* implicit */int) var_8);
}
