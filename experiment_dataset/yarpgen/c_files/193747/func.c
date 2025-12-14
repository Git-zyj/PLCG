/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193747
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 43282512)) ? (((((/* implicit */_Bool) 3101440104U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)58))) : (5649027147210519045ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
        var_21 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)36287)) : (-157343277)));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_4)))) ? (5800832444370020857ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        arr_18 [i_1] [i_2] [i_1] [i_2 + 2] [i_3] [i_3] = ((/* implicit */unsigned char) (_Bool)1);
                        var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -54010645)) ? (((/* implicit */int) (short)32755)) : (((/* implicit */int) var_10))))) : (1427987265U)))) | (((((/* implicit */_Bool) -953099166)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((-9223372036854775807LL - 1LL))))));
                        var_24 = ((/* implicit */_Bool) 2157688519U);
                        var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 1969122947)) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (2401659692141179466LL))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((var_3) + (((/* implicit */int) var_14)))) : (((/* implicit */int) var_12)))))));
                        arr_19 [i_1] [(short)10] [i_3] [i_4] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)14240)) : (((/* implicit */int) (_Bool)1))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        arr_22 [i_2] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_18)) ? (613089947U) : (((/* implicit */unsigned int) var_17))));
                        arr_23 [i_1] [i_2] [i_3] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_0))))) ? (((-2987026595528563587LL) + (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34)))));
                    }
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 1; i_7 < 14; i_7 += 2) 
                        {
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (~(var_4))))));
                            arr_29 [i_1] [i_1] [i_7] [i_6] [i_3] [i_7] [i_7] = ((/* implicit */signed char) (((_Bool)0) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((/* implicit */_Bool) var_18)) ? (var_6) : (((/* implicit */int) (short)172)))) : (var_9))) : ((((-2147483647 - 1)) ^ (1969122947)))));
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (-((~(((/* implicit */int) var_10)))))))));
                            var_28 = ((/* implicit */unsigned int) 1410924482);
                        }
                        arr_30 [i_3] [i_2] [i_2] [i_6] = var_15;
                    }
                }
            } 
        } 
        var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(9378557512980869399ULL)))) ? (((((/* implicit */_Bool) var_1)) ? (54010631) : (((/* implicit */int) (short)13684)))) : (((((/* implicit */_Bool) var_9)) ? (var_17) : (((/* implicit */int) (short)-25259))))));
        /* LoopSeq 2 */
        for (unsigned int i_8 = 3; i_8 < 15; i_8 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                var_30 = ((/* implicit */unsigned int) (+(-54010640)));
                /* LoopSeq 1 */
                for (int i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (unsigned char)6))));
                    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (((+(var_5))) ^ (((((/* implicit */_Bool) 687897958)) ? (((/* implicit */unsigned long long int) var_11)) : (var_5))))))));
                    var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32756)) ? (((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) -1259470811)) : (var_15))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (-1) : (-1354301426))))))) ? ((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (7))))) : (((/* implicit */int) ((var_2) && ((!((_Bool)1)))))));
                }
                arr_38 [i_1] [i_8] [i_8] [i_9] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)43442))))) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_19)));
                var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_4) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-19729)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_18)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                arr_39 [i_9] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (short)-7984)) ? (4294967287U) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))))) ? ((+(-1419098092))) : (((((/* implicit */int) var_13)) * ((((_Bool)1) ? (((/* implicit */int) var_19)) : (var_17))))));
            }
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                var_35 += ((/* implicit */int) ((((/* implicit */_Bool) ((var_13) ? (2208842329060032506LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (-1LL) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned short)33541)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)34611)))))));
                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-27283)))) + (((((/* implicit */_Bool) 505405126)) ? (1038455572) : (var_17))))))));
            }
            var_37 = ((/* implicit */long long int) 12949132751689825740ULL);
        }
        for (unsigned int i_12 = 0; i_12 < 16; i_12 += 2) 
        {
            var_38 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) -177082442)) : (3152634713755719475LL)))));
            var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_3)))) ? (((-32852224) * (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) (short)14246)) ? (((/* implicit */int) var_13)) : (-835566862))))))));
        }
        arr_45 [i_1] = ((/* implicit */short) ((((14426755375037004817ULL) - (((/* implicit */unsigned long long int) 1500216651)))) + (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -1611735902)) - (1609799966U))))));
    }
    for (unsigned short i_13 = 0; i_13 < 13; i_13 += 4) 
    {
        arr_48 [i_13] = ((/* implicit */int) (((!(((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) 127)))))) || ((!(((/* implicit */_Bool) var_8))))));
        arr_49 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3673649501947421192ULL)) ? ((~((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) (+(-585159345))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 612107096)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_18)))))))) : (((/* implicit */int) var_16))));
    }
    var_40 = ((/* implicit */unsigned char) var_1);
    var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)198)) ? (13623842102314844737ULL) : (((/* implicit */unsigned long long int) 703436530))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 14773094571762130423ULL)) && (((/* implicit */_Bool) (short)15901))))) : (var_6)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2419451114273676626LL)) ? (12473421946151775625ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26850)))))) ? (((((/* implicit */unsigned long long int) var_4)) + (3491143301953394896ULL))) : (((/* implicit */unsigned long long int) ((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) : (((/* implicit */unsigned long long int) var_6))));
    var_42 = ((/* implicit */unsigned int) var_0);
}
