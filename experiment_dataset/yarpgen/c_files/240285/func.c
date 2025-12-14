/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240285
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
    var_20 ^= ((/* implicit */unsigned long long int) ((signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) (short)4252))) & (var_0))))));
    /* LoopSeq 4 */
    for (int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_15))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) < (4294967280U))) ? ((~(max((3ULL), (11217345806997966019ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_14))))));
        var_22 = (short)11109;
    }
    for (unsigned char i_1 = 4; i_1 < 20; i_1 += 4) 
    {
        var_23 = ((unsigned long long int) (+((~(-1718525968)))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_3 = 1; i_3 < 22; i_3 += 4) 
            {
                var_24 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-14961)) : (((/* implicit */int) (signed char)-16))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_19)))))))) | (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))))), (((((/* implicit */_Bool) 14348789747244612492ULL)) ? (((/* implicit */unsigned int) var_7)) : (1855755607U)))))));
                arr_12 [i_3] [i_2] [i_1] = ((/* implicit */short) min((((int) var_3)), (((((/* implicit */int) ((short) (short)-3851))) / (var_17)))));
                arr_13 [i_1] [i_1] |= (signed char)23;
            }
            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_19)) : (var_7)))))));
                var_26 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */unsigned long long int) var_17))))));
            }
            /* LoopNest 3 */
            for (signed char i_5 = 1; i_5 < 22; i_5 += 2) 
            {
                for (short i_6 = 2; i_6 < 21; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) -1718525968);
                            arr_24 [i_7] [i_2] [i_2] [i_1] = ((/* implicit */short) max(((+(min((((/* implicit */unsigned long long int) var_1)), (var_8))))), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_19)))))))));
                        }
                    } 
                } 
            } 
            arr_25 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */int) (signed char)-42))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)81)), (var_3))))))) : ((~(((/* implicit */int) (signed char)-125))))));
        }
    }
    for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 4) 
    {
        var_28 = ((/* implicit */long long int) ((unsigned char) ((unsigned long long int) (~(var_2)))));
        arr_29 [i_8] = ((/* implicit */int) (((!((!(((/* implicit */_Bool) var_3)))))) ? ((+(((unsigned long long int) var_13)))) : (min((((/* implicit */unsigned long long int) var_14)), (9799556849495939114ULL)))));
        var_29 &= ((/* implicit */unsigned long long int) ((short) var_16));
    }
    /* vectorizable */
    for (short i_9 = 4; i_9 < 11; i_9 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 12; i_10 += 2) 
        {
            for (unsigned int i_11 = 1; i_11 < 9; i_11 += 2) 
            {
                {
                    arr_40 [i_11 - 1] [i_11] [i_11] [i_9 - 3] = ((/* implicit */long long int) ((signed char) var_11));
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 1; i_12 < 11; i_12 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_13 = 4; i_13 < 9; i_13 += 4) 
                        {
                            arr_47 [i_13 - 2] [i_10] [i_9] [i_10] [i_9] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)114))) == (95619932904508183LL)));
                            arr_48 [i_12] [i_12] [i_11] [i_11] [i_10] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))));
                            var_30 ^= ((/* implicit */long long int) ((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
                        }
                        arr_49 [i_11] [i_11] [i_11 + 3] [i_11] [4LL] [i_11] = ((/* implicit */int) ((unsigned long long int) var_16));
                        arr_50 [i_11] [i_11] [i_10] [i_11] = ((/* implicit */short) ((unsigned long long int) (~(4294967293U))));
                    }
                }
            } 
        } 
        arr_51 [i_9] [i_9] = ((unsigned int) (~(((/* implicit */int) var_10))));
    }
    var_31 = ((/* implicit */unsigned long long int) ((_Bool) min(((+(((/* implicit */int) (short)32767)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) > (var_0)))))));
    var_32 = var_2;
}
