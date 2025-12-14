/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39220
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
    var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-26))) ^ (1308026066U)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)180)) + (((/* implicit */int) var_1))))) : (var_17))), (min((((var_12) | (var_17))), (((/* implicit */long long int) (~(((/* implicit */int) var_13)))))))));
    var_20 = ((/* implicit */long long int) var_5);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -2095584221)) ? (((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_15))))) : (((/* implicit */int) ((unsigned char) arr_0 [2U]))))) : (((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) (unsigned char)79))), (var_14))))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((var_18), ((~(-3540127187893699778LL))))))));
        var_22 ^= ((/* implicit */long long int) var_8);
        var_23 = ((/* implicit */unsigned int) max((var_23), (arr_1 [i_0])));
    }
    for (long long int i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (3762202855U)))))));
        var_25 = ((/* implicit */unsigned int) (~(var_3)));
    }
    for (int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        arr_12 [5U] [(short)9] = ((/* implicit */signed char) arr_6 [(unsigned short)10]);
        var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((signed char)(-127 - 1)), (var_7)))) ? (max((((/* implicit */long long int) arr_11 [i_2] [i_2])), (var_17))) : (((/* implicit */long long int) ((/* implicit */int) max((var_0), ((signed char)87)))))))) ? (((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2]))) : (min((((/* implicit */long long int) 2095584202)), (arr_7 [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2])))));
        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)77)) ? (-160020989) : (((/* implicit */int) (signed char)(-127 - 1)))));
        arr_13 [11U] = ((/* implicit */int) (unsigned char)54);
        var_28 += ((/* implicit */unsigned int) max((min((((long long int) (unsigned short)8980)), (var_3))), (((((((/* implicit */int) var_13)) > (((/* implicit */int) var_4)))) ? (((((/* implicit */_Bool) (signed char)-35)) ? (arr_7 [(unsigned short)16]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-32463)))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((var_12) > (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)81))) : (arr_14 [i_3]))))))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            for (short i_5 = 4; i_5 < 12; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned int) -998826100202981746LL);
                                arr_26 [i_3] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */long long int) (-(((((/* implicit */int) (unsigned char)9)) | (((/* implicit */int) (unsigned char)137))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */int) ((long long int) arr_23 [(unsigned short)5] [i_4] [i_5 - 3] [i_4]));
                    var_32 = arr_14 [i_5 + 1];
                }
            } 
        } 
        arr_27 [(short)2] [i_3] = ((/* implicit */_Bool) ((unsigned int) arr_6 [i_3]));
        var_33 = ((/* implicit */_Bool) min((var_33), (((var_17) < (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
    }
}
