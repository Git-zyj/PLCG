/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200447
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
    var_12 = ((/* implicit */short) (+((+(((/* implicit */int) (signed char)69))))));
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_7))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (+((+(3458568720928037414LL)))));
        arr_3 [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 - 2] [i_0 + 2]))));
        arr_4 [i_0] = ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))) >= (((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) arr_1 [i_0] [i_0 + 2])))));
    }
    for (long long int i_1 = 4; i_1 < 14; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) (+(((max((((/* implicit */unsigned long long int) -3458568720928037414LL)), (0ULL))) | (((/* implicit */unsigned long long int) 3458568720928037414LL))))));
        var_14 = (i_1 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) arr_0 [i_1])))) <= (((/* implicit */int) arr_5 [i_1 - 4] [i_1]))))) + (((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_1])))) >> (((((((/* implicit */_Bool) (short)18565)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 3] [i_1]))) : (18446744073709551608ULL))) - (18807ULL)))))))) : (((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) arr_0 [i_1])))) <= (((/* implicit */int) arr_5 [i_1 - 4] [i_1]))))) + (((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_1])))) >> (((((((((/* implicit */_Bool) (short)18565)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 3] [i_1]))) : (18446744073709551608ULL))) - (18807ULL))) - (3301ULL))))))));
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 14; i_2 += 3) 
        {
            for (int i_3 = 1; i_3 < 12; i_3 += 3) 
            {
                {
                    arr_13 [i_1] [i_2] [i_3 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1 + 1] [i_1 - 2])) ? (((/* implicit */int) ((min((((/* implicit */long long int) (signed char)-78)), (3458568720928037432LL))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5998)))))) : ((-(((((/* implicit */_Bool) arr_9 [13LL] [13LL] [i_3 + 2])) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (_Bool)1))))))));
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (-(((/* implicit */int) min(((short)16384), ((short)(-32767 - 1))))))))));
                    arr_14 [i_1] [i_1] [i_3 + 2] = ((/* implicit */long long int) arr_9 [i_1] [(short)11] [i_3]);
                    arr_15 [i_1] [i_2 + 1] [i_2 - 1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) arr_6 [i_1])))) ? ((+(arr_10 [i_1] [i_1] [i_2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))) ? (arr_10 [i_1] [i_1 - 4] [i_3] [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3458568720928037415LL)) ? (((/* implicit */int) (unsigned short)11519)) : (((/* implicit */int) arr_6 [i_1]))))) > (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_2] [3]))) : (21ULL)))))))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_1 - 1])))))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            arr_20 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? ((((_Bool)1) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (short)18565)))) : ((~(((/* implicit */int) (signed char)42)))))) | (((((/* implicit */int) arr_12 [i_1 - 2] [i_1] [i_4])) & (((/* implicit */int) arr_12 [i_1 + 1] [i_1] [i_4]))))));
            var_17 = -3458568720928037406LL;
        }
    }
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (min((((var_3) / (((/* implicit */long long int) ((/* implicit */int) (short)10085))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-28957)) : (((/* implicit */int) var_10))))))) : (((((var_3) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */long long int) (_Bool)1)), (var_5))) : (((/* implicit */long long int) (+(((/* implicit */int) var_10)))))))));
}
