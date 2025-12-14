/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220855
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
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) var_8);
        var_13 = ((/* implicit */signed char) 6917035560171357291LL);
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 1; i_2 < 11; i_2 += 1) 
        {
            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_5))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 4; i_3 < 11; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    {
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((int) (-(2977403297210519341LL)))))));
                        arr_15 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) (-(min(((-(((/* implicit */int) var_6)))), (((/* implicit */int) arr_0 [i_1] [i_1]))))));
                        var_16 *= ((/* implicit */short) max((((/* implicit */int) ((short) var_2))), (min((arr_14 [i_2 + 1] [i_2 - 1] [i_3] [i_3 - 4]), (((/* implicit */int) (unsigned char)53))))));
                        var_17 = ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) arr_7 [i_4])), (((14309549078288528528ULL) & (0ULL)))))));
                    }
                } 
            } 
        }
        arr_16 [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)139)))))))), ((-(arr_7 [i_1])))));
        var_18 = ((/* implicit */int) (~(max((arr_8 [i_1]), (arr_8 [i_1])))));
    }
    for (int i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)202)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_5] [i_5]))))) : (((/* implicit */int) max(((unsigned char)24), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)63)) == (-735065652)))))))));
        /* LoopNest 2 */
        for (signed char i_6 = 3; i_6 < 14; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                {
                    var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (820356677021736994LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)79)))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) 1586365716))));
                    var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)30)), ((short)-28114)))), ((-(arr_22 [i_5] [i_6 - 1] [i_7])))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_7))));
    var_24 = ((/* implicit */int) var_8);
}
