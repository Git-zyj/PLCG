/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219185
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
    for (short i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_9 [8] [8] [i_2] [i_3] = ((/* implicit */signed char) (+((-(var_11)))));
                            arr_10 [i_0 - 1] [i_1] [i_2 - 1] [i_3] [i_1 + 1] = max((((/* implicit */int) var_6)), (var_11));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 4) 
                {
                    for (short i_5 = 2; i_5 < 11; i_5 += 2) 
                    {
                        for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) var_2);
                                var_18 = ((/* implicit */unsigned long long int) var_5);
                                var_19 *= ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)2039)), ((unsigned short)65512)))) * ((((+(((/* implicit */int) var_13)))) / (((/* implicit */int) (signed char)-1))))));
                            }
                        } 
                    } 
                } 
                var_20 += ((/* implicit */signed char) min((((((-10) + (((/* implicit */int) var_8)))) / (((/* implicit */int) (signed char)62)))), (max((((/* implicit */int) (signed char)-70)), (10)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            {
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */short) (signed char)39)))))))), (min(((~(10))), (((/* implicit */int) (signed char)-62)))))))));
                var_23 = ((/* implicit */short) var_15);
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    for (short i_10 = 4; i_10 < 22; i_10 += 1) 
                    {
                        {
                            arr_31 [i_7] [(signed char)17] [(signed char)17] [(signed char)17] [i_10 - 1] = ((/* implicit */unsigned short) min((((/* implicit */int) min((((((/* implicit */int) var_8)) <= (var_11))), ((_Bool)1)))), (max((max((((/* implicit */int) (signed char)59)), (10))), (((var_11) - (((/* implicit */int) (unsigned short)65535))))))));
                            arr_32 [i_7] [i_8] [12U] [12U] [i_9] [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) - ((+(var_14)))));
                            arr_33 [21ULL] [i_8] [i_8] [i_9] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) (signed char)0))));
                            arr_34 [i_7] = ((/* implicit */unsigned int) var_7);
                            arr_35 [(signed char)4] [i_8] [i_7] [i_10 - 4] = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) * (((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) ^ (857259531400065727LL))))), (((/* implicit */long long int) ((((((/* implicit */int) var_9)) ^ (((/* implicit */int) (unsigned short)1)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 3) 
    {
        for (signed char i_12 = 0; i_12 < 20; i_12 += 1) 
        {
            {
                var_24 += ((/* implicit */short) ((((/* implicit */int) ((10861581297277163938ULL) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)3)) - (1073741823))))))) | (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 20; i_13 += 1) 
                {
                    for (short i_14 = 4; i_14 < 19; i_14 += 3) 
                    {
                        {
                            arr_47 [i_12] [(short)14] [(unsigned char)19] [(unsigned char)19] = ((/* implicit */long long int) (signed char)69);
                            var_25 = ((((/* implicit */int) var_15)) & (((/* implicit */int) (signed char)-126)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 1) 
                {
                    for (unsigned short i_16 = 0; i_16 < 20; i_16 += 4) 
                    {
                        for (unsigned int i_17 = 0; i_17 < 20; i_17 += 2) 
                        {
                            {
                                arr_57 [i_17] [i_12] [i_12] [i_16] [i_16] [i_12] [14LL] = ((/* implicit */short) ((((max((((/* implicit */unsigned int) (short)-1)), (var_14))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) / (1046344917)))))) == (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) min((var_5), ((signed char)70)))))))));
                                var_26 += ((/* implicit */unsigned char) 7585162776432387677ULL);
                                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
