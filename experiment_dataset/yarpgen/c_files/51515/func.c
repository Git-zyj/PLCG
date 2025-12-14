/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51515
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
    var_12 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))));
    var_13 = ((/* implicit */int) min((((/* implicit */unsigned int) ((short) min((var_2), (((/* implicit */int) var_11)))))), (min((var_8), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))))))));
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) min((((/* implicit */unsigned int) max((((/* implicit */int) var_6)), ((+(var_2)))))), ((-(((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))))));
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) 4433230883192832LL)))))) ? (var_0) : (((/* implicit */unsigned int) var_2)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [(signed char)3] [i_0] = ((/* implicit */unsigned char) var_1);
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned short) min((var_2), (((/* implicit */int) max((var_1), (((/* implicit */short) var_11))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                var_16 = var_10;
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_10 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) var_5);
                    var_17 -= ((/* implicit */unsigned int) var_4);
                    var_18 = ((/* implicit */long long int) ((_Bool) var_7));
                }
                for (short i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    arr_13 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(20U)))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_2))))));
                    arr_14 [i_0] = ((/* implicit */int) ((((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_4))) >> (((((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) - (7790795042869637507LL)))));
                }
            }
            for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) var_11))))), (var_4)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (var_8)))))))));
                var_20 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)9617)))) : ((-(var_2))))));
                /* LoopSeq 1 */
                for (int i_6 = 2; i_6 < 10; i_6 += 4) 
                {
                    var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) != (var_3))))) - (min((((/* implicit */long long int) var_3)), (var_9)))))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        var_22 ^= ((/* implicit */unsigned long long int) var_6);
                        var_23 = ((/* implicit */unsigned short) var_1);
                    }
                    arr_24 [i_0] [i_5] [2LL] [i_6] [i_6] [7U] = ((/* implicit */_Bool) ((((((((/* implicit */int) var_1)) << (((var_3) - (2033512314))))) << ((-(((/* implicit */int) var_11)))))) >> (((/* implicit */int) var_5))));
                    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) var_5))));
                    var_25 = ((/* implicit */_Bool) var_10);
                }
            }
            for (signed char i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_9 = 2; i_9 < 10; i_9 += 2) 
                {
                    var_26 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (var_8)))) ? (((/* implicit */int) ((((/* implicit */long long int) var_2)) >= (var_9)))) : (((int) var_0)))), (((/* implicit */int) ((unsigned short) var_3)))));
                    arr_29 [i_8] [i_8] [i_8] [i_8] [i_8] [(unsigned short)7] = ((/* implicit */unsigned short) var_11);
                }
                var_27 = max((((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (var_2)))) ? ((-(var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_3)))))), (((/* implicit */long long int) ((((unsigned int) var_7)) * (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                arr_30 [i_0] [i_0] [i_8] = ((/* implicit */unsigned char) var_6);
                arr_31 [i_1] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) 4294967276U)) ? (10371782397026449294ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6)))));
            }
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_6)) : (var_3))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                var_29 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_6))))), (((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) 2135372671U)), (7224957221723456287LL)))) ? (((/* implicit */unsigned int) ((int) var_0))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226))) : (251658240U)))))));
                var_30 ^= ((/* implicit */signed char) max((((/* implicit */long long int) 4043309056U)), (2199022206976LL)));
                /* LoopSeq 2 */
                for (unsigned short i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    arr_36 [i_0] [i_1] [i_1] [i_11] [i_1] [i_1] = ((/* implicit */_Bool) var_8);
                    var_31 -= ((/* implicit */_Bool) (+(((/* implicit */int) var_1))));
                    arr_37 [i_0] [i_1] [i_10] [i_1] = ((/* implicit */_Bool) (+(((var_5) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) == (var_0))))) : (((long long int) var_8))))));
                    var_32 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)6))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_33 = ((/* implicit */int) var_0);
                    arr_40 [i_1] [i_10] [i_12] = var_5;
                }
                var_34 = ((/* implicit */int) var_5);
            }
            for (unsigned int i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                arr_44 [i_1] = ((/* implicit */signed char) ((((((unsigned int) var_7)) ^ (((/* implicit */unsigned int) min((((/* implicit */int) var_10)), (var_2)))))) << (((((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)-21216)))) + (21225)))));
                var_35 |= ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
            }
            arr_45 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned int) var_2)), (var_7))))) ? ((+(min((var_4), (var_9))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
            var_36 = ((signed char) ((unsigned char) ((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_10))))));
        }
    }
}
