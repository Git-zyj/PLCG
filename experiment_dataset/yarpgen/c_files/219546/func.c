/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219546
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((7082964020772477355ULL) - (7082964020772477348ULL)))))) > (var_0))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 14514278281179185149ULL)) ? (((/* implicit */int) (unsigned char)136)) : (1225430165)));
            /* LoopNest 2 */
            for (signed char i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                for (signed char i_3 = 1; i_3 < 21; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_1)))) || ((!(((/* implicit */_Bool) 1832879747U)))))))));
                        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_4)))) ? (max((var_1), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))) && ((!(((/* implicit */_Bool) var_3))))));
                        /* LoopSeq 2 */
                        for (int i_4 = 4; i_4 < 20; i_4 += 3) 
                        {
                            var_14 = ((/* implicit */short) (((!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_5)))))) || (((((/* implicit */_Bool) 2985734141U)) || (((/* implicit */_Bool) (short)-29696))))));
                            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_1)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (var_7))) : (((((/* implicit */int) (short)(-32767 - 1))) + (((/* implicit */int) (unsigned short)20987))))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (((var_1) / (var_1))))))))));
                        }
                        for (short i_5 = 1; i_5 < 18; i_5 += 3) 
                        {
                            var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) max((var_5), (((/* implicit */unsigned short) var_4))))), (((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
                            var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))))) << ((~(((/* implicit */int) (signed char)-31))))));
                            arr_14 [i_1 - 1] [i_1] [i_1] [i_0] [8ULL] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) + (2147483647))) << (((var_7) - (646137090)))))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_3)))))));
                        }
                        var_18 |= ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) (unsigned char)206)) >> (((((/* implicit */int) (signed char)76)) - (60))))) : (((((/* implicit */int) (short)1)) << (((((/* implicit */int) (signed char)-17)) + (37))))))) % (((/* implicit */int) var_5))));
                    }
                } 
            } 
            var_19 *= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != ((((_Bool)1) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) (signed char)-68)))))))));
            /* LoopNest 3 */
            for (unsigned short i_6 = 3; i_6 < 21; i_6 += 1) 
            {
                for (unsigned char i_7 = 1; i_7 < 21; i_7 += 2) 
                {
                    for (int i_8 = 3; i_8 < 21; i_8 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-68))));
                            var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 6631186446989595118LL)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) (short)12219)))) < (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (var_1)))))))));
                            arr_22 [i_0] [i_1 - 1] [i_6] [i_7] [i_6] = var_9;
                            var_22 = ((/* implicit */unsigned long long int) (+((+((-(((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (int i_9 = 2; i_9 < 19; i_9 += 3) 
        {
            arr_26 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-14512)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))));
            arr_27 [i_0] [i_9 + 3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)104)))))));
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 3687430017U)) ? (-4085571381577315285LL) : (131071LL)));
            var_24 *= ((/* implicit */int) ((((/* implicit */int) (unsigned char)140)) >= (((/* implicit */int) (short)9185))));
            arr_28 [i_0] [i_9] = ((/* implicit */unsigned short) ((var_0) << (((((/* implicit */int) var_8)) - (240)))));
        }
        var_25 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_0))))))) || (((((/* implicit */int) var_4)) <= (((/* implicit */int) var_3))))));
        arr_29 [i_0] = ((/* implicit */short) ((max(((-(((/* implicit */int) var_5)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) << (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))) - (1042)))));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) ((var_0) >= (var_0)))), (var_7)))) ? (((/* implicit */int) ((1501673312U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)225)))))) : (((/* implicit */int) ((((/* implicit */int) max((var_3), (var_3)))) == (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))))))));
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */int) (signed char)-31)) > (((/* implicit */int) (signed char)-32)))))));
    }
    for (unsigned char i_10 = 1; i_10 < 20; i_10 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) || (((/* implicit */_Bool) max((((/* implicit */short) var_8)), (var_9))))))) * (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_2))))), (max((var_5), (((/* implicit */unsigned short) var_9))))))))))));
        arr_32 [i_10] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((((/* implicit */int) var_9)) / (((/* implicit */int) var_5)))) : (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_2))))))), (((((/* implicit */_Bool) max((-1), (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (unsigned char)253)) - (((/* implicit */int) (signed char)-7)))) : (((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */int) var_6))))))));
        var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_2)))) & (((((/* implicit */int) (signed char)-55)) | (((/* implicit */int) var_5))))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_1)))));
        var_30 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) (unsigned char)2)))) * (((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) (unsigned short)32473)) : (((/* implicit */int) (unsigned char)50))))));
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 1; i_11 < 10; i_11 += 2) 
    {
        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? ((-(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) >= (var_7))))))))));
        /* LoopSeq 2 */
        for (short i_12 = 2; i_12 < 10; i_12 += 2) 
        {
            var_32 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (var_0)));
            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) 97952972)) ? (((/* implicit */int) (short)-7667)) : (((/* implicit */int) (short)32479))));
        }
        for (signed char i_13 = 4; i_13 < 11; i_13 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_14 = 2; i_14 < 11; i_14 += 3) 
            {
                arr_43 [i_11 + 1] [i_13] [i_14] = ((/* implicit */unsigned char) ((var_1) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                var_34 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (var_7)));
                /* LoopNest 2 */
                for (short i_15 = 3; i_15 < 10; i_15 += 3) 
                {
                    for (short i_16 = 2; i_16 < 11; i_16 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_7) : (var_7)));
                            var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_6) ? (var_7) : (((/* implicit */int) var_9)))))));
                        }
                    } 
                } 
            }
            var_37 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-31309)) ? (16735622841424109517ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
            var_38 = ((/* implicit */unsigned long long int) (-(-199571030)));
        }
        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((((/* implicit */int) var_5)) >= (((/* implicit */int) var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_5)))))) : (var_1))))));
    }
    var_40 |= ((/* implicit */int) var_1);
}
