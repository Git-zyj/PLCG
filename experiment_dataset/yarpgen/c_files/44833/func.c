/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44833
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */unsigned int) var_0)), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        var_11 &= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((_Bool) var_3))), ((+(var_4)))));
        var_12 = ((/* implicit */short) max((((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) var_0)))))), (((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */unsigned int) var_1)), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))))));
            var_14 += ((/* implicit */short) max((max((var_9), (((/* implicit */unsigned int) var_3)))), (var_9)));
        }
        for (unsigned short i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            arr_8 [2U] [i_2] [i_0] &= ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) var_8)))));
            arr_9 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_7))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) : (max((var_2), (var_4)))))));
        }
        for (int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            var_15 &= var_4;
            var_16 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_6)), (var_3)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_7)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_7))))))));
            /* LoopNest 3 */
            for (unsigned int i_4 = 1; i_4 < 19; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (int i_6 = 1; i_6 < 19; i_6 += 1) 
                    {
                        {
                            arr_20 [i_0] [i_0] [(signed char)18] [i_0] [i_6] [i_6] = ((/* implicit */signed char) ((unsigned long long int) (~(((/* implicit */int) var_8)))));
                            var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(137438953471ULL)))) ? (var_4) : (max((((/* implicit */unsigned int) var_7)), (var_4)))))) ? (var_2) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)0)), (137438953471ULL)))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                            var_18 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_2)))))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_9))), (((/* implicit */unsigned int) max((var_8), (var_8)))))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned short i_7 = 1; i_7 < 20; i_7 += 4) 
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (+(min((((/* implicit */unsigned int) ((signed char) var_3))), ((~(var_4))))))))));
                arr_23 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))))), (((unsigned short) var_3))))), (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))))), (var_9)))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    for (int i_9 = 2; i_9 < 17; i_9 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) ((unsigned short) (+(((/* implicit */int) ((_Bool) var_3))))));
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_2)) : (var_5))), (((/* implicit */unsigned long long int) max((var_4), (var_2))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), ((+(((/* implicit */int) var_0))))))) : ((~(((unsigned long long int) var_8))))));
                            var_23 += ((/* implicit */unsigned short) ((_Bool) min((max((var_0), (var_3))), (var_7))));
                            arr_29 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (var_9))))))), ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) ((signed char) var_9)))))));
                        }
                    } 
                } 
                arr_30 [i_0] [i_0] [i_7] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) 18446743936270598145ULL))))), ((~((+(((/* implicit */int) var_3))))))));
            }
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_11 = 2; i_11 < 20; i_11 += 2) 
                {
                    arr_37 [i_0] [i_3] [i_3] [i_0] [i_10] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_9)))))) : (((/* implicit */int) ((signed char) max((((/* implicit */unsigned int) var_6)), (var_2)))))));
                    arr_38 [i_0] [i_3] [10LL] [i_3] [i_11] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))));
                }
                var_24 += ((/* implicit */signed char) ((short) var_3));
            }
            for (unsigned char i_12 = 3; i_12 < 20; i_12 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_13 = 2; i_13 < 20; i_13 += 2) 
                {
                    arr_45 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_0)), ((+(var_9)))))), (((((/* implicit */_Bool) var_0)) ? (min((137438953470ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_9)) : (var_5)))))));
                    arr_46 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_5))))));
                    arr_47 [i_0] [i_12] [i_0] = ((/* implicit */unsigned char) ((short) (~(var_4))));
                    arr_48 [(short)19] [i_0] [i_12] [6ULL] [i_12 - 1] = ((/* implicit */unsigned char) var_2);
                }
                for (unsigned short i_14 = 2; i_14 < 17; i_14 += 2) 
                {
                    var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)252))));
                    arr_52 [i_0] [i_0] [i_3] [i_0] [i_0] [i_14] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((_Bool) var_8)))));
                    var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) : (((unsigned long long int) var_3))));
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) (-(var_2)))) : (var_5)))) ? (min((((((/* implicit */_Bool) var_7)) ? (var_2) : (var_9))), (((/* implicit */unsigned int) ((signed char) var_8))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                }
                arr_53 [i_3] [i_0] = ((/* implicit */unsigned int) ((short) var_8));
                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)1909), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_7), (var_7)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min((((/* implicit */short) var_6)), (var_8))))))) : (max((((long long int) var_4)), (((/* implicit */long long int) max((var_4), (((/* implicit */unsigned int) var_0))))))))))));
            }
        }
    }
    var_29 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((short) var_6))))) ? (min((((/* implicit */unsigned long long int) ((signed char) var_6))), (max((var_5), (((/* implicit */unsigned long long int) var_0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_9) : (var_4))))))))));
    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) var_3))));
}
