/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47295
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_3))))) + (var_6)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (2235288786U))))) - (((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) var_8))))) ? (((((/* implicit */int) (signed char)-62)) % (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_2 [i_0]))))));
        var_13 = ((/* implicit */long long int) 2582850565U);
    }
    for (unsigned char i_1 = 3; i_1 < 19; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_1 - 3])))) + ((~(var_9)))));
        arr_6 [i_1 + 1] [i_1 + 2] = ((/* implicit */int) ((unsigned int) ((arr_4 [i_1 - 1]) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) (signed char)-101)))));
        var_14 = ((/* implicit */unsigned long long int) arr_2 [i_1]);
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_15 -= ((/* implicit */signed char) min((((max((((/* implicit */unsigned int) (signed char)2)), (arr_3 [i_2]))) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101))))), (((/* implicit */unsigned int) max((((/* implicit */int) arr_1 [(signed char)4])), ((~(((/* implicit */int) var_3)))))))));
            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((arr_0 [i_1]), (((/* implicit */short) var_3))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) * (var_4))) : (arr_3 [i_2]))))))));
            var_17 = ((/* implicit */int) arr_4 [i_2]);
        }
        for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 1) 
        {
            var_18 += ((/* implicit */unsigned short) var_3);
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_3 - 2])) + (((/* implicit */int) (signed char)-126))))) ? ((+(((/* implicit */int) max(((signed char)100), (var_1)))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_4 [2U])) << (((((/* implicit */int) var_1)) - (105)))))))));
        }
        arr_11 [i_1] [i_1 + 1] = ((/* implicit */short) arr_3 [i_1]);
    }
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)63785)), (var_0))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (2883895162U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4])))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) arr_7 [i_4])) * (((/* implicit */int) (unsigned short)1751))))))));
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            var_20 = ((/* implicit */unsigned long long int) (!((((((_Bool)1) ? (((/* implicit */unsigned long long int) 4294967282U)) : (var_9))) > (var_6)))));
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((((((/* implicit */unsigned long long int) ((unsigned int) arr_15 [(unsigned char)10]))) * (((((/* implicit */_Bool) var_9)) ? (9390116757709549390ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4]))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-11530)))))))))))));
                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned char) (signed char)-109))), (((((/* implicit */_Bool) (unsigned short)44319)) ? (var_7) : (((/* implicit */unsigned long long int) var_4)))))))));
            }
            var_23 = ((/* implicit */short) max((((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (var_0)))))), (((((arr_10 [i_4] [(short)8]) < (72553766U))) ? (min((var_4), (((/* implicit */unsigned int) (_Bool)1)))) : (1213089106U)))));
        }
    }
}
