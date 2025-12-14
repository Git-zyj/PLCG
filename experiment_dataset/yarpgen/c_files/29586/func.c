/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29586
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
    var_10 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        var_11 = ((/* implicit */int) 18446744073709551615ULL);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [(_Bool)1] [i_1] [11] = ((/* implicit */signed char) (+(max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 846817720))))));
                    arr_7 [i_1] [i_1] [18LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-846817721)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_2))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))))) ? (((int) (signed char)-111)) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
                    arr_8 [i_1] [i_1] = (!(((/* implicit */_Bool) (-(var_7)))));
                    arr_9 [(unsigned char)22] [i_1] [i_2] [i_2] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((-6428563314407289866LL) < (-1218707825787373873LL)))), (max((arr_4 [i_0 - 1] [i_2 - 3] [i_2] [i_1 - 1]), (((/* implicit */unsigned long long int) var_5))))));
                }
            } 
        } 
        var_12 = ((/* implicit */unsigned long long int) arr_1 [i_0 - 2] [i_0 - 2]);
        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_4 [22] [i_0] [9ULL] [22]), (((arr_1 [i_0 - 1] [i_0 - 1]) ? (arr_4 [i_0] [(unsigned char)16] [i_0] [i_0]) : (var_8))))))));
        arr_10 [17ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 3] [i_0 - 3])) : (((/* implicit */int) var_2))))) && (var_4)));
    }
    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            arr_15 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_11 [i_3 - 1] [i_3 + 2])))) ? ((~(((((/* implicit */int) (unsigned char)63)) | (((/* implicit */int) (short)1984)))))) : (((((/* implicit */int) max((var_2), (((/* implicit */short) var_4))))) ^ (((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (((/* implicit */int) arr_14 [(unsigned short)4])) : (((/* implicit */int) var_0))))))));
            arr_16 [i_3] = ((/* implicit */_Bool) arr_11 [i_3] [i_3]);
            arr_17 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 6428563314407289873LL)) ? (((/* implicit */int) (short)-1986)) : (-962409697)))));
            arr_18 [(unsigned char)9] [i_3] = ((/* implicit */short) (+((-(((/* implicit */int) arr_2 [i_3 - 1] [i_4 + 1] [i_3 - 1]))))));
        }
        var_14 = ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((arr_0 [i_3 + 1] [i_3]) / (arr_0 [i_3 - 1] [10U]))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((unsigned int) arr_12 [i_3 + 1])))));
    }
    var_16 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))) != (((unsigned long long int) -846817721)))), ((!(((/* implicit */_Bool) (unsigned char)139))))));
    var_17 = ((/* implicit */unsigned int) (!(var_0)));
}
