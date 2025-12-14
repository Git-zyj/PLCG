/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228995
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
    var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (((_Bool)1) ? (1263846912U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)17974)))))) ? (((unsigned int) 16383)) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))) % (var_2)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_1))));
                    var_14 -= ((/* implicit */unsigned long long int) (short)-17974);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_3] = ((/* implicit */signed char) ((arr_9 [i_0] [i_1] [i_2] [i_4]) << (((max((((((/* implicit */int) var_1)) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (145))))), (((((/* implicit */int) (unsigned short)440)) | (((/* implicit */int) arr_12 [i_0] [i_0] [i_4])))))) - (443)))));
                                var_15 ^= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) ((arr_5 [10U] [8]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (1770849089U)))) || (((/* implicit */_Bool) (unsigned short)3351)))))));
                                arr_14 [i_4] [i_1] [i_2] [i_4] [i_2] [i_4] [(unsigned short)6] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_0] [i_0]))));
                            }
                        } 
                    } 
                    arr_15 [i_0] = ((/* implicit */signed char) 2172567145U);
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) min((var_16), (0U)));
                                arr_21 [i_6] [i_5] [(signed char)0] [(signed char)0] [i_0] = ((/* implicit */unsigned short) ((short) var_7));
                                arr_22 [i_0] [i_1] = ((/* implicit */long long int) (+(4U)));
                                arr_23 [(short)2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_20 [i_0] [(unsigned short)5]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) ((_Bool) var_5))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : ((+(-1460727703)))))));
    /* LoopSeq 1 */
    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (int i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */int) arr_24 [i_11]);
                            arr_38 [i_11] |= ((((/* implicit */_Bool) (unsigned short)26705)) ? ((-(var_2))) : (((((/* implicit */_Bool) (unsigned short)7118)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)17961))) : (2047U))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)128)))))));
                        }
                    } 
                } 
            } 
            var_20 -= ((/* implicit */unsigned char) (short)29218);
        }
        arr_39 [i_7] = ((/* implicit */unsigned int) (~(var_8)));
    }
    var_21 = ((/* implicit */unsigned long long int) var_2);
}
