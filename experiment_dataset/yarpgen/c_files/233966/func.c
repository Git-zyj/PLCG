/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233966
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned int) min((var_10), (((((arr_1 [i_0 - 1] [i_0 + 3]) << (((arr_1 [i_0 + 3] [i_0 - 1]) - (3980579557U))))) << (((((((/* implicit */_Bool) 1469813604U)) ? (((/* implicit */int) (signed char)-23)) : (((/* implicit */int) (unsigned short)61440)))) + (34)))))));
        var_11 = ((/* implicit */unsigned char) min((var_11), (var_2)));
    }
    for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 9; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    {
                        arr_11 [i_1] [i_2] [i_1] [i_2] [i_1] [(unsigned short)7] = var_9;
                        arr_12 [2LL] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((1359433508) == (((/* implicit */int) var_6))))) * (((((/* implicit */_Bool) arr_8 [i_2] [i_2 - 1] [i_3] [i_2 - 1])) ? (((((/* implicit */_Bool) 11007372874600107878ULL)) ? (391198268) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_0))))));
                        var_12 = ((/* implicit */int) max((var_12), ((((+(((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) var_6))))));
                        arr_13 [i_3] [i_3] [6] |= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)41199)) != (((/* implicit */int) var_1))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_5 = 4; i_5 < 10; i_5 += 3) 
        {
            var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) << ((((+(((/* implicit */int) (unsigned short)30255)))) - (30251)))))) && (var_4)));
            var_14 = ((/* implicit */signed char) min((var_14), (var_5)));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            var_15 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) var_3)) >= (arr_1 [i_6] [i_6])));
            arr_18 [i_1 + 1] = ((/* implicit */long long int) ((arr_15 [i_6]) % (arr_15 [i_6])));
        }
        for (int i_7 = 1; i_7 < 10; i_7 += 3) 
        {
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)24339)) : (((/* implicit */int) (_Bool)1))))) ? (arr_14 [i_1] [i_1 + 1] [4]) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)29)) >> (((((/* implicit */int) (unsigned char)129)) - (120)))))))))));
            var_17 = ((/* implicit */int) var_2);
            arr_21 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -500266319)) ? (arr_3 [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
            var_18 = max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_7 - 1] [i_7 + 1]))))), (((unsigned short) -7804531131275835274LL)));
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_2 [i_1 - 1])))))))));
        }
        arr_22 [i_1] &= ((/* implicit */unsigned int) (unsigned short)33948);
        arr_23 [(short)7] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned short)24339)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((var_3) | (((/* implicit */int) var_0))))) : (((arr_16 [i_1 + 1] [i_1 - 1] [i_1]) - (arr_16 [i_1 + 1] [i_1 + 1] [i_1])))));
    }
    var_20 -= (~(max((((unsigned int) 2772091264U)), (((/* implicit */unsigned int) var_5)))));
    var_21 = ((/* implicit */int) var_7);
}
