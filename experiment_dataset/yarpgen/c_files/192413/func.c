/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192413
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
    var_12 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) max((var_13), (var_0)));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_14 -= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-30))) ^ (min((var_6), (((/* implicit */long long int) (short)21757))))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_3 = 1; i_3 < 22; i_3 += 4) 
                {
                    var_15 ^= ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)21756))))));
                    arr_10 [i_2] [i_2 - 1] [18U] [i_2] [i_3] [i_2] = ((/* implicit */short) (+(((/* implicit */int) (short)19221))));
                }
                var_16 = ((/* implicit */unsigned char) ((signed char) min((((((/* implicit */int) (signed char)35)) & (((/* implicit */int) (short)-21757)))), (((/* implicit */int) (signed char)-30)))));
                arr_11 [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))) / (var_6)))));
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */unsigned int) 1024589805)) / (min((((unsigned int) var_3)), (((/* implicit */unsigned int) (short)21767)))))))));
            }
            for (short i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                arr_14 [i_0] [i_1] [i_4] = ((/* implicit */short) (-(((((/* implicit */_Bool) 3136909160559598417LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (-2397752830104019764LL)))));
                var_18 = ((/* implicit */long long int) max((var_18), (9223372036854775807LL)));
                arr_15 [i_1] &= ((/* implicit */signed char) 3684554709672718614LL);
            }
        }
        /* LoopSeq 1 */
        for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            var_19 |= var_5;
            var_20 ^= ((/* implicit */unsigned char) 1594367257U);
        }
    }
    for (signed char i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] |= ((/* implicit */unsigned int) ((long long int) (signed char)-28));
        var_21 ^= ((/* implicit */short) (!(((/* implicit */_Bool) 3684554709672718593LL))));
    }
    var_22 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)86))) <= (var_9))))));
    /* LoopNest 2 */
    for (short i_7 = 2; i_7 < 12; i_7 += 1) 
    {
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            {
                var_23 = ((/* implicit */long long int) ((1594367261U) != ((-((-(2700600039U)))))));
                var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)120))) >= (-1LL))))) : (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)168)))))) : (((long long int) ((((var_10) + (9223372036854775807LL))) >> (((2700600039U) - (2700600011U)))))));
                var_25 = ((/* implicit */signed char) var_4);
                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) var_8))));
            }
        } 
    } 
}
