/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225263
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
    var_17 = ((/* implicit */signed char) (~(17669829342434370975ULL)));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) ^ (((((/* implicit */_Bool) 624732829414964456ULL)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (3297500760U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_10))))))))));
        var_19 -= ((/* implicit */long long int) (_Bool)1);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 2) 
        {
            arr_9 [i_1] [i_1] = (((_Bool)1) ? (((/* implicit */int) (signed char)-69)) : (-1782864451));
            var_20 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)152))) + (var_3)));
        }
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            var_21 ^= ((/* implicit */short) (((!(((/* implicit */_Bool) 746243432)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 2486619329U)) : (var_2))))));
            var_22 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_6 [i_1] [(signed char)6] [i_1])) < (16691461041558427345ULL)));
            arr_12 [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_3]))));
            var_23 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (1755283032151124261ULL)));
            arr_13 [i_1] [i_1] = (~(((/* implicit */int) (short)-25736)));
        }
        arr_14 [6] |= ((/* implicit */unsigned short) (_Bool)0);
        arr_15 [i_1] [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (arr_11 [i_1]) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_6 [5] [i_1] [(unsigned short)4]) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) > (var_11))))));
            arr_18 [i_1] [i_1] = ((/* implicit */signed char) var_10);
            /* LoopNest 3 */
            for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        {
                            var_25 |= (!(((/* implicit */_Bool) var_12)));
                            var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -5335106948748114548LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))));
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) (signed char)1)))))) : (var_2)));
                        }
                    } 
                } 
            } 
            arr_28 [i_1] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? ((+(624732829414964456ULL))) : (((/* implicit */unsigned long long int) arr_6 [i_4] [i_1] [i_1]))));
            var_28 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (short)17194)) >= (((/* implicit */int) var_10))))) << (((((/* implicit */int) arr_21 [6U] [6U])) - (73)))));
        }
        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */long long int) (signed char)-47);
            var_30 = ((/* implicit */_Bool) (((~(((/* implicit */int) var_0)))) + (((/* implicit */int) var_9))));
            arr_31 [i_1] = ((/* implicit */long long int) (signed char)1);
            arr_32 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_23 [i_8])) : (((/* implicit */int) var_6))));
            var_31 = ((((var_2) >= (((/* implicit */unsigned long long int) -1037622378717573177LL)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((unsigned short) -3034888590669969560LL))));
        }
    }
}
