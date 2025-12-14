/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42816
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))));
            var_13 = ((/* implicit */unsigned char) var_9);
        }
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        var_14 = ((/* implicit */long long int) max((min((max((var_4), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5)))))));
                        arr_11 [i_4] [i_0] [i_4] [i_4] = (~(((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) var_2))))) ? (min((((/* implicit */unsigned long long int) var_2)), (var_4))) : (max((var_4), (((/* implicit */unsigned long long int) var_3)))))));
                        var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))), (max((min((((/* implicit */unsigned long long int) var_7)), (var_4))), (min((((/* implicit */unsigned long long int) var_1)), (var_6)))))));
                        var_16 = ((/* implicit */int) (-(var_4)));
                        var_17 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (~(var_1)))))) ? (max((var_3), (min((((/* implicit */long long int) var_9)), (var_3))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))) ? (max((((/* implicit */long long int) var_12)), (var_0))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)35139)) ? (((/* implicit */int) (unsigned short)3616)) : (((/* implicit */int) (unsigned char)45)))))))));
                    }
                    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(576460752303423487LL)))) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) var_10)))) : ((+(((/* implicit */int) var_2)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */int) (~((~(var_0)))));
                                var_21 = var_8;
                                var_22 = (~(min((min((7195091658572454211ULL), (((/* implicit */unsigned long long int) (unsigned char)135)))), (((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */unsigned long long int) var_5)) : (11251652415137097404ULL))))));
                                var_23 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (var_7))))) : (max((var_6), (((/* implicit */unsigned long long int) var_10))))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (max((var_4), (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_3);
                }
            } 
        } 
    }
    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_1)) : (var_6)))) ? (((/* implicit */long long int) max((var_5), (((/* implicit */unsigned int) var_7))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_1)) : (var_3)))))), ((((!(((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_11)) : (var_6))) : (((((/* implicit */_Bool) (unsigned short)3616)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (12571179088443487790ULL)))))));
        /* LoopSeq 2 */
        for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            arr_24 [i_7] = ((/* implicit */long long int) var_6);
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) var_10))));
            /* LoopNest 2 */
            for (long long int i_9 = 2; i_9 < 12; i_9 += 1) 
            {
                for (long long int i_10 = 2; i_10 < 11; i_10 += 1) 
                {
                    {
                        arr_31 [i_7] [i_7] [i_7] [i_10] = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) (unsigned char)0)), (11251652415137097401ULL)))));
                        arr_32 [i_7] = ((/* implicit */unsigned char) var_9);
                    }
                } 
            } 
        }
        for (int i_11 = 1; i_11 < 13; i_11 += 3) 
        {
            var_26 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : ((~(((/* implicit */int) var_9))))))), (var_1)));
            arr_36 [i_7] [i_11] = ((/* implicit */long long int) var_7);
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) var_11)))))))))))));
            var_28 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */unsigned int) var_9)), (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7)))))));
            var_29 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_9)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (max((var_6), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) (-(var_11)))))));
        }
        var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (max((min((var_3), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_10)))))))));
        /* LoopNest 2 */
        for (unsigned short i_12 = 2; i_12 < 12; i_12 += 3) 
        {
            for (unsigned int i_13 = 0; i_13 < 14; i_13 += 1) 
            {
                {
                    arr_43 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) var_5);
                    arr_44 [i_13] [i_13] [i_13] [i_7] = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)248))))), (var_4)))));
                    var_31 = ((/* implicit */int) (+(var_4)));
                }
            } 
        } 
        var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_0)) : (var_6))))))));
    }
    var_33 = ((/* implicit */signed char) var_3);
    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? ((-(max((((/* implicit */unsigned long long int) var_5)), (var_8))))) : (((/* implicit */unsigned long long int) (~((~(var_0))))))));
    var_35 = var_9;
}
