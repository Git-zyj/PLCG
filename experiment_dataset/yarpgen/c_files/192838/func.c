/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192838
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
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) (unsigned short)39981);
        arr_4 [i_0 - 1] = ((/* implicit */int) ((((/* implicit */int) (short)-6709)) > (((-107902661) ^ (((/* implicit */int) (unsigned short)5278))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((((8709429966857519915ULL) >> (((((/* implicit */int) (short)6713)) - (6654))))) - (((/* implicit */unsigned long long int) (+(-2102729085))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        arr_17 [i_3] [i_4] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27619))) & (9737314106852031700ULL)));
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) -1060356943))));
                        arr_18 [i_4] [i_2] [i_4] = ((/* implicit */unsigned char) (+(8709429966857519915ULL)));
                        arr_19 [i_3] [(unsigned char)1] [i_3] [i_4] [i_3] = 8709429966857519924ULL;
                    }
                    for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */int) (signed char)-7)) % (((/* implicit */int) (unsigned short)5295))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((9737314106852031714ULL) ^ (((/* implicit */unsigned long long int) arr_10 [i_3] [i_5]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5295))) <= (3923515815U)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 384518107U)))))));
                        var_25 = ((/* implicit */int) ((unsigned char) (signed char)69));
                        arr_22 [i_3] [i_5] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-97))) : (1846365870037738901ULL))));
                    }
                    var_26 *= ((/* implicit */unsigned char) ((-971469597) >= (((/* implicit */int) (signed char)-50))));
                    var_27 = ((/* implicit */int) ((unsigned char) var_13));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned char) ((short) ((short) 477040735173363985LL)));
        arr_27 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 168588805U)) || (((/* implicit */_Bool) 8526870877123460064ULL))));
        arr_28 [i_6] [i_6] = (~(((/* implicit */int) ((arr_25 [i_6]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)69)) <= (-1411294381)))))))));
        arr_29 [i_6] = ((/* implicit */unsigned char) min((9737314106852031726ULL), (((/* implicit */unsigned long long int) ((-9223372036854775780LL) / (((/* implicit */long long int) -861616616)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -4316726589110880164LL)) >= (8709429966857519915ULL)));
        arr_32 [i_7] = ((/* implicit */unsigned char) ((unsigned short) ((int) (_Bool)1)));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_7])) ? (-1007166524685525694LL) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_7])))));
    }
    for (unsigned short i_8 = 1; i_8 < 15; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_9 = 2; i_9 < 15; i_9 += 2) 
        {
            for (long long int i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                {
                    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)70)) + (((/* implicit */int) (unsigned char)16)))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        for (int i_12 = 0; i_12 < 17; i_12 += 2) 
                        {
                            {
                                arr_51 [i_12] [i_12] [i_8] [i_8] [i_9] [i_8] = ((/* implicit */int) (_Bool)1);
                                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1650769003)) ? (((/* implicit */unsigned long long int) 599117926)) : (9919873196586091571ULL)))) ? (-1630823696) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (3558142934U))))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)6713))));
                    arr_52 [i_8] [i_9] [i_8] = ((/* implicit */unsigned char) ((min((((int) arr_34 [i_8])), (-45506661))) - (((((/* implicit */_Bool) 599117926)) ? (((/* implicit */int) (signed char)-62)) : (-599117900)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)45978)) >> (((((/* implicit */int) (short)-21348)) + (21361)))));
            arr_55 [i_8 + 2] [i_8] [i_8] = ((/* implicit */short) (~(var_11)));
        }
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)223)), (1969353830)))) ? (((((/* implicit */_Bool) 384518118U)) ? (((/* implicit */int) (short)-13667)) : (((/* implicit */int) (short)-23186)))) : (min((arr_30 [i_14]), (((/* implicit */int) (short)-6713))))));
        arr_59 [i_14] [i_14] = ((/* implicit */long long int) ((((min((4428701185790945474ULL), (((/* implicit */unsigned long long int) 560565358U)))) >> (((7108145559609986519LL) - (7108145559609986483LL))))) + (((/* implicit */unsigned long long int) ((long long int) 2795575227U)))));
    }
    var_36 = ((/* implicit */int) ((unsigned int) ((unsigned char) -599117939)));
    var_37 = ((/* implicit */short) ((((/* implicit */unsigned long long int) 599117909)) % (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)121)) >= (((/* implicit */int) (signed char)54)))))) : (((((/* implicit */_Bool) (unsigned short)65164)) ? (18065918607525765701ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)49)))))))));
}
