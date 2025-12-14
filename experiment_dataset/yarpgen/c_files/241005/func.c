/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241005
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
    var_13 = ((/* implicit */unsigned int) var_3);
    var_14 = ((/* implicit */_Bool) max((var_7), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (var_5)))) ? (((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_12) != (((/* implicit */long long int) var_8))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 663532153U)) : (arr_4 [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned short)34899)))))))) ? (((((/* implicit */_Bool) 703625424U)) ? (703625413U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34929))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_3 [i_1])))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)34890))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 1; i_4 < 14; i_4 += 3) 
                            {
                                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min(((signed char)30), (((/* implicit */signed char) (_Bool)0)))))));
                                var_17 = ((/* implicit */int) ((((((/* implicit */long long int) var_5)) <= (arr_2 [i_0 + 2]))) && (arr_13 [i_0] [i_0] [i_2] [(_Bool)1] [i_4] [(unsigned char)0] [i_0])));
                            }
                            arr_14 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) ((short) (unsigned short)30621));
                            var_18 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 2286174806U)) <= (-5871211045874153109LL))))) > (2286174804U));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            for (unsigned int i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                {
                    arr_26 [i_5] [i_6] [i_6] = ((/* implicit */_Bool) var_6);
                    /* LoopSeq 1 */
                    for (int i_8 = 2; i_8 < 11; i_8 += 3) 
                    {
                        var_19 = ((/* implicit */_Bool) min((18446744073709551611ULL), (((/* implicit */unsigned long long int) (short)26307))));
                        var_20 = ((/* implicit */_Bool) var_2);
                        arr_29 [3] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) (((+(((/* implicit */int) arr_9 [i_6] [i_6] [i_8 + 2] [i_8 + 1])))) >> (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_7 [i_7] [i_8 + 1] [i_8 + 1] [i_8]))) - (18446744071890569250ULL)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4294967285U)) || (((/* implicit */_Bool) 11)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [10ULL] [i_9] [i_10])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_22 [i_7])))))));
                                arr_35 [i_10] = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) (short)26286)) >> (((((/* implicit */int) (short)30926)) - (30917))))));
                                arr_36 [i_10] [i_6] [10] [i_10] = ((/* implicit */short) (!((_Bool)0)));
                                arr_37 [i_5] [i_6] [i_5] [i_9] [i_10] [i_9] [i_6] = ((/* implicit */unsigned long long int) var_7);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)-26317)), (((((/* implicit */_Bool) ((int) (unsigned char)31))) ? (10218836094866932613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) var_9))))))))));
                    arr_38 [i_7] [i_6] [i_5] [i_5] = ((/* implicit */unsigned char) ((unsigned short) ((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_5])) && (((/* implicit */_Bool) var_4)))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned short) (short)10422)), ((unsigned short)47425)));
}
