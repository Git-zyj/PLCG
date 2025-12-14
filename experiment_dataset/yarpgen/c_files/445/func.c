/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/445
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
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((long long int) max((((/* implicit */int) ((short) var_9))), (((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0])))))));
        var_15 ^= ((/* implicit */long long int) max((arr_0 [i_0]), (((/* implicit */unsigned char) max((arr_2 [i_0] [i_0]), (((/* implicit */signed char) var_13)))))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))) % (((/* implicit */int) max((max((var_12), (var_12))), (var_13)))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_9 [6LL] &= var_9;
        var_17 = ((/* implicit */int) var_10);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_18 += ((/* implicit */signed char) (((+((-(2147483628))))) < (((/* implicit */int) max(((unsigned char)193), (((/* implicit */unsigned char) ((2432355931698510429ULL) == (((/* implicit */unsigned long long int) var_5))))))))));
        arr_14 [i_2] = ((/* implicit */unsigned int) max((((unsigned long long int) arr_2 [i_2] [i_2])), (var_11)));
        arr_15 [i_2] = ((/* implicit */signed char) arr_5 [i_2]);
    }
    var_19 = ((/* implicit */signed char) var_13);
    var_20 = ((/* implicit */unsigned char) max((((unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_11)))), (((/* implicit */unsigned int) ((unsigned char) var_1)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            arr_20 [i_3] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((int) arr_5 [i_3]))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) (unsigned char)193)))) >= (((((/* implicit */int) (unsigned char)244)) | (((/* implicit */int) var_1))))));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((short) (unsigned char)248)))));
        }
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            arr_24 [i_3] = (unsigned char)128;
            var_22 = ((/* implicit */short) ((signed char) (~(((/* implicit */int) (unsigned char)193)))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            var_23 -= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_17 [i_3] [i_3])) != (((/* implicit */int) (unsigned char)255)))) && (var_10)));
            var_24 = ((/* implicit */_Bool) arr_0 [i_3 + 1]);
        }
        for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            arr_29 [i_3] = ((/* implicit */unsigned int) var_13);
            arr_30 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) < ((+(((/* implicit */int) arr_17 [i_7] [i_3 - 1]))))));
        }
        arr_31 [i_3] = ((((/* implicit */int) ((unsigned char) ((var_1) ? (arr_27 [i_3]) : (1213535933))))) * (((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_12)), (var_11))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_3] [i_3])))))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) 
    {
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((unsigned long long int) arr_28 [i_8])))));
        var_26 &= ((/* implicit */long long int) var_13);
        arr_35 [i_8] = ((/* implicit */int) var_3);
    }
}
