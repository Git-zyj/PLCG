/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204388
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        arr_2 [5U] [5U] = ((((/* implicit */_Bool) 2765524587745347706ULL)) ? (((long long int) (+(4101935729381336706LL)))) : (((((((/* implicit */_Bool) 3761837324U)) ? (arr_1 [i_0]) : (arr_1 [i_0]))) / (((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_17))))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */signed char) arr_1 [i_1]);
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 3761837324U))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_4 [0U] [i_1])))) : (533129961U)))) ? (((((/* implicit */_Bool) ((short) var_1))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) 65535LL)) : (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24237))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) (unsigned char)114)))))))))));
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-24614)) : (((/* implicit */int) arr_7 [i_1])))) : (((/* implicit */int) arr_4 [i_1] [i_2])))) > ((((-(((/* implicit */int) arr_8 [(unsigned char)18] [(signed char)7])))) / (((/* implicit */int) (_Bool)1))))));
            var_23 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_7 [i_2]), (var_6)))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_1] [i_1])) ? (((/* implicit */unsigned int) 410478469)) : (var_9)))) ? (((/* implicit */int) ((_Bool) var_5))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_1] [i_1])), (arr_4 [i_1] [i_1]))))))));
            arr_10 [i_1] = ((/* implicit */unsigned int) max(((+(((/* implicit */int) (unsigned char)114)))), ((-(((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_2])) ? (((/* implicit */int) (short)-32761)) : (((/* implicit */int) (unsigned char)111))))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 3) 
        {
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-8645)) > (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1])))))))));
            arr_15 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)15))));
            var_25 += ((/* implicit */_Bool) var_18);
            var_26 = ((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : ((-(((/* implicit */int) arr_14 [5U])))));
        }
        /* vectorizable */
        for (signed char i_4 = 3; i_4 < 17; i_4 += 3) 
        {
            var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_17 [i_1] [i_1]))));
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)84)) > (((/* implicit */int) (_Bool)1))));
        }
    }
    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)100)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)71))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8))));
    var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) var_13))));
}
