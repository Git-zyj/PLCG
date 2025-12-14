/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239520
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
    var_10 = ((/* implicit */signed char) var_0);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-32689)) : (((/* implicit */int) (short)32687))));
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)32689))))) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) arr_9 [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_0))))), ((~(var_3))))))))));
            arr_10 [i_0] [i_0] = ((/* implicit */_Bool) (-((+((-(((/* implicit */int) var_9))))))));
            var_12 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))), (((((/* implicit */_Bool) (short)-32689)) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (var_0))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)32689), ((short)-32689)))))));
        }
        var_13 = var_5;
        arr_11 [(short)16] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) >= ((-((((_Bool)1) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) (short)32712))))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        arr_16 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_3] [i_3]))))) ? (min((11008548204096518109ULL), (((/* implicit */unsigned long long int) arr_0 [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [i_3])))));
        arr_17 [i_3] = ((/* implicit */unsigned char) max((((/* implicit */int) var_5)), ((-(((/* implicit */int) arr_0 [i_3]))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        arr_20 [i_4] [i_4] = ((/* implicit */short) var_6);
        var_14 = ((/* implicit */signed char) (+(((((/* implicit */int) (short)-15202)) & (((/* implicit */int) (short)-22486))))));
        /* LoopSeq 2 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 592690420U)) ? (((/* implicit */int) arr_8 [i_4] [i_5] [i_5])) : (((/* implicit */int) var_5)))) << (((((/* implicit */int) arr_9 [i_5 - 1])) - (24059))))))));
            arr_24 [i_5] = ((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (arr_15 [i_5])))));
        }
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            arr_27 [i_4] [i_6] [i_6] = ((/* implicit */unsigned char) var_4);
            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_6]))))) ? (var_3) : (var_3))))));
            var_17 *= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4] [i_6]))) + (var_0)))) ? (var_0) : (((/* implicit */unsigned long long int) 2889111916U)));
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_22 [(_Bool)1] [i_6] [i_4])))))));
        }
    }
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-32689), (var_9))))) : (min((((/* implicit */unsigned long long int) var_2)), (min((var_1), (((/* implicit */unsigned long long int) var_6))))))));
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */unsigned int) -1089827439)) : (3906386519U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned int) var_4))))) : (max((((/* implicit */unsigned long long int) var_9)), (var_0))))))));
    var_21 = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))), (((/* implicit */int) ((signed char) var_8))))), (((((/* implicit */int) ((_Bool) var_9))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
}
