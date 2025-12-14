/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3081
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
    var_17 &= var_9;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)42807), ((unsigned short)64212)))) + (((((/* implicit */_Bool) arr_1 [(unsigned short)12] [(unsigned short)12])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0]))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_1 [i_0] [i_0])) > (((/* implicit */int) var_16))))))));
        var_18 = arr_0 [i_0] [i_0];
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        arr_15 [i_1] [i_1] [i_2] [i_1] [i_3] [(unsigned short)18] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)57838)) | (((/* implicit */int) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])) == (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])))))));
                        var_19 ^= ((/* implicit */unsigned short) (+(min((((((/* implicit */_Bool) (unsigned short)57838)) ? (((/* implicit */int) (unsigned short)31086)) : (((/* implicit */int) (unsigned short)57838)))), (((/* implicit */int) (unsigned short)57849))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)4095)) ? (((((/* implicit */_Bool) ((unsigned short) arr_17 [(unsigned short)13]))) ? (((/* implicit */int) max((arr_12 [(unsigned short)12] [i_2] [(unsigned short)12] [(unsigned short)12]), (arr_9 [i_2] [i_2] [i_2])))) : (((((/* implicit */_Bool) (unsigned short)7697)) ? (((/* implicit */int) arr_3 [i_3] [i_1])) : (((/* implicit */int) (unsigned short)0)))))) : (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [(unsigned short)3] [i_2])) : (((/* implicit */int) (unsigned short)44932)))), (((((/* implicit */_Bool) (unsigned short)30910)) ? (((/* implicit */int) (unsigned short)37729)) : (((/* implicit */int) (unsigned short)62606))))))));
                        var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) arr_4 [i_1] [(unsigned short)0])))))) ? (((((/* implicit */_Bool) arr_8 [i_1] [(unsigned short)15])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_5] [i_2])))) : ((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) ((unsigned short) arr_12 [i_1] [(unsigned short)17] [(unsigned short)7] [(unsigned short)16]))) : ((-(((/* implicit */int) (unsigned short)65535))))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (unsigned short)56065))));
                        arr_21 [i_1] [i_2] [i_6] [i_6] = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) (unsigned short)7375)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (((/* implicit */int) arr_11 [(unsigned short)17] [i_2] [i_3])) : (((/* implicit */int) arr_14 [i_3]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (unsigned short)64736))))) ? (((/* implicit */int) ((unsigned short) var_13))) : (((((/* implicit */_Bool) (unsigned short)27296)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)33055)))))))));
                    }
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */int) var_9)) & (((/* implicit */int) (unsigned short)31744)))) : ((((+(((/* implicit */int) (unsigned short)58038)))) / (((/* implicit */int) (unsigned short)65535))))));
                }
            } 
        } 
        arr_22 [i_1] = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)65535)))) << (((((/* implicit */int) arr_3 [i_1] [i_1])) - (13613))))), (((((/* implicit */_Bool) (unsigned short)2863)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))))));
    }
    var_24 = (unsigned short)49375;
}
