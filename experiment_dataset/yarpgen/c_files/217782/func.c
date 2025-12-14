/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217782
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
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_3))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned short) arr_2 [i_0] [7U]);
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) arr_0 [i_0] [i_1]);
                var_20 = ((/* implicit */long long int) (!((_Bool)1)));
            }
        } 
    } 
    var_21 = ((/* implicit */short) max(((+(((var_7) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_16)))))), (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (signed char i_2 = 4; i_2 < 10; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    for (short i_5 = 3; i_5 < 11; i_5 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
                            {
                                var_22 = ((/* implicit */unsigned char) ((unsigned int) ((_Bool) arr_5 [i_6])));
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((1218473056U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)46))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)207))))))));
                                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_13 [i_4]))));
                                var_25 = ((_Bool) arr_15 [6ULL] [(short)6] [i_2] [i_2]);
                            }
                            /* vectorizable */
                            for (unsigned char i_7 = 1; i_7 < 10; i_7 += 3) 
                            {
                                var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) (unsigned char)46)))));
                                var_27 = ((/* implicit */unsigned short) var_17);
                                arr_24 [7LL] [i_3] [7LL] [i_3] [i_3] = ((/* implicit */unsigned int) var_13);
                            }
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)41)), (108331718)))) ? (((((unsigned long long int) var_7)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) : (((/* implicit */unsigned long long int) max((arr_23 [i_3] [i_2 - 1] [i_3]), (((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_2] [i_2] [i_4] [i_4] [i_5]))))))))));
                            /* LoopSeq 2 */
                            for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
                            {
                                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_5 - 3] [i_2 - 1])) % (((/* implicit */int) arr_16 [i_5 - 2] [i_2 - 4]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_5 - 3] [i_2 - 3]))))) : (((/* implicit */int) ((((/* implicit */int) arr_16 [i_5 + 1] [i_2 - 1])) <= (((/* implicit */int) arr_16 [i_5 - 3] [i_2 - 3])))))));
                                var_30 = ((/* implicit */long long int) ((unsigned char) ((short) (!(((/* implicit */_Bool) (unsigned char)48))))));
                                var_31 = ((/* implicit */unsigned int) var_15);
                            }
                            for (unsigned short i_9 = 0; i_9 < 12; i_9 += 2) /* same iter space */
                            {
                                var_32 = (-((((!(((/* implicit */_Bool) var_16)))) ? (((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)207))))))));
                                arr_29 [i_3] [(unsigned char)7] [i_3] = (~(((/* implicit */int) (unsigned char)68)));
                            }
                            var_33 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((int) arr_4 [i_2] [i_2 - 4] [8]))))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [13LL] [(_Bool)1])) ? (((/* implicit */int) arr_17 [(short)1] [(_Bool)1] [(short)1] [(short)1])) : (((/* implicit */int) arr_21 [i_4])))), (((/* implicit */int) var_16)))))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */unsigned short) max(((unsigned char)212), ((unsigned char)59)));
                arr_30 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned char) var_7)), ((unsigned char)209)))) / (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
