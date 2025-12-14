/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238933
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) (~(((long long int) arr_3 [i_0] [i_1] [i_1]))));
                arr_4 [6U] [i_0] = ((/* implicit */unsigned short) max((((int) var_5)), (((/* implicit */int) ((_Bool) var_10)))));
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
                var_18 += ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32858))) != (-9040603749798897085LL))) ? (max((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [i_0])), (923468556852757878ULL))) : (((/* implicit */unsigned long long int) min((1085706715), (((/* implicit */int) (unsigned short)3)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9884403989852623385ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_2 [(unsigned short)2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_8)) ? (9884403989852623406ULL) : (((/* implicit */unsigned long long int) var_16)))))) : (((/* implicit */unsigned long long int) var_3)));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) min((min((min((9884403989852623383ULL), (((/* implicit */unsigned long long int) (unsigned short)15)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)204)), (var_11)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) != ((+(((/* implicit */int) var_11)))))))));
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((unsigned long long int) var_11)))));
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) /* same iter space */
    {
        var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3)) ? (6649128274910520794ULL) : (((/* implicit */unsigned long long int) arr_2 [6U]))))) ? (min((((/* implicit */long long int) var_15)), (var_16))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)204)) || (((/* implicit */_Bool) 0))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) arr_2 [0ULL])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(unsigned short)2])) && (((/* implicit */_Bool) (unsigned char)230))))))))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 1; i_3 < 13; i_3 += 1) 
        {
            arr_12 [i_2] [i_2] = 4294967295U;
            var_22 ^= ((/* implicit */_Bool) arr_8 [i_2]);
            var_23 -= ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_3 [i_3] [i_3 + 1] [i_3])))) * (min((((/* implicit */int) ((((/* implicit */_Bool) 219965836U)) && (((/* implicit */_Bool) var_2))))), (6)))));
            arr_13 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (+((((!(((/* implicit */_Bool) 281474976710655ULL)))) ? (-6) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11)))))))));
        }
    }
    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
    {
        var_24 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_2 [(unsigned char)8])) - ((+(var_3))))))));
        var_25 *= ((/* implicit */unsigned long long int) var_5);
        var_26 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */long long int) arr_2 [10ULL])) : (var_6)))) ? (var_6) : (max((var_3), (((/* implicit */long long int) arr_10 [i_4]))))))) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_4] [i_4])) || (((/* implicit */_Bool) arr_10 [i_4]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
    }
}
