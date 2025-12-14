/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19170
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
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (min((((/* implicit */unsigned long long int) max((arr_1 [i_0] [i_0 + 1]), (arr_1 [i_0] [i_0 - 2])))), (((unsigned long long int) arr_1 [i_0] [i_0 - 2]))))));
        var_18 -= arr_0 [i_0 - 1];
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (-(18145923287771046151ULL))))) + ((-(((/* implicit */int) var_16))))));
            var_20 = ((/* implicit */unsigned char) ((signed char) ((4080831234378017923ULL) % (3164992149161088656ULL))));
        }
    }
    var_21 = ((/* implicit */unsigned char) var_2);
    var_22 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_3] [i_2]))));
                /* LoopSeq 3 */
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    arr_15 [i_2] [i_3] [14ULL] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2] [i_2])) ^ (((/* implicit */int) arr_1 [i_4] [i_2])))))));
                    arr_16 [i_2] [i_2] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) min((arr_5 [i_2] [i_2]), (arr_5 [i_4] [(signed char)11]))))))) && (((/* implicit */_Bool) max(((unsigned char)64), (arr_11 [i_2]))))));
                    arr_17 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (+(3164992149161088682ULL)));
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_12 [i_2] [i_3]))));
                }
                for (signed char i_5 = 2; i_5 < 14; i_5 += 1) 
                {
                    var_25 = arr_1 [(unsigned char)15] [(unsigned char)16];
                    arr_21 [i_2] [i_2] = var_2;
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        arr_27 [i_2] [6ULL] [i_2] [i_2] = ((/* implicit */signed char) (((+(((/* implicit */int) arr_23 [i_6])))) % (((((/* implicit */int) (unsigned char)24)) ^ (((/* implicit */int) arr_13 [i_7] [i_2] [i_2]))))));
                        arr_28 [i_7] = arr_8 [i_2];
                        var_26 = ((/* implicit */signed char) (unsigned char)145);
                        arr_29 [i_2] [(unsigned char)11] [i_6] [i_7] [i_7] = 15281751924548462945ULL;
                    }
                    for (signed char i_8 = 2; i_8 < 14; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */signed char) 4035225266123964416ULL);
                        var_28 *= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)33)) * (((/* implicit */int) (unsigned char)203))));
                        arr_33 [(signed char)3] [i_3] [(signed char)3] [(signed char)2] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_5 [i_2] [i_3]))))));
                        arr_34 [i_2] [i_3] [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_20 [i_8 + 1] [i_8] [i_8] [i_8 - 1]))));
                        arr_35 [(unsigned char)9] [i_3] [(unsigned char)10] [(unsigned char)9] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned char) arr_18 [(unsigned char)7]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_2] [i_3] [i_3] [i_8 + 1] [i_8 + 1] [i_3])))))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */int) arr_1 [i_2] [i_9])) : (((/* implicit */int) arr_1 [i_2] [i_3])))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned char) ((signed char) arr_12 [i_6] [i_10]));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)64)) * (((/* implicit */int) arr_31 [i_3] [i_6] [i_6] [i_3]))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 16; i_11 += 2) 
                        {
                            arr_45 [i_2] [(signed char)11] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) arr_14 [i_2] [i_2] [i_2])) + (2147483647))) >> (((arr_30 [i_2] [i_9] [i_6] [i_9] [i_11] [i_6]) - (3180933243685231872ULL)))));
                            var_32 = ((((/* implicit */_Bool) arr_30 [i_2] [7ULL] [i_6] [i_9] [i_11] [7ULL])) ? (arr_30 [i_2] [14ULL] [14ULL] [14ULL] [14ULL] [i_11]) : (arr_30 [i_2] [(unsigned char)6] [(signed char)8] [i_9] [(signed char)8] [i_2]));
                        }
                    }
                    arr_46 [i_2] [i_2] = ((/* implicit */signed char) (((+(3164992149161088680ULL))) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [2ULL] [2ULL] [i_6])))))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 1; i_12 < 15; i_12 += 4) 
                {
                    arr_50 [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 6074082521472993532ULL))));
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_12 + 1]))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [(unsigned char)15] [i_3] [i_12 - 1])))))));
                }
                var_34 = max((arr_20 [i_2] [7ULL] [i_2] [15ULL]), (((unsigned char) arr_20 [i_2] [i_2] [i_2] [i_2])));
            }
        } 
    } 
}
