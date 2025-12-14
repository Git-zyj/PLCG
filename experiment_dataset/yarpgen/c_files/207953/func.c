/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207953
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_14 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) -1188206153)) ? (((/* implicit */unsigned long long int) var_8)) : (2190433320960ULL))) != (7864320ULL)))) << (((/* implicit */int) ((unsigned char) ((int) 2190433320960ULL))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (min((18446741883276230674ULL), (((/* implicit */unsigned long long int) -1188206155)))))))));
                    var_16 ^= ((unsigned char) var_11);
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned char) 1188206145);
        var_18 = ((/* implicit */int) ((arr_0 [i_0]) % (((/* implicit */unsigned long long int) arr_2 [i_0]))));
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 13; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                {
                    arr_16 [i_5] [i_4] [i_4] [i_3 - 4] = ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */unsigned long long int) ((var_4) ? (var_7) : (((/* implicit */int) var_4))))) : (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (18446741883276230677ULL))));
                    arr_17 [i_3] [i_3 - 3] [(unsigned char)3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */int) ((((/* implicit */_Bool) -1188206126)) && (((/* implicit */_Bool) arr_2 [i_4]))))) : (((/* implicit */int) ((((/* implicit */int) arr_15 [(_Bool)1])) == (var_5))))));
                    var_19 = ((/* implicit */int) ((unsigned char) arr_12 [i_5] [i_3 - 4]));
                    arr_18 [i_4] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) var_0)) * (arr_5 [11] [i_5]))));
                    var_20 = ((/* implicit */unsigned char) ((unsigned short) ((var_11) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5] [i_3]))))));
                }
            } 
        } 
        arr_19 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_13))));
        var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? ((+(((/* implicit */int) (unsigned char)15)))) : (((/* implicit */int) ((unsigned char) var_10)))));
        arr_20 [(unsigned char)5] = ((unsigned long long int) var_0);
    }
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((unsigned long long int) ((_Bool) var_0))))));
    var_23 -= (unsigned char)17;
    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) ((3467212661666420605ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
    var_25 = (_Bool)1;
}
