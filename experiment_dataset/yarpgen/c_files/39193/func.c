/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39193
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (~(var_17)));
        var_18 = ((/* implicit */unsigned int) var_1);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (long long int i_3 = 2; i_3 < 24; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0] [i_1 - 2]))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (1999563775479804312ULL) : (((/* implicit */unsigned long long int) var_0))))));
                        arr_11 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 5983235882235237477LL)) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_3 + 1] [i_1 + 3] [i_1])))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            arr_15 [i_0] [i_0] [i_1] [i_3] [i_4] = ((/* implicit */_Bool) ((int) 10U));
                            var_20 ^= ((/* implicit */unsigned char) ((unsigned int) arr_1 [i_1 + 3] [i_1 + 1]));
                        }
                        for (unsigned int i_5 = 3; i_5 < 24; i_5 += 4) 
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 4294967270U)) ? (arr_9 [i_1] [2ULL] [i_1 - 2] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1 + 2])))));
                            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((unsigned long long int) (short)-25032)) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25012)))));
                        }
                        arr_21 [i_0] [i_1] [(short)16] [i_0] [i_0] [i_0] = ((/* implicit */short) var_17);
                    }
                } 
            } 
        } 
        arr_22 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) arr_1 [(_Bool)1] [i_0]));
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        arr_25 [i_6 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)-25050), ((short)25009)))) ? (arr_19 [i_6] [i_6 - 1] [(_Bool)1] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)25024)))))))))));
        arr_26 [i_6] [i_6] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)25031)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)13341))))) >= (max((arr_24 [2ULL] [i_6]), (((/* implicit */unsigned long long int) 2147483641)))))))));
    }
    /* vectorizable */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        var_22 = ((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7 - 1] [9ULL]))) + (var_5));
        /* LoopNest 3 */
        for (signed char i_8 = 2; i_8 < 11; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 2; i_9 < 11; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_39 [i_7] [i_7] = ((/* implicit */unsigned int) ((arr_36 [i_7 - 1] [i_9 - 1] [9ULL] [9ULL] [i_9 + 1] [i_9 + 1]) % (((/* implicit */long long int) 1447510921))));
                        arr_40 [i_10] [i_7] [i_8] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) (short)-25014);
                    }
                } 
            } 
        } 
    }
    var_23 |= ((/* implicit */unsigned long long int) var_4);
}
