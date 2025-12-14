/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239732
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_10 = arr_1 [i_0];
        var_11 = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((arr_0 [i_0]) < (arr_0 [i_0 + 1])))), (((short) (+(8191U))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 8; i_1 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_1]))));
        var_13 = ((/* implicit */unsigned char) arr_0 [i_1]);
    }
    for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */short) min((((max((((/* implicit */unsigned long long int) (unsigned char)3)), (18446744073709551608ULL))) << (((((((/* implicit */_Bool) 140737454800896ULL)) ? (1803754095U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)139))))) - (1803754050U))))), (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (8227954974709540880ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)235)) ^ (((/* implicit */int) var_0)))))))));
        var_14 = ((/* implicit */signed char) var_4);
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned short)38160)), (1803754095U)));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((16572195520064932118ULL) != (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)243)), ((short)16368))))) + (((((/* implicit */_Bool) 12103637245232314774ULL)) ? (16572195520064932118ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))))))))))));
        arr_10 [i_2 + 1] = ((/* implicit */unsigned char) ((signed char) var_8));
    }
    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        arr_13 [i_3] [(signed char)10] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)142)) / (arr_0 [i_3])))) ? (2147483647) : (((/* implicit */int) var_8)))));
        var_16 ^= ((/* implicit */unsigned int) arr_1 [i_3]);
    }
    var_17 |= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (var_4))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (var_5))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        arr_18 [i_4] [17LL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((var_0), (max(((unsigned char)243), (arr_14 [i_4]))))))));
        var_18 = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) (unsigned char)254)))));
        arr_19 [i_4] = ((/* implicit */unsigned short) (+((-(min((((/* implicit */unsigned int) var_0)), (1073741760U)))))));
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [(unsigned char)8]))) | (arr_17 [i_4] [i_4])))), (var_4)))) ? ((-(((/* implicit */int) arr_14 [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4])))))));
    }
    for (unsigned int i_5 = 2; i_5 < 17; i_5 += 2) 
    {
        arr_24 [i_5 + 3] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-20377)))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_20 [i_5 - 1]), (((/* implicit */unsigned char) (signed char)-1)))))) > ((+(var_5)))));
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            arr_28 [i_6] = ((/* implicit */int) ((((-417102893) <= (-960544547))) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) arr_23 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_6] [i_6]))) : (arr_16 [i_5] [i_6]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_26 [12U] [i_5])), (8ULL))))))))));
            var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) arr_20 [i_5])))))) ? (max((((/* implicit */unsigned long long int) (short)20384)), (arr_21 [i_5 + 1] [i_5 + 2]))) : (13ULL)));
            var_22 ^= ((/* implicit */long long int) var_0);
            arr_29 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_25 [i_5 - 1] [18ULL]), (((/* implicit */unsigned char) var_8)))))) | ((~(854379705U)))));
        }
        for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (short i_8 = 3; i_8 < 19; i_8 += 2) 
            {
                for (int i_9 = 2; i_9 < 18; i_9 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) min((var_8), (arr_32 [i_9] [17U]))))))))))));
                        var_24 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned char) var_3))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_25 [i_5] [i_5])), (13ULL)))) ? (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) min((((unsigned int) (signed char)-64)), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 983040U)) ? (((/* implicit */int) (unsigned char)240)) : (var_9))) % (((((/* implicit */int) arr_22 [i_5])) & (((/* implicit */int) (signed char)-87))))))))))));
        }
    }
    for (unsigned int i_10 = 4; i_10 < 18; i_10 += 4) 
    {
        arr_42 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)123)) ? (max((((/* implicit */int) (unsigned char)17)), (var_9))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1662844260U)))))));
        var_26 = ((/* implicit */unsigned short) var_9);
    }
}
