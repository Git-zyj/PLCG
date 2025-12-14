/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33309
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_19 = min(((!(((/* implicit */_Bool) ((long long int) arr_3 [i_0] [i_1]))))), (((305931290) <= (174949780))));
                arr_6 [i_0 + 3] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */signed char) ((_Bool) max((733350279701648468ULL), (((/* implicit */unsigned long long int) (signed char)-49)))))), (((signed char) arr_1 [i_0 - 1] [i_1]))));
                arr_7 [i_0] = ((long long int) ((((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (unsigned char)114))))) >= (min((((/* implicit */unsigned long long int) (signed char)-59)), (17713393794007903148ULL)))));
                arr_8 [i_0] [i_1] = ((/* implicit */short) ((var_16) / ((~(((/* implicit */int) (short)25550))))));
            }
        } 
    } 
    var_20 |= (~(((/* implicit */int) max((((/* implicit */unsigned char) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-70)))), ((unsigned char)23)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_16 [i_2] [i_3] [i_3] = ((/* implicit */short) (signed char)48);
                var_21 = ((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)70))) : (3655376191613309740ULL));
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned char) (+((-(var_15)))));
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (+(min((((/* implicit */unsigned long long int) ((signed char) var_1))), ((~(7186015181032208457ULL))))))))));
                }
                for (int i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
                {
                    arr_22 [i_5] [i_2] [i_2] = ((((/* implicit */_Bool) (unsigned short)33970)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23))) : (16263431052405723097ULL));
                    arr_23 [i_2] [i_2] [i_3] [i_5] = ((/* implicit */short) max((((16263431052405723082ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (var_11))))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_2] [i_3])))));
                }
                arr_24 [i_3] [i_2] = ((/* implicit */long long int) ((var_12) < (((/* implicit */int) (!(var_11))))));
                arr_25 [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-88)) / (((/* implicit */int) (signed char)-53))))) ? (max((max((((/* implicit */int) (short)25550)), (var_15))), ((+(((/* implicit */int) (short)25550)))))) : (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) arr_1 [i_2] [i_3])))))));
            }
        } 
    } 
}
