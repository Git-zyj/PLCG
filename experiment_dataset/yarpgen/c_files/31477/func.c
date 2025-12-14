/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31477
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (unsigned char)151))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned short)1] [i_2] [i_3]))) > (-2LL)))))))));
                        var_14 |= ((/* implicit */short) (unsigned char)91);
                        var_15 = ((/* implicit */short) arr_7 [i_0] [(short)14] [i_1]);
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32759)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)91))) : (-9LL))))));
                    }
                } 
            } 
            arr_10 [i_0] &= ((/* implicit */short) max((arr_1 [i_0]), (((((/* implicit */_Bool) -21LL)) ? (-9223372036854775790LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-18196)))))));
            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), ((-(20LL))))))));
        }
        var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) 3315282630U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3232))) : (8471981119814612699LL))), (((long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0])))))));
        var_19 |= ((/* implicit */unsigned long long int) max((((_Bool) arr_9 [i_0] [i_0] [i_0])), ((!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))));
    }
    for (short i_4 = 1; i_4 < 14; i_4 += 2) /* same iter space */
    {
        arr_14 [i_4] = ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_4 + 2]))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62308))) % (2231129413U)))) : (((long long int) (short)16380)));
        var_20 -= ((/* implicit */unsigned int) max(((~(arr_1 [i_4 + 2]))), (((/* implicit */long long int) arr_11 [i_4 - 1]))));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((short) (+(((/* implicit */int) arr_0 [i_4 + 1]))))))));
    }
    for (short i_5 = 1; i_5 < 14; i_5 += 2) /* same iter space */
    {
        var_22 -= ((/* implicit */long long int) var_7);
        arr_17 [i_5] = ((/* implicit */short) 6304636761221772328LL);
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5 + 1])) ? (((/* implicit */unsigned long long int) arr_9 [i_5 - 1] [i_5 - 1] [i_5 + 1])) : (1125871649786501680ULL)))) ? (max((((/* implicit */long long int) var_6)), ((~(arr_1 [i_5]))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) max((((/* implicit */long long int) (unsigned char)159)), (arr_1 [i_5]))))))));
    }
    var_24 ^= ((/* implicit */short) max((var_5), (((/* implicit */unsigned int) var_6))));
}
