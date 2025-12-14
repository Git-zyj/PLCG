/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23210
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
    var_11 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max(((!(((/* implicit */_Bool) 3670822124320648155LL)))), (((65532LL) > (((/* implicit */long long int) ((/* implicit */int) (short)32767))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) 65510LL);
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 1487097663))))) < (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)5170)) : (((/* implicit */int) (short)-2992))))))));
                arr_5 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)238)) || ((_Bool)1)))), (max((((/* implicit */unsigned int) arr_1 [i_1 + 1] [i_1 + 1])), (263230655U)))));
            }
        } 
    } 
    var_14 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)230)), (18446744073709551615ULL)))) || (((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned short) (unsigned char)230))))))))) & (max((((/* implicit */long long int) ((((/* implicit */int) (signed char)104)) ^ (((/* implicit */int) var_7))))), ((~(65514LL)))))));
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        arr_9 [i_2] = max((((/* implicit */unsigned int) max((((/* implicit */int) ((_Bool) var_10))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)-92))))))), ((~(max((1827405487U), (((/* implicit */unsigned int) (unsigned char)17)))))));
        arr_10 [i_2] [i_2] = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) 8936830510563328LL)))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */signed char) var_2);
        arr_14 [i_3] = ((/* implicit */_Bool) (-(9223372036854775784LL)));
        /* LoopSeq 4 */
        for (short i_4 = 1; i_4 < 15; i_4 += 1) 
        {
            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)66)) + (((/* implicit */int) arr_7 [i_4 + 1])))))));
            var_16 = ((/* implicit */unsigned char) -1859092568);
            var_17 = ((/* implicit */unsigned short) (unsigned char)193);
        }
        for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            arr_21 [i_3] [i_5] = ((/* implicit */int) ((((/* implicit */int) (short)-20708)) < (((/* implicit */int) var_3))));
            var_18 += ((/* implicit */_Bool) (+(((int) 1963929942836013398ULL))));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (8ULL)));
        }
        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            arr_24 [i_3] [12U] = ((/* implicit */unsigned short) ((262143) != (((/* implicit */int) var_0))));
            var_20 += ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_4) : (-9223372036854775785LL)))) ? (((/* implicit */int) arr_19 [i_6] [i_6])) : (((/* implicit */int) (_Bool)1))));
            var_22 += ((/* implicit */unsigned long long int) ((short) 480934612));
        }
        for (short i_7 = 1; i_7 < 15; i_7 += 2) 
        {
            var_23 = ((/* implicit */_Bool) ((short) ((65532LL) * (((/* implicit */long long int) ((/* implicit */int) var_0))))));
            var_24 += ((/* implicit */signed char) 287948901175001088ULL);
        }
    }
}
