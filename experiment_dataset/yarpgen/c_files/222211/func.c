/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222211
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        {
                            var_18 -= ((/* implicit */long long int) (((+(-1794360805))) != (2147483647)));
                            arr_15 [i_0] [i_0] [i_0] [3LL] [i_0] [i_0] [i_0] = arr_10 [i_0] [i_1] [6] [i_4];
                            var_19 |= ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_11 [i_0])) ? (arr_11 [i_0]) : (((/* implicit */int) (_Bool)1)))));
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (-2147483647 - 1)))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */unsigned char) arr_11 [i_0]);
        }
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(711944317)))), (((((/* implicit */_Bool) -604923696)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((int) 711944346))))))))));
        var_23 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (5608682907451806178ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 8559251355971757396LL)) + (9432153149925253071ULL)))) ? (-6244659566727876567LL) : (((/* implicit */long long int) (-2147483647 - 1))))))));
    }
    for (int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
    {
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned int) ((signed char) (((-(((/* implicit */int) arr_17 [i_5] [i_5])))) | (-2147483647))));
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) 8559251355971757403LL)))));
        var_24 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_17 [i_5] [1LL]))))));
        var_25 = ((/* implicit */signed char) (-(((arr_16 [i_5]) ^ (arr_16 [i_5])))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_20 [i_6])))));
        arr_23 [i_6] [i_6] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) | (arr_16 [i_6])));
        var_27 = ((/* implicit */unsigned short) (+(var_16)));
    }
    var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) var_15))));
}
