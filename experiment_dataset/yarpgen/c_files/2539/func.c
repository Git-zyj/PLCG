/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2539
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (min((arr_1 [i_0] [i_0]), (((/* implicit */int) (short)5106)))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (arr_1 [i_0] [0]))))))));
        arr_4 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)18682))))), (max((((/* implicit */unsigned long long int) 9062685899177891175LL)), (var_5)))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */int) (((-2147483647 - 1)) != (arr_1 [i_1] [(short)10])));
        arr_9 [i_1] = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_1])));
        var_17 = ((((/* implicit */_Bool) ((var_13) - (((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_0 [i_1])) : (((var_3) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) (unsigned char)66)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        var_18 += ((/* implicit */short) arr_10 [i_2]);
        /* LoopSeq 1 */
        for (unsigned short i_3 = 4; i_3 < 20; i_3 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_4 = 4; i_4 < 22; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (signed char i_6 = 2; i_6 < 21; i_6 += 1) 
                    {
                        {
                            var_19 = (+(arr_21 [9LL] [9LL] [i_3] [i_3 - 2]));
                            var_20 = ((/* implicit */_Bool) arr_12 [i_2]);
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */short) 536868864);
        }
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)52))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_2])) ? (var_14) : (((/* implicit */long long int) 16465785U))))))))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32604)) ? (8452614819945535912LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180)))));
                }
            } 
        } 
        arr_30 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [(short)13] [i_2] [i_2]))) == (arr_26 [i_2])));
    }
    for (int i_9 = 0; i_9 < 11; i_9 += 1) 
    {
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_33 [i_9] [i_9])) >> (((((/* implicit */int) arr_33 [i_9] [i_9])) - (16155))))) & (((/* implicit */int) ((unsigned short) (unsigned char)45))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 4) 
        {
            arr_38 [i_9] = ((/* implicit */unsigned int) (-(-8452614819945535912LL)));
            var_25 = ((/* implicit */unsigned short) ((unsigned int) var_0));
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_9] [i_9] [i_10] [i_9]))) : (((3973143222193156924ULL) >> (((/* implicit */int) (_Bool)0))))));
            var_27 = ((/* implicit */unsigned long long int) ((long long int) 2325230476671151303ULL));
        }
    }
    var_28 = ((/* implicit */unsigned long long int) var_4);
    var_29 = ((/* implicit */long long int) min((var_29), (max((((/* implicit */long long int) (~(var_11)))), (min((((/* implicit */long long int) 4278501510U)), (-4625307789689729359LL)))))));
}
