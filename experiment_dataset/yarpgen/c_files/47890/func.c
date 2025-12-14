/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47890
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) var_5)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_3)));
    var_16 = max((var_14), (((((/* implicit */_Bool) var_13)) ? (664571254U) : (max((((/* implicit */unsigned int) var_1)), (69191430U))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] [3U] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) + (arr_1 [(_Bool)1])))) ? (((/* implicit */int) ((var_12) <= (((/* implicit */long long int) var_7))))) : (((/* implicit */int) var_0))))) ? (max((max((((/* implicit */unsigned int) (unsigned char)130)), (var_14))), (((/* implicit */unsigned int) arr_0 [i_0])))) : (4225775883U));
        arr_3 [(unsigned short)6] [(unsigned short)6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (454880561))))))) ? (max((arr_1 [i_0]), (arr_1 [i_0]))) : (arr_1 [i_0])));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3599013417U)) ? (17793002606442456109ULL) : (((/* implicit */unsigned long long int) -1500342773))));
        var_17 &= ((((/* implicit */_Bool) arr_0 [10ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((unsigned int) var_14)));
    }
    for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 4) 
    {
        var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_1 [10]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))) : (((/* implicit */int) arr_0 [i_1]))));
        arr_8 [i_1 + 1] = ((/* implicit */signed char) ((short) (signed char)41));
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 17; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                {
                    var_19 &= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) -1849716275948475894LL)) && (((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)255)), (-778632037)))))))));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_2 - 1])) ? (2147483584) : (454880561)))), (max((((/* implicit */unsigned long long int) 454880561)), (var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_14)) < (arr_14 [i_1 - 1] [i_1 + 1]))))) : (var_12)));
                }
            } 
        } 
        var_21 -= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) 853725928U))))));
        var_22 = (~(-1500342773));
    }
    for (int i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        var_23 = ((/* implicit */signed char) (+(((((/* implicit */unsigned int) 0)) ^ (max((((/* implicit */unsigned int) arr_0 [i_4])), (3867309438U)))))));
        arr_18 [i_4] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4])))))));
        var_24 *= ((/* implicit */signed char) ((max((max((((/* implicit */unsigned long long int) arr_5 [i_4])), (653741467267095507ULL))), (((/* implicit */unsigned long long int) arr_11 [i_4] [i_4] [i_4])))) + (((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */unsigned long long int) (signed char)-125)), (6725363015548320977ULL))) : (((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218))) : (var_13)))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        arr_22 [i_5] = ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (arr_20 [i_5]) : (arr_20 [5ULL])))) <= (arr_21 [i_5]))) ? (((((/* implicit */_Bool) max((2165635749607369903ULL), (((/* implicit */unsigned long long int) (signed char)-49))))) ? (4225775865U) : (max((2473147793U), (((/* implicit */unsigned int) 524284)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */int) (_Bool)1)) : (arr_20 [i_5])))));
        var_25 = ((/* implicit */unsigned long long int) 1694240543U);
    }
    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (-(((max((6725363015548320977ULL), (3ULL))) & (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_13))))))))));
}
