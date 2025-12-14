/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207084
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
    var_18 = (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)5)) && (((/* implicit */_Bool) ((signed char) 13253830387042693196ULL)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            var_19 = ((/* implicit */unsigned short) arr_2 [i_0]);
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (short)8275))))) % (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_14)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 4; i_2 < 18; i_2 += 1) 
            {
                for (unsigned short i_3 = 3; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0]))))));
                        var_20 += var_11;
                    }
                } 
            } 
        }
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (short)-2))));
    }
    for (unsigned int i_4 = 3; i_4 < 17; i_4 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [(short)12]))) : (3278819573U)))) || (((/* implicit */_Bool) -5993821331389683563LL)))));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (unsigned char)26))));
        /* LoopNest 2 */
        for (signed char i_5 = 4; i_5 < 17; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 4; i_6 < 18; i_6 += 3) 
            {
                {
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_5] [i_5]) >= (((/* implicit */int) (short)0)))))) * ((~(3583581034U)))))) ? (min((arr_14 [i_4 - 1] [i_5 + 1]), (((/* implicit */int) ((short) 10618013566204457418ULL))))) : (((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_3)))) ^ (((/* implicit */int) (!((_Bool)1))))))));
                    var_25 += ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_15)))));
                    var_26 = ((/* implicit */signed char) (unsigned char)229);
                }
            } 
        } 
    }
}
