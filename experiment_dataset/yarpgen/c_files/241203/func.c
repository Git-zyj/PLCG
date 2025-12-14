/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241203
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
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_11 [i_2] = ((/* implicit */unsigned int) min(((+(((/* implicit */int) ((unsigned short) (unsigned char)255))))), ((-(((/* implicit */int) var_11))))));
                            var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)17312)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_1)))))) ? (((((/* implicit */int) var_8)) % (((/* implicit */int) var_2)))) : (((/* implicit */int) var_2))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_5)))) ? (((((/* implicit */unsigned long long int) 4294967263U)) / (12804468461206558659ULL))) : (((/* implicit */unsigned long long int) (-(var_10))))))) ? (((/* implicit */long long int) ((unsigned int) var_4))) : ((+(var_5)))));
                var_17 -= ((/* implicit */unsigned long long int) 67108863LL);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 4) 
    {
        for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            {
                arr_16 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (2341685335U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned int) max((-1), (((/* implicit */int) (unsigned char)0))))) : ((+(628746992U)))));
                /* LoopNest 3 */
                for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 19; i_8 += 3) 
                        {
                            {
                                arr_27 [i_8] [i_4] [i_5] [i_6] [i_7] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))) : ((-(32U)))));
                                arr_28 [i_8] [i_8] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((((/* implicit */int) (short)-2048)) >= (1)))) : ((~(-1))))));
                            }
                        } 
                    } 
                } 
                arr_29 [i_4] [i_5] [(unsigned short)13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5671568819367307098LL)) ? (var_13) : (((/* implicit */unsigned long long int) var_10))))) ? (((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */int) (short)-15220)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_14))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_9 = 0; i_9 < 17; i_9 += 4) 
    {
        var_18 = ((/* implicit */long long int) ((unsigned char) (+(((/* implicit */int) var_2)))));
        var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_14))));
    }
}
