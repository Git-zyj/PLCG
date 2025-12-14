/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191268
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
    var_16 = (!(((/* implicit */_Bool) ((short) (~(((/* implicit */int) var_12)))))));
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(6558400169088459913ULL))), (((/* implicit */unsigned long long int) var_9))))) ? ((((_Bool)0) ? (min((var_11), (var_6))) : (((/* implicit */int) max(((_Bool)0), ((_Bool)1)))))) : (((/* implicit */int) (!((_Bool)0)))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)67)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            var_19 = ((/* implicit */_Bool) var_13);
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                arr_9 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_3);
                arr_10 [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (2112726514) : (((/* implicit */int) (_Bool)1))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)33717)) | (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1]))));
            }
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1517604550)) ? (-1517604550) : (((/* implicit */int) arr_3 [i_0] [i_3]))));
            var_23 |= ((/* implicit */int) ((arr_7 [i_0]) ^ (arr_7 [i_3])));
            arr_13 [i_3] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */int) (short)-8192)) : (((/* implicit */int) (unsigned char)255))))) + (arr_4 [i_0] [i_0])));
            var_24 = ((/* implicit */unsigned char) var_3);
        }
        arr_14 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)62003)) ? (((/* implicit */unsigned int) -1246534572)) : (1094542887U)));
        var_25 = ((/* implicit */unsigned short) var_12);
    }
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        arr_18 [2U] [2U] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((var_7), (((/* implicit */int) var_9))))), (((unsigned long long int) max((var_13), (((/* implicit */unsigned char) var_2)))))));
        var_26 = ((/* implicit */unsigned char) ((var_11) | (((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned short)31818)))), (((_Bool) var_4)))))));
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (var_6)))))))))))));
        var_28 = ((/* implicit */short) ((signed char) ((((/* implicit */int) (unsigned short)42636)) | (((/* implicit */int) var_13)))));
    }
    for (int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        arr_21 [(signed char)10] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_12 [i_5])))) && (((/* implicit */_Bool) var_1))));
        /* LoopSeq 2 */
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            arr_24 [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)183)), (arr_22 [i_5] [i_5])))) ^ (((unsigned long long int) var_7))));
            arr_25 [i_5] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_12)))))));
        }
        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            arr_30 [i_5] [i_7] [i_5] = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) -1517604550)) * (max((1670772051025502245ULL), (((/* implicit */unsigned long long int) arr_29 [i_5])))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_5])))))));
            var_29 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_6 [i_5] [i_5] [i_7] [i_7])))))));
        }
        arr_31 [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_3 [i_5] [i_5]), (((/* implicit */unsigned short) (unsigned char)23))))) ? (max((((/* implicit */long long int) 1928171699U)), (var_15))) : (max((((/* implicit */long long int) (unsigned char)83)), (arr_22 [(unsigned char)9] [(_Bool)1]))))))));
        var_30 = ((/* implicit */_Bool) min((var_30), ((_Bool)1)));
        arr_32 [i_5] [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_15), (((/* implicit */long long int) max((var_3), (((/* implicit */short) var_14)))))))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)5142))))), (min((((/* implicit */int) arr_11 [i_5])), (var_7))))) : (((/* implicit */int) ((unsigned char) max((var_3), (var_3)))))));
    }
    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) 3200424409U))));
}
