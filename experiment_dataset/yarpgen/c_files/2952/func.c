/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2952
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_2]);
                    /* LoopSeq 3 */
                    for (long long int i_3 = 3; i_3 < 20; i_3 += 4) /* same iter space */
                    {
                        arr_10 [i_0] [(_Bool)0] [i_2] [i_3] |= ((/* implicit */unsigned short) min((arr_8 [i_0] [10ULL] [10ULL]), (((/* implicit */unsigned long long int) ((unsigned short) arr_8 [i_3 + 1] [i_3 + 1] [i_3])))));
                        var_14 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-30028)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [(unsigned short)5])) : (((/* implicit */int) var_1))))))) ? (arr_4 [i_0] [i_0] [i_0]) : ((~(arr_6 [i_1] [i_3 + 1])))));
                        var_15 = ((/* implicit */unsigned long long int) (unsigned short)4264);
                        arr_11 [i_0] [i_1] [i_1] [i_1] [i_1] = (!(((/* implicit */_Bool) (unsigned short)61255)));
                    }
                    for (long long int i_4 = 3; i_4 < 20; i_4 += 4) /* same iter space */
                    {
                        var_16 *= ((/* implicit */unsigned char) 2147418112LL);
                        var_17 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) max((2591459751129663886LL), (((/* implicit */long long int) var_9))))), (arr_9 [i_0])))));
                        var_18 = ((/* implicit */unsigned char) ((short) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 515981098)) : (var_4))), (((/* implicit */unsigned long long int) max((arr_13 [(_Bool)1] [i_0] [(short)21]), (((/* implicit */unsigned short) arr_1 [10LL]))))))));
                        arr_15 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) max(((unsigned char)112), (((/* implicit */unsigned char) (_Bool)0)))))));
                    }
                    for (long long int i_5 = 3; i_5 < 20; i_5 += 4) /* same iter space */
                    {
                        var_19 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2925))) > (2391966208133213547ULL)));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) 515981108))) ? (((((/* implicit */_Bool) 562949953420800LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)132)))) : ((~(((/* implicit */int) arr_5 [i_2] [7ULL]))))));
                        var_21 = min((((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_5 - 3])), (65024)))) ? (((/* implicit */int) ((var_13) > (((/* implicit */long long int) ((/* implicit */int) var_6)))))) : (((/* implicit */int) arr_14 [i_5] [i_5 + 1] [1] [i_5] [i_5 - 1] [i_5])))), ((-(((/* implicit */int) ((((/* implicit */int) (unsigned char)140)) > (((/* implicit */int) (unsigned short)4264))))))));
                        var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                }
            } 
        } 
    } 
    var_23 -= var_1;
    var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1087048682)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-65))))), (var_5)))) : (min((((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (unsigned char)112)))), (((/* implicit */int) var_6))))));
}
