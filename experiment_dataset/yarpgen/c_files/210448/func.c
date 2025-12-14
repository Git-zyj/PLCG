/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210448
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_1] [i_2 + 2] = ((/* implicit */short) (unsigned char)224);
                    var_20 -= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 578225374)) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) arr_3 [i_2 + 2]))))));
                }
            } 
        } 
        arr_8 [i_0] [(signed char)10] = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_0] [8U]))));
        /* LoopSeq 1 */
        for (signed char i_3 = 4; i_3 < 14; i_3 += 3) 
        {
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) var_14)) + (((/* implicit */int) arr_6 [i_0] [(signed char)4] [i_0] [i_3 - 4])))) : (((/* implicit */int) var_1))));
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned short i_5 = 1; i_5 < 11; i_5 += 4) 
                {
                    var_22 = ((/* implicit */unsigned long long int) (+((((_Bool)1) ? (((/* implicit */int) (unsigned short)18850)) : (((/* implicit */int) (_Bool)0))))));
                    arr_17 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(unsigned char)1] [i_3] [i_3] [0LL] [10LL])) ? (((/* implicit */int) arr_13 [(unsigned char)8] [i_4] [(short)1] [i_0])) : (((/* implicit */int) arr_16 [i_0] [i_4] [i_5 + 1]))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18840)))));
                }
                for (int i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    /* LoopSeq 2 */
                    for (int i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        arr_26 [i_0] [i_3] [i_3 - 3] [i_4] [i_4] [i_7] = ((((int) (signed char)-88)) / (((/* implicit */int) arr_19 [i_7] [i_4] [i_4] [(unsigned short)5])));
                        arr_27 [i_0] [i_3 - 1] [(unsigned char)12] [i_4] [i_7] = ((((((/* implicit */_Bool) var_17)) ? (2746992694U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_4] [i_4]))))) >> ((((-(-578225375))) - (578225351))));
                    }
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        arr_30 [i_4] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) arr_21 [5] [i_3] [8] [i_3 - 1])) + (((/* implicit */int) arr_21 [i_0] [i_4] [i_8] [i_3 - 1]))));
                        arr_31 [i_0] [i_4] [i_0] [i_0] [(short)14] [9ULL] = ((/* implicit */long long int) ((arr_13 [i_8] [i_3 - 3] [i_4] [i_0]) ? (((/* implicit */int) arr_28 [i_4] [(signed char)4] [i_3 + 1] [(_Bool)1] [i_3 - 1])) : (((/* implicit */int) arr_13 [i_0] [i_3 - 1] [(_Bool)1] [i_6]))));
                        arr_32 [i_0] [6LL] [6LL] [i_4] [i_6] [i_8] [i_8] |= ((/* implicit */_Bool) arr_0 [i_4]);
                        arr_33 [i_0] [i_3] [i_4] [i_6] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) var_4)))) ^ (arr_4 [i_0] [i_0] [i_0])));
                        var_23 = ((/* implicit */_Bool) ((arr_13 [i_0] [i_3] [i_0] [i_3]) ? (((/* implicit */int) ((_Bool) var_3))) : (((((/* implicit */int) arr_16 [i_0] [i_4] [i_0])) & (var_11)))));
                    }
                    var_24 = ((((/* implicit */_Bool) arr_21 [i_3 + 1] [i_3 - 3] [i_3 - 3] [i_4])) ? (((/* implicit */int) ((-1930232193) > (((/* implicit */int) (_Bool)1))))) : ((~(-638988716))));
                }
                var_25 ^= ((/* implicit */_Bool) (unsigned short)53293);
                arr_34 [i_4] [i_4] [i_3] [i_3] = ((/* implicit */_Bool) ((signed char) arr_15 [i_3] [i_3] [i_3 - 2] [i_3] [i_4]));
                arr_35 [i_3] [i_4] = ((/* implicit */unsigned int) (_Bool)0);
            }
            for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
            {
                arr_38 [i_9] [4U] [i_3] [i_0] = ((/* implicit */unsigned short) (unsigned char)238);
                arr_39 [i_0] [(unsigned short)0] [i_9] [i_9] = ((signed char) arr_37 [i_3 - 4] [i_3]);
                var_26 -= ((/* implicit */_Bool) 4339963364116104478LL);
            }
        }
    }
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_19)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_2))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (~(var_2)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (1073741824U) : (var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)17014)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-30))) : (7045650757615582113LL)))) : (var_2)))));
}
