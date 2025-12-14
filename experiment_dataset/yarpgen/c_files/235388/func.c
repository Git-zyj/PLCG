/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235388
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
    var_17 = ((/* implicit */unsigned long long int) var_11);
    var_18 = min((((/* implicit */unsigned int) var_14)), (((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-4749), ((short)4736))))) : (((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned int) var_3)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_2] [i_2] [i_3 + 1] [i_0] = (-(((arr_10 [i_3] [i_3 - 1] [i_2] [i_3 + 2]) / (arr_10 [i_3] [i_3] [i_2] [i_3 + 1]))));
                        arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = ((signed char) ((((/* implicit */_Bool) arr_5 [20ULL] [i_1] [i_0])) ? (min((var_8), (((/* implicit */unsigned long long int) (short)-4736)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2]))))))));
                        arr_13 [i_3 - 1] [i_2] [i_0] = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)4736))))))), (((/* implicit */int) max((((/* implicit */short) arr_6 [i_2 + 2])), (min(((short)4733), (var_1))))))));
                    }
                } 
            } 
            arr_14 [i_1] = ((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0]);
            arr_15 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)4748)))))))), (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [(signed char)16])) ? (((((/* implicit */_Bool) (short)4736)) ? (3849767237554547787ULL) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_2 [8LL]) : (((/* implicit */int) (short)32767)))))))));
            arr_16 [i_0] [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_6 [i_0]))));
        }
        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            arr_21 [(short)16] [i_4] [i_0] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_6 [i_4])))) <= (arr_18 [i_4] [i_0] [i_0]))) && (((/* implicit */_Bool) var_5))));
            arr_22 [i_0] [i_4] [i_0] = max((((/* implicit */unsigned long long int) 3899815266204092872LL)), (((((14596976836155003812ULL) % (((/* implicit */unsigned long long int) arr_7 [i_0] [i_4] [i_4])))) & (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16064))) : (arr_10 [i_0] [i_4] [i_0] [i_4]))))));
            arr_23 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 3899815266204092859LL))) ? (arr_17 [i_0] [9]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_5 [i_0] [i_0] [i_4]))))))) ? (((/* implicit */int) (short)4748)) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_4] [i_0] [i_0])) ? (arr_18 [i_0] [i_0] [i_4]) : (((/* implicit */long long int) 397524628)))) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_17 [(signed char)16] [i_4])))))))));
            arr_24 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_15)) ? (18446744073709551615ULL) : (arr_5 [i_0] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_4])) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (arr_18 [i_4] [i_4] [i_0])))) : (((((/* implicit */_Bool) arr_4 [i_4] [i_0])) ? (arr_5 [i_0] [i_0] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [21LL]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_19 [i_0] [i_4] [i_0])))))));
        }
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            for (unsigned char i_6 = 2; i_6 < 20; i_6 += 2) 
            {
                for (unsigned int i_7 = 1; i_7 < 21; i_7 += 4) 
                {
                    {
                        arr_35 [i_5] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [21U] [i_6 - 2]))) / (((((/* implicit */_Bool) var_4)) ? (min((arr_31 [i_5] [i_5] [(short)13] [15LL]), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)115))))))));
                        arr_36 [i_0] [i_0] [i_5] = ((/* implicit */long long int) ((((arr_9 [i_6 - 2] [i_7 - 1] [i_5]) * (arr_7 [i_5] [i_7 - 1] [i_7]))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)91)))));
                    }
                } 
            } 
        } 
        arr_37 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) 26U)) % (9223372036854775805LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_18 [i_0] [i_0] [13LL]) <= (((/* implicit */long long int) ((/* implicit */int) ((short) (short)-4776)))))))) : ((~(((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */long long int) 44U)) : (1149260534211035893LL)))))));
    }
}
