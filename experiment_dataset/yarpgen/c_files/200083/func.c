/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200083
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
    for (long long int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), (min(((short)-27786), (((/* implicit */short) (unsigned char)205))))));
        arr_4 [i_0 - 1] [5ULL] = ((/* implicit */unsigned char) min((var_3), (((/* implicit */unsigned long long int) ((unsigned short) ((short) var_0))))));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_20 ^= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) 2399899769U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((unsigned long long int) (_Bool)1)))));
        /* LoopSeq 4 */
        for (unsigned short i_2 = 3; i_2 < 11; i_2 += 4) 
        {
            var_21 = ((/* implicit */short) (unsigned char)15);
            var_22 = ((/* implicit */int) ((short) (-(((/* implicit */int) var_6)))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            var_23 = ((/* implicit */unsigned long long int) var_18);
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)24690)) ? (5660285052362207795ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
            arr_12 [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((_Bool) var_10));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_15 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)15774)), (((unsigned long long int) (short)-32756))))) ? (((((/* implicit */_Bool) (unsigned short)8364)) ? ((+(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (unsigned char)176)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (_Bool)1))))));
            /* LoopNest 2 */
            for (signed char i_5 = 2; i_5 < 12; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    {
                        arr_22 [i_1] = (short)-482;
                        var_25 = ((/* implicit */unsigned long long int) var_14);
                        var_26 = ((/* implicit */short) var_15);
                    }
                } 
            } 
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */int) max((var_27), ((-(((/* implicit */int) ((short) (signed char)-93)))))));
            arr_25 [i_1] [1ULL] = ((/* implicit */short) -713996107772659059LL);
            arr_26 [i_1] [i_7] [i_1] = ((/* implicit */unsigned int) ((short) (~(((int) (short)-32767)))));
            var_28 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (2097120) : (((/* implicit */int) var_7))))) ? (12786459021347343831ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27796)))));
        }
        arr_27 [i_1] [i_1] = ((/* implicit */short) var_6);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 1) 
    {
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            {
                var_29 = ((/* implicit */_Bool) (~(5660285052362207787ULL)));
                var_30 = ((/* implicit */long long int) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))))));
            }
        } 
    } 
}
