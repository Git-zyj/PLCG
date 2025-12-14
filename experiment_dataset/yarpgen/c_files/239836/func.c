/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239836
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 17179869182ULL))) ? (((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) var_0))), (((((/* implicit */int) var_4)) & (((/* implicit */int) (unsigned short)46820))))))) : ((((((+(var_7))) + (9223372036854775807LL))) << (((min((var_0), (((/* implicit */unsigned long long int) var_8)))) - (1535813734411027279ULL)))))));
    var_11 = ((/* implicit */long long int) ((unsigned short) min((10743109641772047213ULL), (((/* implicit */unsigned long long int) 1160789398964544073LL)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (+(18446744056529682433ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38055))) : (((((/* implicit */_Bool) var_3)) ? (0ULL) : (12316370455703752634ULL))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)203))) - (7714575799665311708ULL)))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 3; i_2 < 11; i_2 += 1) 
                {
                    var_13 ^= ((/* implicit */unsigned long long int) ((unsigned char) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)27482)) : (((/* implicit */int) arr_2 [i_2] [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((unsigned short) var_9)))));
                }
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    var_15 += ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned short)49498))))));
                    var_16 ^= ((/* implicit */long long int) (+((-(((/* implicit */int) arr_2 [i_0] [i_3]))))));
                    arr_12 [i_0] = ((unsigned short) 22ULL);
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 4; i_4 < 10; i_4 += 2) 
                {
                    var_17 = ((/* implicit */long long int) 18446744073709551612ULL);
                    arr_17 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_11 [i_0] [i_1] [i_4] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20)))))) ? (((/* implicit */unsigned long long int) var_7)) : (var_0)));
                    arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(arr_14 [i_0] [i_1] [i_4 - 1])));
                    arr_19 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)3738)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_7 [i_0] [i_0] [i_0]))) >> (((((((/* implicit */_Bool) var_8)) ? (-167614781321986966LL) : (-6817363536036857691LL))) + (167614781321986994LL)))));
                }
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))));
                arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_0);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 1) 
    {
        arr_24 [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) (unsigned short)57211)))))));
        var_19 = ((/* implicit */unsigned short) ((unsigned long long int) 2433183024799209098ULL));
    }
    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        arr_28 [i_6] [i_6] = ((/* implicit */unsigned short) ((unsigned long long int) -7914975631814279727LL));
        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)69)), (arr_27 [i_6] [i_6])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)25001)) && (((/* implicit */_Bool) arr_22 [i_6] [i_6]))))) : ((~(((/* implicit */int) (short)20607)))))) <= (((/* implicit */int) ((unsigned char) var_0)))));
    }
    for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 3) 
    {
        var_21 += (~(var_6));
        var_22 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_4))))));
    }
}
