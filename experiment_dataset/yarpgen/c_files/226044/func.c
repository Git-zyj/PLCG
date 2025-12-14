/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226044
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
    var_13 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) < (var_8)))) >= (((/* implicit */int) var_11)))))));
    var_14 = var_1;
    var_15 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((var_0) > (((/* implicit */unsigned int) var_1))))) : (((((/* implicit */_Bool) 6710546649700842697LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))))), (((/* implicit */int) var_9))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_9 [(unsigned short)7] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-15959))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_0) <= (((/* implicit */unsigned int) arr_5 [i_0] [(short)7])))))) : (-6710546649700842696LL)))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (arr_3 [(unsigned char)16] [(unsigned char)16]))))) > (var_8)))));
                    var_16 += ((/* implicit */short) (-(((max((var_8), (((/* implicit */unsigned long long int) var_3)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) < (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))))));
                }
            } 
        } 
        var_17 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)-12201))) <= (((((/* implicit */long long int) ((/* implicit */int) var_7))) | (arr_4 [i_0] [i_0] [i_0])))));
        var_18 -= ((/* implicit */signed char) var_12);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_19 = (((!(((/* implicit */_Bool) var_0)))) ? (arr_4 [i_3] [i_3] [i_3]) : (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])) ? (var_6) : (((/* implicit */int) arr_7 [2U] [i_3] [i_3])))) & (((/* implicit */int) ((unsigned short) arr_6 [i_3] [i_3] [i_3])))))));
        var_20 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) arr_3 [i_3] [i_3])) > (((/* implicit */int) var_9)))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) ((((arr_13 [i_4] [i_4]) & (((/* implicit */long long int) ((/* implicit */int) var_11))))) & (((arr_13 [i_4] [i_4]) % (arr_13 [i_4] [i_4])))));
        arr_15 [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */int) max((var_7), (var_7)))) > (((/* implicit */int) ((unsigned short) (short)12201))))) || (((/* implicit */_Bool) arr_5 [i_4] [i_4]))));
        arr_16 [i_4] [i_4] = ((/* implicit */long long int) arr_7 [i_4] [i_4] [i_4]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            arr_20 [i_4] [i_4] = ((/* implicit */signed char) ((var_12) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (+(var_6))))));
            arr_21 [i_4] = ((/* implicit */_Bool) ((short) arr_18 [i_4] [i_4] [i_4]));
        }
    }
    var_23 = ((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) max((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_2)))), (var_10))))));
}
