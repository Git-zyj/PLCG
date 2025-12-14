/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26424
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
    var_10 |= -1;
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2927979018945454774ULL)) ? (-6416590349950835802LL) : (((/* implicit */long long int) 306585225))))) ? (var_5) : (((/* implicit */long long int) var_7))));
    var_12 = ((/* implicit */unsigned char) ((int) var_1));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-5)) <= (((/* implicit */int) (unsigned char)221))));
        var_14 = ((/* implicit */_Bool) ((unsigned char) min((((((/* implicit */_Bool) (signed char)-46)) ? (var_2) : (((/* implicit */int) var_0)))), (var_7))));
        var_15 ^= ((/* implicit */long long int) ((unsigned short) arr_1 [i_0]));
        var_16 += ((/* implicit */signed char) ((-4186596323768810320LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)138)))));
    }
    for (unsigned char i_1 = 2; i_1 < 12; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */short) var_0)), ((short)-11422))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((unsigned long long int) (unsigned char)181))));
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 13; i_2 += 2) 
        {
            for (short i_3 = 2; i_3 < 13; i_3 += 1) 
            {
                {
                    arr_10 [i_1] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) ((var_3) && (((/* implicit */_Bool) (unsigned char)224))))) / (((/* implicit */int) ((short) 1)))))) >= (min((((/* implicit */long long int) max((var_2), (((/* implicit */int) var_3))))), (min((((/* implicit */long long int) var_6)), (var_5)))))));
                    var_18 = ((/* implicit */unsigned char) var_1);
                    var_19 = ((/* implicit */long long int) min((var_19), (var_5)));
                    arr_11 [i_2] [i_2] = ((/* implicit */long long int) ((signed char) ((min((arr_7 [i_1] [(unsigned char)1]), (((/* implicit */unsigned long long int) (signed char)-82)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)111))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) (+(var_7)))))));
        arr_12 [i_1] [i_1] = ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) (unsigned char)125)) : ((-2147483647 - 1)));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_9))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        {
                            arr_26 [i_4] [i_5] [i_5] [i_7] |= min((var_5), (((/* implicit */long long int) ((((((/* implicit */int) var_3)) * (((/* implicit */int) var_8)))) | (((/* implicit */int) var_8))))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (arr_18 [i_5]) : (((/* implicit */long long int) var_2)))) < (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_18 [i_4]))))))) != ((-(((/* implicit */int) min((var_6), (var_6))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
