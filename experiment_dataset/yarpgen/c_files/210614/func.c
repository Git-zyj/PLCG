/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210614
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */int) (_Bool)1);
                                var_13 = ((/* implicit */unsigned short) min((((int) ((var_7) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)57868))))), (((/* implicit */int) var_0))));
                                var_14 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_2 - 2] [i_2 + 1] [i_2 - 1])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249))) < (var_11))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (_Bool)1))) + (((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned short)32256))))))) ? (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39457))) : (var_3))) + (min((18446744073709551615ULL), (var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2807601886U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39857))) : (3440814734218964605ULL))))))))));
                    var_17 += ((/* implicit */unsigned int) (-(((/* implicit */int) min((var_7), (((_Bool) (_Bool)1)))))));
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        var_18 = ((unsigned long long int) 9223372036854775796LL);
                        var_19 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_14 [i_5] [i_0] [i_2 + 1] [i_5] [i_0])))), (((/* implicit */int) (_Bool)1))));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((long long int) max((min((((/* implicit */unsigned long long int) (unsigned char)137)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (unsigned short)33279))))))));
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((unsigned long long int) (+(arr_3 [i_2 - 1]))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((65504ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))) || (((/* implicit */_Bool) (-(((arr_12 [i_0] [i_1] [i_0] [i_2] [i_6]) - (((/* implicit */long long int) ((/* implicit */int) var_0))))))))));
                        var_23 -= ((/* implicit */_Bool) max((min((arr_1 [i_6]), (((/* implicit */unsigned long long int) 9223372036854775796LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)33264))))) == (var_9))))));
                        var_24 = ((/* implicit */int) min((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)31)))))));
                        var_25 = ((/* implicit */unsigned short) ((short) (~(var_3))));
                    }
                }
            } 
        } 
    } 
    var_26 *= ((/* implicit */_Bool) var_0);
    /* LoopSeq 1 */
    for (long long int i_7 = 3; i_7 < 16; i_7 += 3) 
    {
        var_27 = ((/* implicit */short) ((min((((arr_22 [i_7]) ? (((/* implicit */unsigned long long int) var_2)) : (arr_21 [i_7] [i_7]))), ((~(arr_21 [i_7] [i_7]))))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (((16315732223176768582ULL) ^ (((/* implicit */unsigned long long int) 1485910059)))))) - (16315732224106908729ULL)))));
        var_28 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (!(arr_22 [i_7]))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
        {
            arr_26 [i_7] [i_7] [i_7 - 3] = ((/* implicit */unsigned char) (-((~((~(((/* implicit */int) var_0))))))));
            var_29 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_25 [i_8])), (((arr_23 [i_7] [i_7]) + (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
        {
            var_30 += ((/* implicit */unsigned char) (short)0);
            var_31 = (-(((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (var_3))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_7 - 2]))))));
            /* LoopNest 3 */
            for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
            {
                for (int i_11 = 2; i_11 < 15; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */int) min((var_10), (((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((_Bool)0), (var_7)))))))));
                            arr_36 [i_9] [i_9] [6] [i_9] [i_10] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (unsigned char)198))))))) ^ (max((((/* implicit */long long int) (unsigned char)227)), (((arr_23 [i_11] [i_12]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)213)))))))));
                            arr_37 [i_9] [i_9] [i_10] [i_11 + 2] [i_12] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_27 [i_7 - 1])) || (((/* implicit */_Bool) arr_23 [i_7 - 1] [i_7 - 1])))));
                            arr_38 [i_7] [(unsigned char)5] [i_9] [i_11] [i_12] [i_9] = ((((/* implicit */_Bool) max(((~(arr_27 [i_12]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_35 [i_7] [15ULL] [i_7] [i_7 + 1] [i_9] [i_7])))))))) ? ((~(var_10))) : (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (unsigned char)193)))), (((/* implicit */int) ((unsigned char) (unsigned char)210)))))));
                        }
                    } 
                } 
            } 
        }
    }
}
