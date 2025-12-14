/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220381
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
    var_12 = ((/* implicit */int) var_0);
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50412)) ? (var_11) : (var_11)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (min((((/* implicit */unsigned long long int) var_0)), (var_11))) : (((/* implicit */unsigned long long int) var_6)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_0 [(unsigned char)10])))) && ((!(arr_2 [i_0])))));
        arr_3 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (-3875202074763597691LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) > (((/* implicit */long long int) ((/* implicit */int) var_10)))));
        var_15 = ((/* implicit */_Bool) var_6);
        var_16 = var_10;
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_4)))))));
            arr_6 [i_1] [i_0] |= ((/* implicit */short) var_10);
        }
    }
    for (int i_2 = 0; i_2 < 13; i_2 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (13763703799620474749ULL))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            var_19 = ((/* implicit */long long int) var_1);
            arr_12 [i_2] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_3] [i_2])) - (((/* implicit */int) arr_5 [10LL] [i_3]))))) ? (((((/* implicit */int) arr_5 [i_2] [i_2])) & (((/* implicit */int) arr_5 [i_2] [i_3])))) : (((((/* implicit */int) arr_5 [i_3] [i_2])) << (((((/* implicit */int) (short)-6054)) + (6071))))));
            arr_13 [4LL] [(unsigned short)8] |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_3] [i_3]))))) : (min((18446744073709551604ULL), (var_11))))))));
            arr_14 [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) (short)-27236)))));
        }
    }
    for (int i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) (unsigned short)25181)) | (((/* implicit */int) arr_2 [i_4])))) : (((/* implicit */int) (_Bool)0))))))));
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) < (((/* implicit */int) arr_1 [i_4]))));
    }
    for (signed char i_5 = 3; i_5 < 13; i_5 += 1) 
    {
        var_23 *= ((/* implicit */long long int) (_Bool)1);
        var_24 += ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) arr_19 [i_5 - 2])))));
    }
    var_25 = ((/* implicit */long long int) var_5);
    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
}
