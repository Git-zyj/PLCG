/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193018
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
    var_20 = ((/* implicit */int) max((min((((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-59))) : (var_12))), (((/* implicit */unsigned long long int) var_18)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)50)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (signed char)-59)))) ? (((((/* implicit */_Bool) var_13)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)59)) >> (((((/* implicit */int) (signed char)59)) - (42)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((arr_4 [i_0] [i_1]) == (((/* implicit */unsigned long long int) 4294967295U))))))))));
            arr_5 [i_0] = ((/* implicit */signed char) (+(var_12)));
        }
        arr_6 [i_0] = (+(max((((/* implicit */unsigned long long int) (unsigned char)255)), (66067250730349198ULL))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 3; i_2 < 21; i_2 += 3) 
        {
            for (unsigned int i_3 = 1; i_3 < 22; i_3 += 2) 
            {
                {
                    arr_13 [i_3] [i_2 - 1] [i_0] = min((6955197863270914463ULL), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-27)) ? (-8977915062208859759LL) : (((/* implicit */long long int) arr_9 [i_2]))))), (max((var_7), (((/* implicit */unsigned long long int) (signed char)-27)))))));
                    arr_14 [i_0] [i_3] [i_2 + 1] [i_3 + 1] = ((/* implicit */short) (+(max((((/* implicit */int) max((((/* implicit */short) arr_1 [i_0] [i_3])), (arr_12 [i_3] [i_2])))), (((((-337831509) + (2147483647))) >> (((-3325081460188295597LL) + (3325081460188295614LL)))))))));
                }
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned int) var_6);
        var_22 = ((/* implicit */signed char) min((max((min((8716820622872710994ULL), (((/* implicit */unsigned long long int) arr_9 [i_4])))), (((/* implicit */unsigned long long int) arr_2 [i_4])))), (((/* implicit */unsigned long long int) var_8))));
        var_23 *= ((/* implicit */unsigned long long int) -3325081460188295597LL);
    }
    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        arr_21 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_10))) * (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_10 [i_5] [i_5] [i_5])) : (((/* implicit */int) var_5))))));
        /* LoopSeq 3 */
        for (signed char i_6 = 2; i_6 < 21; i_6 += 4) /* same iter space */
        {
            arr_24 [i_6] &= ((/* implicit */unsigned long long int) arr_1 [i_6 - 2] [i_6 - 2]);
            var_24 ^= ((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (arr_19 [i_5] [i_6])));
        }
        for (signed char i_7 = 2; i_7 < 21; i_7 += 4) /* same iter space */
        {
            var_25 -= ((/* implicit */signed char) max((max((((/* implicit */unsigned int) min((((/* implicit */int) var_13)), (arr_9 [i_7])))), (((((/* implicit */_Bool) var_17)) ? (4203073459U) : (2294755258U))))), (((/* implicit */unsigned int) (+(-36100190))))));
            arr_27 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) ((long long int) var_16))) ? (((/* implicit */int) arr_20 [i_5] [i_7])) : (((/* implicit */int) var_15)))) : ((+(((/* implicit */int) arr_19 [i_5] [i_7 + 1]))))));
            var_26 = ((/* implicit */signed char) ((long long int) min(((short)18), (((/* implicit */short) (signed char)44)))));
        }
        for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)30720)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-24))) : (0ULL))))), (((((/* implicit */int) ((unsigned short) var_8))) % (min((((/* implicit */int) (short)20937)), (arr_9 [i_8]))))))))));
            arr_30 [i_5] [i_8] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_20 [i_5] [i_8])))));
        }
        arr_31 [i_5] = ((/* implicit */signed char) (unsigned short)1023);
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (max((((/* implicit */unsigned long long int) (+(((long long int) arr_20 [i_5] [i_5]))))), (min((var_12), (((/* implicit */unsigned long long int) arr_26 [i_5] [i_5]))))))));
    }
    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 2155464535624963842ULL))))), (((((/* implicit */_Bool) 432843913396234279LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)27))) : (var_6)))))) ? (9919831892673187073ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2348392792U)) ? (((/* implicit */int) (unsigned short)8)) : (-36100178))))))));
    var_30 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_18), (((/* implicit */unsigned int) var_13))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (8526912181036364559ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))) : (var_8)));
    var_31 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned long long int) var_18))));
}
