/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241055
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned int) arr_1 [i_0] [i_0]));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) var_2);
                        var_17 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) arr_2 [(unsigned short)2]))));
                        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) 10906208078653100066ULL)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_4 = 2; i_4 < 16; i_4 += 1) 
        {
            var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4 - 1]))) ^ (10906208078653100066ULL)));
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))));
        }
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (10906208078653100066ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2305843009213693952ULL)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_16))))))))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) ((unsigned int) arr_10 [i_5]));
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            arr_21 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_6] [(_Bool)1])) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) arr_17 [9U] [i_6]))));
            arr_22 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) arr_5 [9ULL] [i_6]))));
            var_23 += ((/* implicit */unsigned short) -1379371970857999037LL);
            arr_23 [i_5] [i_5] [i_5] = ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (4294967295U))));
        }
        var_24 += ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))));
    }
    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_5))));
    var_26 = ((/* implicit */unsigned short) var_12);
}
